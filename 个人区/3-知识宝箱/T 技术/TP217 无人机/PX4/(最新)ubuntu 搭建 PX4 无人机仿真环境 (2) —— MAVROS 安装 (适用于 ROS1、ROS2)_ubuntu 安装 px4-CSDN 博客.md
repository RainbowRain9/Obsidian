---
created: 2025-05-14T11:04
updated: 2025-06-04T08:33
---
> 本文由 [简悦 SimpRead](http://ksria.com/simpread/) 转码， 原文地址 [blog.csdn.net](https://blog.csdn.net/weixin_55944949/article/details/130877689?spm=1001.2014.3001.5502)

#### ubuntu 安装 MAVROS

*   *   [前言](#_1)
*   [1. 方法一：二进制安装（推荐）](#1__19)
*   [2. 方法二：源码安装](#2__40)
*   *   [ROS1](#ROS1_43)
    *   [ROS2](#ROS2_96)
*   [3. 解决安装 GeographicLib datasets 缓慢](#3__GeographicLib_datasets__151)
*   [4. 检测](#4__163)
*   [参考](#_193)

### 前言

**MAVROS 是一个 ROS（Robot Operating System）软件包 ，有了它就可以让 ROS 与飞控通信。这次安装 ROS1 是以 ubuntu 18.04 (ROS1 Melodic) 为例，ROS2 是以 ubuntu 22.04 (ROS Humble) 为例，也适用于其他版本 。安装之前确保 ROS 安装成功，没安装的可以看我仿真系列教程。  
（注：安装方式有二进制安装和源码安装两种方式，源码安装需要从 GitHub 上下载源码，推荐二进制安装）**

**搭建仿真环境系列教程**👇

[ubuntu 搭建 PX4 无人机仿真环境 (1) —— 概念介绍](https://blog.csdn.net/weixin_55944949/article/details/130848009?spm=1001.2014.3001.5502)

[ubuntu 搭建 PX4 无人机仿真环境 (2) —— MAVROS 安装 (适用于 ROS1、ROS2)](https://blog.csdn.net/weixin_55944949/article/details/130877689?spm=1001.2014.3001.5502)

[ubuntu 搭建 PX4 无人机仿真环境 (3) —— ubuntu 安装 QGC 地面站](https://blog.csdn.net/weixin_55944949/article/details/130895363?spm=1001.2014.3001.5502)

[ubuntu 搭建 PX4 无人机仿真环境 (4) —— 仿真环境搭建](https://blog.csdn.net/weixin_55944949/article/details/130895608?spm=1001.2014.3001.5501)

[ubuntu 安装 ROS melodic(最新、超详细图文教程)](https://blog.csdn.net/weixin_55944949/article/details/130468032?spm=1001.2014.3001.5502)

> **注：在 Ubuntu 20.04，ROS2 foxy 中，启动 px4.launch 可能会遇到 InvalidLaunchFileError，ValueError 之类的错误，这是 Foxy 中的 MAVROS2 2.4.0 版本会有这个问题，换版本就行，可以参考这个** [**教程**](https://hccllxs.blog.csdn.net/article/details/138527440?spm=1001.2014.3001.5502)

1. 方法一：二进制安装（推荐）
----------------

*   下载安装

```
sudo apt install ros-$ROS_DISTRO-mavros ros-$ROS_DISTRO-mavros-extras

```

```
# 安装 GeographicLib datasets:
wget https://gitee.com/tyx6/mytools/raw/main/mavros/install_geographiclib_datasets.sh
chmod a+x ./install_geographiclib_datasets.sh
sudo ./install_geographiclib_datasets.sh  #这步可能需要装一段时间

```

**注：如果 10 分钟了都没安装好，可以参考后面安装 GeographicLib datasets 缓慢的章节**  
![](https://i-blog.csdnimg.cn/blog_migrate/a3f7aa53d218ca22d10e94850e8cb5fe.png#pic_center)

*   更新环境：

```
source ~/.bashrc

```

2. 方法二：源码安装
-----------

**注：源码安装之前，必须确保 ROS 已经配置了 rosdep**

### ROS1

*   安装依赖

```
sudo apt-get install python-catkin-tools python-rosinstall-generator -y

# For Ros Noetic use that:
# sudo apt install python3-catkin-tools python3-rosinstall-generator python3-osrf-pycommon -y

```

*   创建`ROS1`工作空间（如果之前有就不用了）后面的步骤都要在 **catkin_ws** 目录下执行

```
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws
catkin init
wstool init src

```

*   下载源码和依赖：

```
cd ~/catkin_ws
rosinstall_generator --rosdistro $ROS_DISTRO mavlink | tee /tmp/mavros.rosinstall
rosinstall_generator --upstream mavros | tee -a /tmp/mavros.rosinstall

```

```
wstool merge -t src /tmp/mavros.rosinstall
wstool update -t src -j4   # 这步会把源码下载到本地，访问的是GitHub，可能会失败，多试几次
rosdep install --from-paths src --ignore-src -y  # 安装依赖

```

![](https://i-blog.csdnimg.cn/blog_migrate/3a6c238c7aff5b82c2d95d9c8edff7fc.png#pic_center)

*   安装 `GeographicLib datasets` ：

```
cd ~/catkin_ws
sudo ./src/mavros/mavros/scripts/install_geographiclib_datasets.sh

```

**注：如果 10 分钟了都没安装好，可以参考后面安装 GeographicLib datasets 缓慢的章节**

*   编译：

```
cd ~/catkin_ws
# 编译源码 大概需要几分钟
catkin build 

```

编译成功

![](https://i-blog.csdnimg.cn/blog_migrate/28a6c48bb7933cf65af9229ac3e6f077.png#pic_center)

*   配置环境

```
echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc 
source ~/.bashrc #使环境生效

```

### ROS2

*   安装依赖 ：

```
sudo apt install -y python3-vcstool python3-rosinstall-generator python3-osrf-pycommon python3-colcon-common-extensions

```

*   创建`ROS2`工作空间（如果之前有就不用了）后面的步骤都要在 **ros2_ws** 目录下执行

```
mkdir -p ~/ros2_ws/src

```

*   下载源码和依赖：

```
cd ~/ros2_ws/
rosinstall_generator --format repos mavlink | tee /tmp/mavlink.repos
rosinstall_generator --format repos --upstream mavros | tee -a /tmp/mavros.repos

```

![](https://i-blog.csdnimg.cn/blog_migrate/13678682bbfd7d5e23c82a9486e033d1.png#pic_center)

```
vcs import src < /tmp/mavlink.repos
vcs import src < /tmp/mavros.repos
# 这两个命令比较考验网络，如果失败，多执行几次即可

```

![](https://i-blog.csdnimg.cn/blog_migrate/a356a940c051313b3f409b4e80b1495a.png#pic_center)

```
rosdep install --from-paths src --ignore-src -y

```

![](https://i-blog.csdnimg.cn/blog_migrate/9c3d1a1ba5cc60ad11a896b43f58e023.png#pic_center)

*   安装 `GeographicLib datasets` ：

```
cd ~/ros2_ws/
sudo ./src/mavros/mavros/scripts/install_geographiclib_datasets.sh #这步可能需要装一段时间

```

**注：如果 10 分钟了都没安装好，可以参考后面安装 GeographicLib datasets 缓慢的章节**

*   编译：

```
cd ~/ros2_ws/
colcon build # 大概10分钟左右，跟个人配置有关

```

![](https://i-blog.csdnimg.cn/blog_migrate/271521a965c75be76f4b372ed5bc30c5.png#pic_center)

*   配置环境

```
echo "source ~/ros2_ws/install/setup.bash" >> ~/.bashrc 
source ~/.bashrc #使环境生效

```

3. 解决安装 GeographicLib datasets 缓慢
---------------------------------

鉴于每个人环境不同，在执行 install_geographiclib_datasets.sh 脚本时，有的人很快，有的人几十分钟都安装不好，如果出现这种情况可以使用我修改的脚本。**注：此方法不一定对每个人有效。**

```
git clone https://gitee.com/tyx6/geographiclib_datasets_tools.git
cd geographiclib_datasets_tools/
chmod a+x ./install_geographiclib_datasets.sh
sudo ./install_geographiclib_datasets.sh

```

![](https://i-blog.csdnimg.cn/blog_migrate/6d68a7ed5b811d739639241a53ca657f.png#pic_center)

4. 检测
-----

如果可以跳转那就代表安装成功，如果不行，重新执行配置环境这一步，记得将之前添加的删掉

*   ROS1：

```
roscd mavros

```

*   ROS2：

```
ros2 pkg prefix mavros

```

如果用方式法一，结果大致如下：  
**ROS1:**  
![](https://i-blog.csdnimg.cn/blog_migrate/4e5afab09efd4dfa2d41f3f633eab1ba.png#pic_center)  
**ROS2:**  
![](https://i-blog.csdnimg.cn/blog_migrate/66bd29b4addfd719903adc361f7acee7.png#pic_center)

如果是方式法二，结果大致如下：

**ROS1:** ![](https://i-blog.csdnimg.cn/blog_migrate/a1c275037ab673ad4831512a95b1c8b1.png#pic_center)  
**ROS2:**

![](https://i-blog.csdnimg.cn/blog_migrate/59b6a02269050110088a560c4fbaeb0e.png#pic_center)

> 如有其他问题，或者发现文章有错误，请在评论区留言  
> Keep learning！

参考
--

[mavros 官方教程 ROS1](https://github.com/mavlink/mavros/blob/master/mavros/README.md#installation)

[PX4 documentation](https://docs.px4.io/main/zh/getting_started/px4_basic_concepts.html)

[mavros/mavros/README.md at ros2 · mavlink/mavros · GitHub](https://github.com/mavlink/mavros/blob/ros2/mavros/README.md)