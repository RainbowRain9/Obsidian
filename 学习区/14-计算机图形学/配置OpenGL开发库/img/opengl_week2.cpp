#include <windows.h>	
#include <math.h>
#include <gl\GL.h>			
#include <gl\glu.h>			
#include <gl\glaux.h>		

#pragma comment (lib, "opengl32.lib")
#pragma comment (lib, "glu32.lib")

HGLRC	hRC = NULL;		// ������ɫ�������
HDC		hDC = NULL; 	// OpenGL��Ⱦ��������
HWND		hWnd = NULL;	// ���洰�ھ��
HINSTANCE	hInstance;		// �������ʵ��

bool	keys[256];			// ������̰���������
bool	active = TRUE;		// ���ڻ�ı�־��ȱʡΪTRUE
bool	fullscreen = FALSE;	// ȫ���ı�־��ȱʡΪFALSE

LRESULT	CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);	// WndProc�Ķ���

GLvoid ReSizeGLScene(GLsizei width, GLsizei height)		// ����OpenGL���ڴ�С
{
	if (height == 0)										
	{
		height = 1;										
	}

	glViewport(0, 0, width, height);					// ���õ�ǰ�ӿ�

	glMatrixMode(GL_PROJECTION);						// ѡ��ͶӰ����
	glLoadIdentity();									// ����ͶӰ����

	// �����ӿڴ�С
	gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);							// ѡ��ģ�͹۲����
	glLoadIdentity();									// ����ģ�͹۲����
}

int InitGL(GLvoid)										// �˴���ʼ��OpenGL������������
{
	glShadeModel(GL_SMOOTH);							// ������Ӱƽ��
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// ����������Ϊ��ɫ
	glClearDepth(1.0f);									// ������Ȼ���
	glEnable(GL_DEPTH_TEST);							// ������Ȳ���
	glDepthFunc(GL_LEQUAL);								// ������Ȳ��Ե�����
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// ��ϵͳ��͸�ӽ�������
	return TRUE;										// ��ʼ��OK
}

int DrawGLScene(GLvoid)									// �����￪ʼ�������еĻ���
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// �����Ļ����Ȼ���
	glLoadIdentity();					// ���õ�ǰ��ģ�͹۲����
	glTranslatef(0.0f, 0.0f, -7.0f);

	return TRUE;										
}

GLvoid KillGLWindow(GLvoid)								// �������ٴ���
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


//����OpenGL����
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

LRESULT CALLBACK WndProc(HWND	hWnd,			// ���ھ��
	UINT	uMsg,			// ���ڵ���Ϣ
	WPARAM	wParam,			// ���ӵ���Ϣ����
	LPARAM	lParam)			// ���ӵ���Ϣ����
{
	switch (uMsg)									// ���Windows��Ϣ
	{
	case WM_ACTIVATE:							// ���Ӵ��ڼ�����Ϣ
	{
		if (!HIWORD(wParam))					// �����С��״̬
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

	case WM_CLOSE:								// �Ƿ��յ�Close��Ϣ��
	{
		PostQuitMessage(0);						// �����˳���Ϣ
		return 0;								
	}

	case WM_KEYDOWN:							// �Ƿ���һ�����������£�
	{
		keys[wParam] = TRUE;					// ����ǣ�����ΪTRUE
		return 0;								
	}

	case WM_KEYUP:								// �Ƿ���һ���������ɿ���
	{
		keys[wParam] = FALSE;					// ����ǣ�����ΪFALSE
		return 0;								
	}

	case WM_SIZE:								// ����OpenGL���ڴ�С
	{
		ReSizeGLScene(LOWORD(lParam), HIWORD(lParam)); 
		return 0;								
	}
	}

	// Pass All Unhandled Messages To DefWindowProc
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

//��׼��Windows�������
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