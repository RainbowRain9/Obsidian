---
created: 2025-05-14T10:46
updated: 2025-06-04T08:33
---
> 本文由 [简悦 SimpRead](http://ksria.com/simpread/) 转码， 原文地址 [blog.csdn.net](https://blog.csdn.net/weixin_55944949/article/details/130895608?spm=1001.2014.3001.5501)

#### 目录

*   [前言](#_2)
*   [1. 准备](#1__30)
*   *   [1.1 下载源码](#11__31)
    *   *   [方式一：](#_34)
        *   [方式二：](#_52)
    *   [1.2 安装依赖](#12__69)
    *   [1.3 安装 Gazebo](#13__Gazebo_89)
*   [2. 编译](#2__153)
*   [3. 配置环境](#3__165)
*   [4. 测试](#4__205)
*   [参考](#_232)

前言
--

**本教程基于 ROS1** ，在搭建之前，必须把 `ROS、MAVROS、QGC` 等基础环境安装配置完成。如果没有配置完成，大家可以参考我之前的教程配置。

> **小白必看**：👇👇👇👇👇👇👇
> 
> 本次安装是以 `PX4 v1.13.2` 为例。  
> 我的配置如下（仅供参考）：  
> 虚拟机 `Ubuntu 18.04` (运行内存 4G、硬盘内存 80G) 、`ROS1 Melodic` 、`QGC v4.2.6`
> 
> ( **Ubuntu 20.04 、ROS1 Noetic 、PX4 v1.13.2 ；Ubuntu 20.04 、ROS1 Noetic 、PX4 v1.14.0 也同样适用**)
> 
> **1. 禁止无脑复制**：首先大部分命令都有先后顺序，就是要上一个命令执行成下一个才能执行成功，对于不熟悉的命令可以直接复制问`AI` 这样还能顺带学习学习；其次在有些情况下多个命令一起执行会出现奇怪的错误，而且有些命令旁边有注释，有时候复制上去可能也会出现错误。  
> **2. 建议使用虚拟机**：虚拟机的配置必须大于等于我的虚拟机配置。虽然虚拟机得性能有限，但是对于新手入门阶段是完全够用了，后续大型仿真再用双系统也比较熟悉了。而且虚拟机有一个快照功能，可以保存当前虚拟机的状态 (相当于存档)，这样如果后面出了问题要重新搭建环境，可以用快照回到上一个状态，这样就不用重头开始（我一般是安装好 ROS 拍一个、安装好 [mavros](https://so.csdn.net/so/search?q=mavros&spm=1001.2101.3001.7020) 拍一个…）。  
> **3. 关于网络**：由于一些懂得都得的原因，再加上每个人的网络环境不同，我们下载 GitHub 上的资源、安装 Python 包、apt 安装包等会时快时慢，所以大家会换源，比如一开始的换 apt 软件安装源等。但是下载资源一定要耐心，如果是网络问题，可以尝试多执行几次命令，而且有些我也给了相应的解决方案。

**基于 ROS1 的 PX4 仿真环境搭建系列：** 👇👇👇  
建议安装之前可以先看看这个 👉 [ubuntu 搭建 PX4 无人机仿真环境 (1) —— 概念介绍](https://blog.csdn.net/weixin_55944949/article/details/130848009?spm=1001.2014.3001.5502)

[ubuntu 搭建 PX4 无人机仿真环境 (2) —— MAVROS 安装](https://blog.csdn.net/weixin_55944949/article/details/130877689?spm=1001.2014.3001.5502)

[ubuntu 搭建 PX4 无人机仿真环境 (3) —— ubuntu 安装 QGC 地面站](https://blog.csdn.net/weixin_55944949/article/details/130895363?spm=1001.2014.3001.5502)

[ubuntu 安装 ROS melodic(最新、超详细图文教程)](https://blog.csdn.net/weixin_55944949/article/details/130468032?spm=1001.2014.3001.5502)

**ROS2 请看** 👇👇👇  
[Ubuntu 搭建 PX4 无人机仿真环境 (5) —— 仿真环境搭建 (以 Ubuntu 22.04,ROS2 Humble 为例)](https://blog.csdn.net/weixin_55944949/article/details/140627640?spm=1001.2014.3001.5502)

如果想要自己编译 PX4 固件可以看 [Ubuntu 编译 PX4 固件](https://blog.csdn.net/weixin_55944949/article/details/140352709?spm=1001.2014.3001.5501) 这篇教程

1. 准备
-----

### 1.1 下载源码

#### 方式一：

从 Github 上下载，但是比较考验个人网速

```
sudo apt-get install git

```

```
git clone https://github.com/PX4/PX4-Autopilot.git # 下载源码
mv PX4-Autopilot PX4_Firmware  # 更改目录名

```

```
cd PX4_Firmware
git checkout -b dev v1.13.2  # 切换版本
git submodule update --init --recursive   # 更新下载子模块
# 比较慢，不行就多执行几次

```

#### 方式二：

从提供的网盘里下，或者从 QQ 群 (961297255) 里下载

> 链接: https://pan.baidu.com/s/1aCNCW200la-UPX2CPJukXg  
> 提取码: krb5

下载后解压，然后执行下面命令：

```
cd PX4_Firmware
wget https://gitee.com/tyx6/mytools/raw/main/px4/set_executable.sh
chmod +x set_executable.sh
./set_executable.sh

```

![](https://i-blog.csdnimg.cn/blog_migrate/75e66860eee1c72c5c4e97413c8d0f85.png#pic_center)

### 1.2 安装依赖

```
cd ~/PX4_Firmware/Tools/setup

```

> **修改文件并备份 （就修改了一个 python 包版本和把 pip 安装源换成了清华源），这一步是可做可不做，如果觉得 python 包下载太慢了，可以试试**
> 
> ```
> sed -i.bak 's/empy>=3.3/empy==3.3.4/' ./requirements.txt
> sed -i.bak 's|\/requirements.txt|\/requirements.txt -i https:\/\/pypi.tuna.tsinghua.edu.cn\/simple|' ./ubuntu.sh
> 
> ```

```
chmod +x ubuntu.sh
./ubuntu.sh --no-nuttx --no-sim-tools
# 这是官方提供的脚本 有两个可选参数
# --no-sim-tools   不安装仿真环境
# --no-nuttx   不安装交叉编译环境
#（如果需要自己编译飞控固件，烧录到飞控中，那就需要交叉编译环境）
# 脚本执行时间，跟个人网络有关，可能需要一段时间

```

重启 Ubuntu

### 1.3 安装 Gazebo

Gazebo 是一款强大的 3D 仿真软件，主要用于机器人学的研究和开发。它提供了高度逼真的物理模拟环境，包括动力学、碰撞检测、传感器模型以及与真实世界相似的物理属性如重力、摩擦力等。Gazebo 可以模拟各种类型的机器人，从移动机器人、无人机到机械臂，甚至可以模拟整个城市环境。  
**注：使用之前要检查是否已经安装了 gazebo ，建议使用官方推荐的 gazebo 版本**

```
gazebo --version

```

![](https://i-blog.csdnimg.cn/blog_migrate/fb11a7e037d6278d714aaa4c747e77f9.png#pic_center)

如果出现 **上图内容**，说明没有安装，直接跳到开始安装这一步。如果出现了 **gazebo 的版本信息** 说明已经安装了，要卸载，命令如下：

```
sudo apt-get remove gazebo* 
sudo apt-get remove libgazebo*
sudo apt-get remove ros-$ROS_DISTRO-gazebo*

```

开始安装 **（Ubuntu 18 会安装 gazebo 9.19，Ubuntu 20 会安装 gazebo 11.15.1）**

```
cd ~/PX4_Firmware/Tools/setup
./ubuntu.sh --no-nuttx
# 这一步会安装仿真环境，包括gazebo
# 脚本执行时间，跟个人网络有关，可能需要一段时间
sudo apt update && sudo apt upgrade
sudo apt-get install ros-$ROS_DISTRO-gazebo-ros-pkgs ros-$ROS_DISTRO-gazebo-ros-control

```

**重启 Ubuntu** ，之后测试一下 gazebo

```
gazebo --version

```

![](https://i-blog.csdnimg.cn/blog_migrate/b9c09bc2ed63aa0693338078ff03a71a.png#pic_center)

再运行一下 **gazebo** ：

```
gazebo

```

![](https://i-blog.csdnimg.cn/blog_migrate/92abaafbe8211d00872c33e414fa19fd.png#pic_center)

如果是在虚拟机上，可能出现上图错误，输入以下命令：

```
echo "export SVGA_VGPU10=0" >> ~/.bashrc
source ~/.bashrc

```

再重新运行 gazebo

```
gazebo

```

出现下图，表示运行成功：  
![](https://i-blog.csdnimg.cn/blog_migrate/5ac0eb8bf2366dbd8dd53182b361682c.png#pic_center)  
**注：**  
运行 Gazebo 仿真，可能会缺模型，这时会自动下载，Gazebo 模型服务器在国外，自动下载会比较久，所以我们可以先下载到本地。

```
git clone https://gitee.com/tyx6/gazebo_models.git
# 检测文件夹 ~/.gazebo/models 是否存在，如果不存在创建
if [ ! -d "~/.gazebo/models" ]; then mkdir -p ~/.gazebo/models ;fi
mv ./gazebo_models/* ~/.gazebo/models/

```

或者也可以用下面提供的`ZIP`压缩包，将该压缩包里的模型文件放在 **~/.gazebo/models/** 路径下，然后可以看到很多模型文件。

> 如果下载慢，可以从网盘里下，或者从 QQ 群 (961297255) 里下载  
> 链接：https://pan.baidu.com/s/1O3J7nrjU2imyYWRwl9114g  
> 提取码：ud28

2. 编译
-----

```
cd ~/PX4_Firmware
make px4_sitl_default gazebo   # 这步可能有点慢，跟 ubuntu 的配置有关

```

出现下图表示编译成功 😄  
![](https://i-blog.csdnimg.cn/blog_migrate/a7affb86d0d347e72744f930296224c6.png#pic_center)  
**注：如果运行后终端有下图报错，这个不影响仿真，不用管也行。这是因为 gazebo 会检查 models 文件夹下是否有 model.config 文件，但是 .git 文件夹不属于 model 文件，那自然也不会有 model.config 文件。如果觉得难受就从其他 model.config 文件复制修改一个过来，或者删掉 .git 文件夹。**  
![](https://i-blog.csdnimg.cn/blog_migrate/803a09adb662e0fddb2104b098a4c849.png#pic_center)

3. 配置环境
-------

**将下面语句粘贴到 ~/.bashrc (此文件在主目录下，是个隐藏文件) 文件末尾（前两个 source 顺序不能颠倒，路径要根据自己的实际路径修改，如果一直按照我的步骤来，应该是不用修改）**

```
gedit ~/.bashrc  # 打开文件

```

对于 PX4 v1.13 及之前的

```
source ~/catkin_ws/devel/setup.bash  # 可选
source ~/PX4_Firmware/Tools/setup_gazebo.bash ~/PX4_Firmware/ ~/PX4_Firmware/build/px4_sitl_default
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/PX4_Firmware
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/PX4_Firmware/Tools/sitl_gazebo

```

对于 PX4 v1.14

```
source ~/catkin_ws/devel/setup.bash  # 可选
source ~/PX4_Firmware/Tools/simulation/gazebo-classic/setup_gazebo.bash ~/PX4_Firmware/ ~/PX4_Firmware/build/px4_sitl_default
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/PX4_Firmware/
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/PX4_Firmware/Tools/simulation/gazebo-classic/sitl_gazebo-classic

```

> **注： 为了方便大家，我做了一个自动添加环境的脚本，效果与手动添加等同，只要有一个成功就行。执行脚本之前要确认之前没在 .bashrc 文件中加入环境，有的话删掉或者注释，环境重复也会导致配置失败**  
> **首先下载脚本，然后将脚本放入你的 PX4 源码目录下，再执行（以我的为例）：**
> 
> ```
> cd ~/PX4_Firmware
> wget https://gitee.com/tyx6/mytools/raw/main/px4/setenv.sh
> chmod +x setenv.sh  # 添加可执行权限
> ./setenv.sh
> 
> ```

*   更新环境（ **最好重启一下 Ubuntu** ）：

```
source ~/.bashrc 

```

关掉终端，再次打开，会跟下图差不多： （这是 PX4 v1.13.2）  
![](https://i-blog.csdnimg.cn/blog_migrate/490ac168c05ab8d6d2981e1b315d78bd.png#pic_center)

4. 测试
-----

在终端输入下面命令：

```
roslaunch px4 mavros_posix_sitl.launch

```

![](https://i-blog.csdnimg.cn/blog_migrate/15aa6ffb4bb601ddd3701ac09328f7c7.png#pic_center)

打开另一个终端，运行下面命令，查看 MAVROS 与仿真无人机通信状况。**若 connected: True，则通信成功，如果是 false，一般是因为 .bashrc 里的路径写的不对，请仔细检查。**

```
rostopic echo /mavros/state | grep connected    # 只查看 connected 信息
# rostopic echo /mavros/state                     # 查看全部信息

```

![](https://i-blog.csdnimg.cn/blog_migrate/58b2cbe9b4a3d0b95f8e096031fad42a.png#pic_center)

**到这 PX4 无人机基本仿真环境就搭建完成了，大家可以基于此来拓展自己的仿真。  
也可以继续看下面教程** 👇

[带你玩转 PX4 无人机仿真 (1) —— 运行官方案例（C++）](https://blog.csdn.net/weixin_55944949/article/details/132570487?spm=1001.2014.3001.5501)

**建了个交流群，方便大家交流学习** 😁  
![](https://i-blog.csdnimg.cn/blog_migrate/dbd07a97ad391accf2fc4b9007e9dc51.jpeg#pic_center)

> 如有其他问题，或者发现文章有错误，请在评论区留言  
> Keep learning！

参考
--

[仿真平台基础配置（对应 PX4 1.13 版）](https://www.yuque.com/xtdrone/manual_cn/basic_config_13)

[PX4 documentation](https://docs.px4.io/main/zh/getting_started/px4_basic_concepts.html)