#include <windows.h>	
#include <math.h>
#include <gl\GL.h>			
#include <gl\glu.h>			
#include <gl\glaux.h>		

#pragma comment (lib, "opengl32.lib")
#pragma comment (lib, "glu32.lib")

HGLRC	hRC = NULL;		// 窗口着色描述句柄
HDC		hDC = NULL; 	// OpenGL渲染描述表句柄
HWND		hWnd = NULL;	// 保存窗口句柄
HINSTANCE	hInstance;		// 保存程序实例

bool	keys[256];			// 保存键盘按键的数组
bool	active = TRUE;		// 窗口活动的标志，缺省为TRUE
bool	fullscreen = FALSE;	// 全屏的标志，缺省为FALSE

LRESULT	CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);	// WndProc的定义

GLvoid ReSizeGLScene(GLsizei width, GLsizei height)		// 重置OpenGL窗口大小
{
	if (height == 0)										
	{
		height = 1;										
	}

	glViewport(0, 0, width, height);					// 重置当前视口

	glMatrixMode(GL_PROJECTION);						// 选择投影矩阵
	glLoadIdentity();									// 重置投影矩阵

	// 设置视口大小
	gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);							// 选择模型观察矩阵
	glLoadIdentity();									// 重置模型观察矩阵
}

int InitGL(GLvoid)										// 此处开始对OpenGL进行所有设置
{
	glShadeModel(GL_SMOOTH);							// 启用阴影平滑
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// 将背景设置为黑色
	glClearDepth(1.0f);									// 设置深度缓存
	glEnable(GL_DEPTH_TEST);							// 启用深度测试
	glDepthFunc(GL_LEQUAL);								// 所作深度测试的类型
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// 让系统对透视进行修正
	return TRUE;										// 初始化OK
}

int DrawGLScene(GLvoid)									// 从这里开始进行所有的绘制
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// 清除屏幕和深度缓存
	glLoadIdentity();					// 重置当前的模型观察矩阵
	glTranslatef(0.0f, 0.0f, -7.0f);

	return TRUE;										
}

GLvoid KillGLWindow(GLvoid)								// 正常销毁窗口
{
	if (fullscreen)										
	{
		ChangeDisplaySettings(NULL, 0);					
		ShowCursor(TRUE);								
	}

	if (hRC)											
	{
		if (!wglMakeCurrent(NULL, NULL))					
		{
			MessageBox(NULL, "Release Of DC And RC Failed.", "SHUTDOWN ERROR", MB_OK | MB_ICONINFORMATION);
		}

		if (!wglDeleteContext(hRC))						
		{
			MessageBox(NULL, "Release Rendering Context Failed.", "SHUTDOWN ERROR", MB_OK | MB_ICONINFORMATION);
		}
		hRC = NULL;										
	}

	if (hDC && !ReleaseDC(hWnd, hDC))					
	{
		MessageBox(NULL, "Release Device Context Failed.", "SHUTDOWN ERROR", MB_OK | MB_ICONINFORMATION);
		hDC = NULL;										
	}

	if (hWnd && !DestroyWindow(hWnd))					
	{
		MessageBox(NULL, "Could Not Release hWnd.", "SHUTDOWN ERROR", MB_OK | MB_ICONINFORMATION);
		hWnd = NULL;										
	}

	if (!UnregisterClass("OpenGL", hInstance))			
	{
		MessageBox(NULL, "Could Not Unregister Class.", "SHUTDOWN ERROR", MB_OK | MB_ICONINFORMATION);
		hInstance = NULL;									
	}
}


//创建OpenGL窗口
BOOL CreateGLWindow(const char* title, int width, int height, int bits, bool fullscreenflag)
{
	GLuint		PixelFormat;			
	WNDCLASS	wc;						
	DWORD		dwExStyle;				
	DWORD		dwStyle;				
	RECT		WindowRect;				
	WindowRect.left = (long)0;			
	WindowRect.right = (long)width;		
	WindowRect.top = (long)0;				
	WindowRect.bottom = (long)height;		

	fullscreen = fullscreenflag;			

	hInstance = GetModuleHandle(NULL);				
	wc.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;	
	wc.lpfnWndProc = (WNDPROC)WndProc;					
	wc.cbClsExtra = 0;									
	wc.cbWndExtra = 0;									
	wc.hInstance = hInstance;							
	wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);			
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);			
	wc.hbrBackground = NULL;									
	wc.lpszMenuName = NULL;									
	wc.lpszClassName = "OpenGL";								

	if (!RegisterClass(&wc))									
	{
		MessageBox(NULL, "Failed To Register The Window Class.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;											
	}

	if (fullscreen)												
	{
		DEVMODE dmScreenSettings;								
		memset(&dmScreenSettings, 0, sizeof(dmScreenSettings));	
		dmScreenSettings.dmSize = sizeof(dmScreenSettings);		
		dmScreenSettings.dmPelsWidth = width;				
		dmScreenSettings.dmPelsHeight = height;				
		dmScreenSettings.dmBitsPerPel = bits;					
		dmScreenSettings.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;

		
		if (ChangeDisplaySettings(&dmScreenSettings, CDS_FULLSCREEN) != DISP_CHANGE_SUCCESSFUL)
		{
			
			if (MessageBox(NULL, "The Requested Fullscreen Mode Is Not Supported By\nYour Video Card. Use Windowed Mode Instead?", "OPENGL", MB_YESNO | MB_ICONEXCLAMATION) == IDYES)
			{
				fullscreen = FALSE;		
			}
			else
			{
				MessageBox(NULL, "Program Will Now Close.", "ERROR", MB_OK | MB_ICONSTOP);
				return FALSE;									
			}
		}
	}

	if (fullscreen)												
	{
		dwExStyle = WS_EX_APPWINDOW;								
		dwStyle = WS_POPUP;										
		ShowCursor(FALSE);										
	}
	else
	{
		dwExStyle = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;			
		dwStyle = WS_OVERLAPPEDWINDOW;							
	}

	AdjustWindowRectEx(&WindowRect, dwStyle, FALSE, dwExStyle);		

	if (!(hWnd = CreateWindowEx(dwExStyle,							
		"OpenGL",							
		title,								
		dwStyle |							
		WS_CLIPSIBLINGS |					
		WS_CLIPCHILDREN,					
		0, 0,								
		WindowRect.right - WindowRect.left,	
		WindowRect.bottom - WindowRect.top,	
		NULL,								
		NULL,								
		hInstance,							
		NULL)))								
	{
		KillGLWindow();								
		MessageBox(NULL, "Window Creation Error.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	static	PIXELFORMATDESCRIPTOR pfd =				
	{
		sizeof(PIXELFORMATDESCRIPTOR),				
		1,											
		PFD_DRAW_TO_WINDOW |						
		PFD_SUPPORT_OPENGL |						
		PFD_DOUBLEBUFFER,							
		PFD_TYPE_RGBA,								
		bits,										
		0, 0, 0, 0, 0, 0,							
		0,											
		0,											
		0,											
		0, 0, 0, 0,									
		16,											
		0,											
		0,											
		PFD_MAIN_PLANE,								
		0,											
		0, 0, 0										
	};

	if (!(hDC = GetDC(hWnd)))							
	{
		KillGLWindow();								
		MessageBox(NULL, "Can't Create A GL Device Context.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	if (!(PixelFormat = ChoosePixelFormat(hDC, &pfd)))	
	{
		KillGLWindow();								
		MessageBox(NULL, "Can't Find A Suitable PixelFormat.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	if (!SetPixelFormat(hDC, PixelFormat, &pfd))		
	{
		KillGLWindow();								
		MessageBox(NULL, "Can't Set The PixelFormat.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	if (!(hRC = wglCreateContext(hDC)))				
	{
		KillGLWindow();								
		MessageBox(NULL, "Can't Create A GL Rendering Context.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	if (!wglMakeCurrent(hDC, hRC))					
	{
		KillGLWindow();								
		MessageBox(NULL, "Can't Activate The GL Rendering Context.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	ShowWindow(hWnd, SW_SHOW);						
	SetForegroundWindow(hWnd);						
	SetFocus(hWnd);									
	ReSizeGLScene(width, height);					

	if (!InitGL())									
	{
		KillGLWindow();								
		MessageBox(NULL, "Initialization Failed.", "ERROR", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;								
	}

	return TRUE;									
}

LRESULT CALLBACK WndProc(HWND	hWnd,			// 窗口句柄
	UINT	uMsg,			// 窗口的消息
	WPARAM	wParam,			// 附加的消息内容
	LPARAM	lParam)			// 附加的消息内容
{
	switch (uMsg)									// 检查Windows消息
	{
	case WM_ACTIVATE:							// 监视窗口激活消息
	{
		if (!HIWORD(wParam))					// 检查最小化状态
		{
			active = TRUE;						
		}
		else
		{
			active = FALSE;						
		}

		return 0;								
	}

	case WM_SYSCOMMAND:
	{
		switch (wParam)
		{
		case SC_SCREENSAVE:
		case SC_MONITORPOWER:
			return 0;
		}
		break;
	}

	case WM_CLOSE:								// 是否收到Close消息？
	{
		PostQuitMessage(0);						// 发送退出消息
		return 0;								
	}

	case WM_KEYDOWN:							// 是否有一个按键被按下？
	{
		keys[wParam] = TRUE;					// 如果是，则设为TRUE
		return 0;								
	}

	case WM_KEYUP:								// 是否有一个按键被松开？
	{
		keys[wParam] = FALSE;					// 如果是，则设为FALSE
		return 0;								
	}

	case WM_SIZE:								// 调整OpenGL窗口大小
	{
		ReSizeGLScene(LOWORD(lParam), HIWORD(lParam)); 
		return 0;								
	}
	}

	// Pass All Unhandled Messages To DefWindowProc
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

//标准的Windows程序入口
int WINAPI WinMain(HINSTANCE	hInstance,			
	HINSTANCE	hPrevInstance,		
	LPSTR		lpCmdLine,			
	int			nCmdShow)			
{
	MSG		msg;									
	BOOL	done = FALSE;								

	// Create Our OpenGL Window
	if (!CreateGLWindow("The First Polygon Tutorial", 640, 480, 16, fullscreen))
	{
		return 0;									
	}

	while (!done)									
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))	
		{
			if (msg.message == WM_QUIT)				
			{
				done = TRUE;							
			}
			else									
			{
				TranslateMessage(&msg);				
				DispatchMessage(&msg);				
			}
		}
		else										
		{
			
			if ((active && !DrawGLScene()) || keys[VK_ESCAPE])	
			{
				done = TRUE;							
			}
			else									
			{
				SwapBuffers(hDC);					
			}

			if (keys[VK_F1])						
			{
				keys[VK_F1] = FALSE;					
				KillGLWindow();						
				fullscreen = !fullscreen;				
				
				if (!CreateGLWindow("The First Polygon Tutorial", 640, 480, 16, fullscreen))
				{
					return 0;						
				}
			}
		}
	}

	KillGLWindow();									
	return (msg.wParam);							
}