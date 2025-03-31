---
命名: __配置OpenGL开发库
课程:
  - "[[Week2]]"
状态: 完成
创建时间: Invalid date
执行人: 蔡蔡鸿宇
时间安排: Invalid date
待解决问题: 待解决:[ 0 ]
created: 2025-03-29T21:52
updated: 2025-03-31T08:29
---
> [!important]

### ⚡==|结构和引用==

---

![[OpenGL开发库.rar]]

![[opengl_week2.cpp]]

---

### ☂️ ==|操作演示==

---

- 解压OpenGL开发库

![[学习区/14-计算机图形学/配置OpenGL开发库/img/image.png|image.png]]

- 将gl文件夹整体复制
    - 将其放入==**C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\VS\include**==
        
        ![[学习区/14-计算机图形学/配置OpenGL开发库/img/image 1.png|image 1.png]]
        
- 复制后缀名为.lib的文件
    - 放入==**C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\VS\lib**==
        
        ![[学习区/14-计算机图形学/配置OpenGL开发库/img/image 2.png|image 2.png]]
        
- 复制后缀名为.dll的文件
    - 放入==**C:\Windows\System32**==
- 打开Visual Studio 2019
    - 创建新项目
        
        ![[学习区/14-计算机图形学/配置OpenGL开发库/img/image 3.png|image 3.png]]
        
        - 点击Windows 桌面向导
            
            - 位置放在自己在C盘创建的opergl文件夹下，即==**C:\opergl**==
            
            ![[image 4.png]]
            
- 复制**opengl_week2.cpp**到==**C:\opergl\Project1\Project1**==下
    
    ![[image 5.png]]
    
- 回到Visual Studio 2019
    - 右键**源文件**→添加→现有项→==选择刚才添加的====**opengl_week2.cpp**====文件==
        
        ![[image 6.png]]
        
    - 右键**Project1**→点击**属性**
        
        ![[image 7.png]]
        
        - 配置属性→高级→字符集→把**使用Unicode字符集**==**改为**==**未设置**
            
            ![[image 8.png]]
            
    - 点击**生成**→**生成解决方案**
        
        ![[image 9.png]]