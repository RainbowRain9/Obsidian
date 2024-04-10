---
id: 16908da1-27e4-4605-bcd1-5a37149d6f35
url: https://zhuanlan.zhihu.com/p/69267020
title: |
  Syncthing - P2P文件同步工具 - 知乎
author: |
  寒三石程序员
source: 微信公众号
dtype: 软件
tags:
  - 400兴趣类/电脑软件
banner: https://source.unsplash.com/900x1600/?
state: false
date: 2024-04-02 15:04:33
---


# Syncthing - P2P文件同步工具 - 知乎
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-zhuanlan-zhihu-com-p-69267020-18e9d9f97f7)
[Read Original](https://zhuanlan.zhihu.com/p/69267020)

## 1 简介

随着数据的增长，我们对于文件的同步和备份需求也日趋强烈。各种网盘为我们在文件同步备份提供便利的同时，也在速度、安全和隐私等方面带来不小的限制和风险。

  
[Syncthing](https://link.zhihu.com/?target=https%3A//syncthing.net/)是一款开源免费跨平台的文件同步工具，是基于**P2P技术**实现设备间的文件同步，所以它的同步是**去中心化**的，即你并不需要一个服务器，故不需要担心这个中心的服务器给你带来的种种限制，而且类似于torrent协议，参与同步的设备越多，同步的速度越快。针对**隐私**问题，Syncthing软件只会将数据存储于个人信任的设备上，不会存储到服务器上。设备之间的通信均通过TLS进行，Syncthing还使用了完全正向保密技术来进一步保障你的数据安全。对于处于**不同局域网之中**的设备之间的文件同步，Syncthing也提供了支持。

![](https://proxy-prod.omnivore-image-cache.app/2808x1606,sh59RbkEQTuo3_nBRA8SpTwLepGvWbtWcmvj6kMG5vMc/https://pic1.zhimg.com/v2-ad318e0a6e66d3e2c631c5be057fa408_b.jpg)

  
Syncthing支持非常多的平台，包括**Windows、macOS、Android、Linux、FreeBSD、Solaris、群晖和威联通NAS**等，但遗憾的是，==在iOS上==只有一个第三方客户端fsync。

---

## 2 基本使用

### 2.1 安装

首先在需要 同步的设备上安装 Syncthing，进入[官网](https://link.zhihu.com/?target=https%3A//syncthing.net/)下载对应系统的安装包，它的安装方式同正常的软件一样。

![](https://proxy-prod.omnivore-image-cache.app/1548x1080,sAZ8TVVebWXePvAR4cR513OP8IxRef4Uc2VPtEjgGk10/https://pic2.zhimg.com/v2-6238951489da44689ea43bd9b5914571_b.jpg)

  
Windows系统推荐安装**SyncTrayzor**，拥有图形用户界面（如下图）并可以最小化到托盘后台运行，并可以设置开机启动（默认即是随开机自动启动）。

![](https://proxy-prod.omnivore-image-cache.app/1045x687,sdk89TZYZU4o35Get-6qO4gepe4GzX9G5FTdNvF7Wr-M/https://pic2.zhimg.com/v2-d4de84f8cea256eef896891f8edc9325_b.jpg)

SyncTrayzor界面

macOS版本默认也是开机自启动并后台运行，但只能通过浏览器访问界面（点击图标，再点击open，如下图所示）。

![](https://proxy-prod.omnivore-image-cache.app/622x520,s-Ru-naRucCP63-FRl8dLcyd8NCfYSWLuHgPRGHcEwXw/https://pic2.zhimg.com/v2-0c4f25c85e16d755afb932e2dcfce971_b.jpg)

macOS版

更多版本的安装请参见官网。另外Syncthing是可以被远程访问得。

每台设备均会被分配一个**唯一的设备ID（一长串字符）**用以标识这台设备，后面同步我们会用到。点击 **操作 --> 显示ID** 即可查看。

![](https://proxy-prod.omnivore-image-cache.app/1042x683,s6-vSORmxNS4qI-hrAZ-rpLpBSnyS6qFwzCxHDHp_bzk/https://pic3.zhimg.com/v2-fe65fa17aa6413d3c692f445494faea2_b.jpg)

显示ID

![](https://proxy-prod.omnivore-image-cache.app/894x578,sZmd0R1ACoSi0I6TjMZGhJ5zwJeQPMfj2AYlVnRB5Aw4/https://pic4.zhimg.com/v2-2261e70bde131f880b787aa6d07ce5cb_b.jpg)

显示的ID和二维码

### 2.2 设置文件同步

两台设备想要同步文件，基本步骤是：  
①**互相添加对方为远程设备 --> ②共享文件夹**

下面以两台Windows10设备（分别命名为A、B以区分）为例演示如何进行文件同步。

  
首先复制**设备A的ID**，并在**设备B**上**添加**这个ID（添加远程设备 --> 粘贴ID于“设备ID”处并保存），并**设置共享的文件夹**（如果要同步其他文件夹需要事先添加），如下图所示。

![](https://proxy-prod.omnivore-image-cache.app/1042x604,siNYeN22OEVjFeOyt8TmkbVJADbnUlebSvrUulYPmCYo/https://pic3.zhimg.com/v2-6682de20b288e5b999c585c1634d78d6_b.jpg)

设备B：点击“添加远程设备”

![](https://proxy-prod.omnivore-image-cache.app/900x515,sYwjnBo_-wlKFCR9sBYdkeWjJxoY0FhkocoyQJB_JS6U/https://pic3.zhimg.com/v2-c415f17b7342e32c6c81fdd96acc0f56_b.jpg)

设备B：在“设备ID”处粘贴另一台设备的ID

![](https://proxy-prod.omnivore-image-cache.app/893x445,sIwyGWM3dahoqMnpGsXGn5sI8SNk6CpbMO1VRIkyPHUo/https://pic3.zhimg.com/v2-6f453fa4379a9b35e0ada077dd759982_b.jpg)

设备B：切换到“共享”，选择文件夹

稍等一段时间后（**如果两台设备不是一个局域网可能会连接很缓慢，可以互相添加对方为远程设备并耐心等待连接成功**），在**设备A**上便会出现一个**新设备请求连接**，选择添加设备并保存。

![](https://proxy-prod.omnivore-image-cache.app/2334x552,soj75QGJejh4ovXS0V4Cme_qdKknWF_VIZ9p0JisJRUk/https://pic4.zhimg.com/v2-f3d2580aecdb9e3858e8de3a78ea6bab_b.jpg)

设备A：新设备请求

再等一会后在设备A上会出现**共享文件夹请求**，选择共享并保存。

![](https://proxy-prod.omnivore-image-cache.app/2334x496,skxzXqspvPuI9NAisNvgWRMwgImYjzrRZ02pT4_xyilQ/https://pic2.zhimg.com/v2-f76a4a06e91057ed569059560c8160a1_b.jpg)

设备A：共享文件夹请求

开始同步并成功后的界面如下。

![](https://proxy-prod.omnivore-image-cache.app/1042x690,sfZ9wuVQis_U8hRt6aKp1pnq9R8HQHodDew7gJao13Fk/https://pic2.zhimg.com/v2-6d88662ff44b828db1c7225c436a8a31_b.jpg)

成功后的界面

默认两个设备的共享文件夹会保持完全一致。

---

## 3 进阶使用

本节内容根据个人需要和知识储备选读，每一小节均是独立的。

### 3.1 版本控制

Syncthing也提供了版本控制功能，它可以记录一个文件的删除和修改历史，你可以根据自己的需要将文件恢复到之前的某一状态。  
然而需要特别指出的是，**它只记录远程设备对这个文件的修改和删除**，并不记录本机对于文件的修改和删除。例如设备A和设备B的共享文件夹存在一个文件c.txt，你在设备A上修改了c.txt，那么设备A是不会记录这个修改历史的，你只能在设备B上将c.txt恢复到修改之前的版本。此外在设备A开启共享文件夹的版本控制并不会影响到设备B，即每个设备需要各自开启版本控制。以下是如何开启版本控制：

  
首先选择某个共享文件夹的选项。

![](https://proxy-prod.omnivore-image-cache.app/1043x688,s6uHa5i6yGolpauIBGoJASqz1d_ZYtzGsPEdSsgxSA_8/https://pic1.zhimg.com/v2-96a533f6cdabee791a380bfdb9a9275c_b.jpg)

点击“选项”

然后选择版本控制，Syncthing默认不开启版本控制，这里我选择简易版本控制示例，默认保留版本数量是5，你可以根据自己需要进行修改，设置完成后点击保存即可。

![](https://proxy-prod.omnivore-image-cache.app/890x432,s4dTi3dGCOI-lVBgctajjKhfs-sGNghBzIFFLN6O9dxs/https://pic4.zhimg.com/v2-993ce61bb6df682c9d3a8c4b2146f37b_b.jpg)

切换至“版本控制”并进行设置

点击该文件夹的历史版本，即可将文件恢复至你需要的版本。

![](https://proxy-prod.omnivore-image-cache.app/1044x691,sKeGv7HHvHIfqep5jt7cirP8xQKmvcxjJHhWfGuQtxSI/https://pic1.zhimg.com/v2-72b6217c451d8ac4307a0f50538fb008_b.jpg)

点击“历史版本”即可进行版本控制

**3.2 文件同步冲突** 

共享文件夹中的文件可以被多个设备所修改，所以存在同步发生冲突的可能。例如设备A和设备B共享一个文件c.txt，设备A上对文件c.txt作出了修改并保存，但在这个修改同步至设备B之前，设备B上也对这个文件作出了修改，此时便会面临保留哪一个文件的问题。Syncthing对于文件冲突的解决方法是：**两个修改后的文件都会被保留**，但修改时间更晚的文件会按**`<文件名>.sync-conflict-<日期>-<时间>-<修改设备的ID>.<文件扩展名>`**的格式进行重命名。具体需要保留哪个文件由用户自行选择。

![](https://proxy-prod.omnivore-image-cache.app/1562x976,sO9lEJXx5KOp5gym4GEotUW9ew6VtipQM9iFV8FoJmzY/https://pic2.zhimg.com/v2-79ec21f6d16c746388edb244f21aac8d_b.jpg)

SyncTrayzor上检测到冲突后会提醒用户

**3.3 忽略文件**

有时我们不希望接收远程设备同步全部文件过来，比如macOS设备向Windows设备同步时，会同步一个**.DS\_Store**的文件（macOS保存文件夹的自定义属性的隐藏文件），而这个文件在Windows并没有用处，希望这个文件被忽略掉。

我们可以点击文件夹的选项，选择**忽略模式**，配置该文件的名称，那后续这个文件不会再被同步，不管远程设备对这个文件做了什么样的修改。

![](https://proxy-prod.omnivore-image-cache.app/1415x1159,sGAZTXGY4kq111bixuiiNmGquQl9kQe79K0HlFbT5TMA/https://pic4.zhimg.com/v2-01e0eacd38023858ae521aa3fe2ce903_b.jpg)

**3.4 发现服务器的使用**

所需知识储备：了解服务器

Syncthing发现服务器也是开源跨平台的。

之前提到Syncthing能够实现处于不同局域网之中的两台设备之间的同步，这实际上有赖于发现服务器（**Syncthing Discovery Server**）的协助，否则它们不能发现彼此。Syncthing默认使用官方提供的全球发现服务器集群，不过你也可以自己搭建一个，在自己的服务器上。你可以设置Syncthing使用某一台发现服务器。

出于篇幅考虑，搭建个人发现服务器和使用见我另一篇文章：

**3.5 中继服务器的使用**

所需知识储备：了解服务器

Syncthing中继服务器也是开源跨平台的。

当两台设备无法直接相联的时候，Syncthing可以通过中继服务器进行数据的传输。目前有一批默认的公共中继服务器可供使用，如果你想自己搭建，也是可以的。当然中继传输的速度是不如直连，不过在无法直连的情况，也只能使用中继传输。关于中继服务器的安全隐私问题，你不用担心数据泄露，因为数据是端到端加密的，中继服务器只传递加密后的数据，但是中继服务器是知道连接的用户ip和设备Id。

出于篇幅考虑，搭建个人中继服务器和使用见我另一篇文章：



