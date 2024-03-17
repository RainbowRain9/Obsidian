---
id: d23db147-504d-4f3a-96ef-ea10ef4b70de
url: https://mp.weixin.qq.com/s/vSTyaWnPnxoW44By3Xy9-Q
title: |
  高效工作流 | 构建跨平台思维空间：Obsidian 三端同步指南（Win、Android、iPad）
author: |
  ProudBenzene
dtype: 教程
state: false
date: 2023-12-04 14:05:44
tags:
  - 400兴趣类/电脑软件/Obsidian/教程/同步
time: ""
---


# 高效工作流 | 构建跨平台思维空间：Obsidian 三端同步指南（Win、Android、iPad）
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-v-s-tya-wn-pnxo-w-44-by-3-xy-9-q-18c336ea462)
[Read Original](https://mp.weixin.qq.com/s/vSTyaWnPnxoW44By3Xy9-Q)

原创  ProudBenzene  PKMer 知识社区 _2023-11-30 12:00_ _发表于陕西_ 

点击上方蓝字，关注星标不迷路

本文首发于PKMer网站，信息可能已经过时，点击文末左下角 **阅读原文** 获取最新信息

Syncthing 是一款开源免费跨平台的文件同步工具，是基于**P2P 技术**实现设备间的文件同步。

十一月以来，我用将近一周的碎片时间慢慢倒腾，终于配置好了 Syncthing 同步 Obsidian 库，以及使用 Syncthing 后出现的大部分问题。本篇文章作为一个经验贴，记录我配置 Syncthing 的全过程，包括我踩过的坑以及使用感想。、

> 背景须知  
> 我的设备：Mac, iPad & Andriod Phone (HarmonyOS)  
> 同步内容：两个 Obsidian 库  
> 理想要求：
> 
> * 所有笔记**三端迅速同步**，插件、CSS 、工作区、Obsidian 基本设置等**三端全部同步**
> * 插件与 CSS 的启停情况不同步，三端互相保持独立
> 
> 同步方式：使用手机作为**同步中枢**（因为手机的在线时间最长），串起同步网络：![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svsPTsEJ0iYAvYZ6aqtqBmlLiluJ3T8t9RYdN-kPbYfA/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WT78nGIR2C5WhoaVmAHg4PRw5ncyA8cX7F2diaEXp0EPegN2bMDT6TjIA/640?wx_fmt=png&from=appmsg)

## Syncthing 同步的优缺点

高大上的官话我也不会，我就说说感知最为明显的几点：

优点：

1. 相比我之前用来同步 Mac 与华为手机的 **Folder Sync+Remotely Save+WebDAV (Teracloud) 方案**，同步速度非常迅猛，在局域网下，库的同步速度基本是几兆到十几兆每秒左右；
2. 相比我之前用来同步 Mac 与 iPad 的 **iCloud** 方案：
   * 传输速度非常快
   * 由于 iCloud 同步的文件夹默认存在云上不会下载到本地，因此 iPad 上每次打开 iCloud 库都会加载很长时间，体验非常不好；Syncthing 则会将库下载到本地，因此相比 iCloud 方案， Obsidian app 打开库的速度会有质的提升。

缺点：

1. 出现的冲突文件非常多，处理方法在文末有介绍
2. 相比 iCloud 方案，由于 Syncthing 会将库完全同步到本地，因此会占用更多的内存空间

## Syncthing 配置过程

### Syncthing 服务操作系统集成

* macOS：**Syncthing-macos**(https://github.com/Syncthing/Syncthing-macos)，官方维护的开源 macOS 图形客户端
* Andriod/HarmonyOS：**Syncthing app**(https://play.google.com/store/apps/details?id=com.nutomic.Syncthingandroid)，可以通过 Google Play 下载
* iPadOS：**Möbius Sync**(https://apps.apple.com/us/app/m%C3%B6bius-sync/id1539203216?ign-itscg=30200&ign-itsct=apps\_box)，可以通过 App Store 下载，**但是需要 38 大洋**（请注意，除了是该软件的用户外，我与开发者没有任何联系，仅作推荐，不是广告）

分别在三个终端安装好对应的服务集成 app 后，在 Mac 端通过托盘图标或直接在浏览器输入网址打开 Syncthing 界面：http://127.0.0.1:8384/

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s5Ns4lQ8kcqwQ18P3G2rn44LCSGPxhUU3rSkcmxEyrIo/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WTsnC8JX35frrmjF0vqlv2u8yhok0KLyQEThEoJlVBN6ndLX9KBfv32Q/640?wx_fmt=png&from=appmsg)

在右下角「远程设备」栏目中，分别给自己的三个终端互相添加其他两个终端作为远程设备。添加方式可以选择：

* 设备上的 Syncthing 服务集成会自动识别同一个局域网下其他的 Syncthing 在线设备
* 直接复制设备 ID 添加
* 通过设备的摄像头扫描目标设备的 ID 二维码添加

设备 ID 及二维码可以从这里获得：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sxxmfYYDyqxBrpLF8QHYMwMLi1Rp9OF0MBhZrtjWQDZs/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WTpuzvLEyXFsN65qQySMoaoH7jSQzNHlBfglicfCRAmiawJmCia5hmmW3xA/640?wx_fmt=png&from=appmsg)

接下来按照时间顺序讲述配置过程，首先从电脑端开始操作，因为我的笔记在电脑端永远最新、最全。

### Mac

首先，从 Mac 端开始添加文件夹：

1. 点击左边「文件夹」区域的「添加文件夹」，弹出如下窗口：![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s_KaN8wTgSFvBDHm7v50ls7khM32h7aixT8EJB3mn1FA/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WTzpfanVJicTBz9pAOibiaQ4jT4W2vekSII0gNjM7kicE54DlMGLkic0xRygg/640?wx_fmt=png&from=appmsg)
2. 文件夹 ID 和文件夹路径必须填写。为了方便起见，建议文件夹 ID 就填写为要进行同步的文件夹名称，文件夹路径填写该文件夹在电脑上的路径。
3. 共享选项中，勾选想要共享此文件夹的设备。![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sMz3iC_n6oLPn4uZ8S1iaTXXXV1hfZuDFxU1whj-hE1I/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WT8VxHyf0W5EeWlqX03aCVOpshyqmJDYNiaMSeTTlPI7wetJbHePWiaK9g/640?wx_fmt=png&from=appmsg)
4. 勾选开启忽略模式。![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sThzCPICRgzn5_8biLe-STtpYlAx1OBaT1Ej9Ye8r23I/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WTWVZk6fHr1ydutngz5H2CWHsibkPL5GfLvq9DOEn0ZeSLtppqNjyHj5Q/640?wx_fmt=png&from=appmsg)
5. 点击右下角的保存按钮。

> 忽略模式  
> 之后会立马弹出一个界面，要求用户填入需要的忽略模式。忽略模式的规则是这样的：
> 
>> 正则文件名可自行匹配，例如，模式 `foo` 可匹配文件 `foo` 、 `subdir/foo` 以及任何名为 `foo` 的目录。空格被视为正则字符，但前导空格和尾部空格会被自动修剪。
> 
> 根据 Syncthing 官方的忽略模式通配符说明，我们可以自由地设置筛选哪些文件或文件夹要进行同步，哪些不需要进行同步。在我的配置过程中，由于我要达成我在开头提到的理想要求，因此在我的配置过程中，我还会多次变更自己的忽略模式。

下面是我输入的第一批忽略模式：

> // 常规  
> .git  
> .trash  
> .pandoc  
> \_remotely-save-metadata-on-remote.json  
> .smart-connections  
> .DS\_Store

在这一批忽略模式中，我将 `.git`、`.trash` 等对于移动端没什么用但是空间占用量不小的文件/文件夹全部剔除，以免影响同步速度或污染移动端文件系统。

至此，Mac 电脑端的同步设置告一段落。

### Andriod/HarmonyOS Phone

接下来，手机的 Syncthing app 中，点击左上角三道杠打开侧边栏，在侧边栏中点击「网页管理页面」：![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svpCAnLVTAbe5UthTOtykZaxdDr68BsuvtTnzMz5-VJE/https://mmbiz.qpic.cn/sz_mmbiz_jpg/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WTmoia7gIygCiaHicazk2PLTCq1lqSNFGa6asqIdo9PY0tayBT7pyxEmciag/640?wx_fmt=jpeg&from=appmsg)

进入后，顶上会有显眼的黄色边框弹窗，询问是否接受电脑共享过来的两个库文件夹。点击接受，并按照在 Mac 电脑端中设置的同步设置重新设置一遍（包括忽略模式），手机即会自动开始从 Mac 获取同步的文件夹并高速下载。

### iPad

之后设置 iPad 端，与之类似，在点击「接受」后，iPad 会从手机获取要进行同步的文件夹并下载。

需要注意的事是，由于 iOS 系统使用沙盒机制，一个 app 不能够操作在这个 app 所属的文件夹之外的文件。也就是说，**Möbius Sync 原本不应该可以将文件直接同步到属于 Obsidian app 的 Obsidian 文件夹，而是只能将 Syncthing 同步的文件夹下载到 Möbius Sync 自己拥有的 Möbius Sync 文件夹下**：![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sZzkn3E8OmXvdbYKS7xv3bq9SsnwjYw-gI4Lhvx9rLpc/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WT0hwbzzHh3xWicvqlSkx0pNbajuaqb7MM0GNQiazkPAxBJA4NpmmLesDw/640?wx_fmt=png&from=appmsg)

但是 Möbius Sync 的作者最终实现了将同步文件夹直接下载到 Obsidian 文件夹的功能，从而打破了全平台 Syncthing 同步的最后壁垒。当然这个功能不是没有代价的，要想使用的话需要支付 38 大洋。

支付成功后，便可以在选择目标文件夹位置时，选中 Möbius Sync 以外的文件夹。其他的设置步骤与上面手机的类似，不再赘述。

### 分别设置好三端

到此，理想要求中的第一条「**三端同步**」已经实现。接下来倒腾第二条。

现在，三台设备上所有的插件、CSS，以及它们的启停模式全部都是完全一样的。现在，我需要让他们分化，比如移动端我不想打开 git 插件，我想使用编辑/阅读模式按钮 CSS 等，电脑上则保持原样。

因此我们需要先在三台设备的文件夹忽略模式中添加新的忽略模式，以隔绝它们之间插件、css 启停等设置的同步，此即为第二批忽略模式：

> //.obsidian 第一批  
> .obsidian-git-data  
> .obsidian/plugins/obsidian-git/data.json  
> .obsidian/appearance.json  
> .obsidian/community-plugins.json  
> .obsidian/plugins/obsidian-style-settings/data.json

> //.obsidian 第二批  
> .obsidian/app.json  
> .obsidian/command-palette.json  
> .obsidian/core-plugins-migration.json  
> .obsidian/core-plugins.json  
> .obsidian/graph.json  
> .obsidian/hotkeys.json  
> .obsidian/templates.json  
> .obsidian/text-generator.json  
> .obsidian/vault-stats.json  
> .obsidian/workspace-mobile.json  
> .obsidian/workspace.json

之后，你便可以着手在 iPad 与 Andriod/HarmonyOS Phone 上进行 Obsidian 的相关配置了。不用的插件关闭、打开需要的 css 片段等等……这些操作通通不会被同步到其他设备上。

需要注意的是，应用上面的同步规则后，Obsidian 的插件安装情况、CSS 片段安装情况、工作区情况依然是三端同步的。如果不想同步，你可以自行追加规则。

到这里，第二个理想目标也已经达成。Syncthing 的配置基本结束。

## 踩过的坑

下面聊聊我踩过的坑：

1. 库名里面不要包含 emoji，否则在安卓上会出现乱码��，导致同步文件夹出现偏差，从而造成同步失败。
2. 若 Syncthing 报错 `folder marker missing`，在同步文件夹中新建 `.stfolder` 文件夹，重新扫描即可。
3. 如若设备间分享文件夹时，没有出现询问是否接收文件夹的弹窗，则在 Syncthing 页面的右下方，点击「设备→选项→共享」，重试勾选目标设备授权即可。
4. 在同步过程中，`.obsidian` 配置文件夹中的文件极其容易出现文件冲突，造成其中产生许多冗余文件。我自己在配置时，第一次忽略模式没有加入后面的 `.obsidian第二批` 文件，后面发现问题后才加上，算是亡羊补牢。
5. 对于 Syncthing 在同步过程中产生的冲突文件，Windows 用户可以用 everything 搜索「conflict」关键字，我是直接在 Obsidian 内置的搜索中检索「conflict」关键字，找到冲突文件后比对删除即可。

## 往期推荐

* [软件联动的硬核工作流！自定义 Excalidraw 脚本，在建立库外 Eagle 素材库的连接](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484870&idx=1&sn=8a3834aed35e3987ae59885cebfb0cfe&chksm=c2adfea1f5da77b7ce69ae97b76082b9af7c3652d25b606972de17a5a0a0d54686a8ffd1191d&scene=21#wechat%5Fredirect)
* [仪式感拉满，obsidian插件在你完成任务的时候来些喝彩](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484772&idx=1&sn=f7c8e80089e77a9326a97533842e262b&chksm=c2adfe03f5da7715acdbf9b55896ceb3a1ba77879702739363c607a9b4f69e28b395ec480f81&scene=21#wechat%5Fredirect)
* [PKMer出品的ZotLit插件：Obsidian 与 Zotero 联动，有 \\\[@ 就够了](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484770&idx=1&sn=94014a33313f4b57e0f4ff5d5fd7c8a5&chksm=c2adfe05f5da77133dd576a14104f81c4b5f5f1804fd271f3e81fb5a4a6a6a6ad7dc2776a648&scene=21#wechat%5Fredirect)
* [创造你独一无二的Obsidian体验：美轮美奂的自定义背景图片指南！](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484471&idx=1&sn=af7d2de33d9e8db9bf13dd67705f17f2&chksm=c2adff50f5da7646ddbd74377e26601d3039d7ad3d2db4e3fb5b82b04519ffea3955e5226ee4&scene=21#wechat%5Fredirect)

**期待你的分享、点赞、在看**

![](https://proxy-prod.omnivore-image-cache.app/0x0,sLbz75PZ9iO89IgrYUcxjRR57vnRYCyVesJkAtig4PT8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMCdkpoKibpmxFSwd5e7qfBwJRXdchVFTPcA0wbQVSycj3fLWrSuHpX5vYVgkndLU0dJ1wzHtDguwQ/640?wx_fmt=png)

**QQ群｜**825255377

**PKMer官网｜**https://pkmer.cn/



