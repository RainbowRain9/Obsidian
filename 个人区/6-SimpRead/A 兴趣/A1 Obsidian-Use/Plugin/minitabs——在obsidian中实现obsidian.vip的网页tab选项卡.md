---
id: a4b3344c-aa79-4a8b-95e3-a791824db9eb
url: https://mp.weixin.qq.com/s/8f2P0oxLR69LWXPb35FluQ
title: |
  【最佳实践】在obsidian中实现obsidian.vip的网页tab选项卡-咖啡豆社区@JY自研插件
author: |
  蹦跶的咖啡豆
dtype: 插件
state: true
date: 2023-12-05 12:02:18
tags:
  - 400兴趣类/Obsidian/Plugin/编辑
created: 2023-12-05T14:28
updated: 2024-04-13T12:49
---


# 【最佳实践】在obsidian中实现obsidian.vip的网页tab选项卡-咖啡豆社区@JY自研插件
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-8-f-2-p-0-ox-lr-69-lwx-pb-35-flu-q-18c3823f779)
[Read Original](https://mp.weixin.qq.com/s/8f2P0oxLR69LWXPb35FluQ)

原创 蹦跶的咖啡豆  蹦跶的咖啡豆 _2023-12-01 11:45_ _发表于湖南_ 

## 🙆‍♂️🙇‍♀️关注，星标，防走失💇‍♀️💆‍♂️

## 一 缘起

因为在我的网站 www.obsidian.vip 有大量网页 tab 选项卡。效果非常好，以至于很多朋友来到咖啡豆社群后，第一时间都是在问这个效果如何实现。网站效果如下，还是挺好看的：

**超高质量** **免费社群**，解决obsidian所有问题

扫描二维码，添加微信拉进群(注明来意) !

![图片](https://proxy-prod.omnivore-image-cache.app/126x0,s0pFNKX81mSYbbPx9wa8xo-IWkednnZa2DIKG795hMqw/https://mmbiz.qpic.cn/mmbiz_jpg/I4jplPncegpeK7Ip3bbHKaSianGZiaMg1nAfZ15Kun6CgfQW29ZYFtaOMlRibXfhaKfo8GfKBXibVx27vlDQzrz8iaQ/640?wx_fmt=jpeg&wxfrom=5&wx_lazy=1&wx_co=1)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,smto5IzzzqddMsrVptZsjpTvuGLgxcJ5K1e6uiWZ2IH8/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpzOeHfibVJG1UpLJs494TxIEwvGicic45eibgWLWoYhprnla01XwXyHxmAztfNEiaykg78TVJuvOxCicSQ/640?wx_fmt=png&from=appmsg)

这里统一做个说明，tab 选项卡是网站上的特有功能，obsidian 里原生是没有这个的。但是我们可以使用别的方法在 obsidian 中实现类似的效果。

**本文大纲一览表：**

* 缘起
* minitab 咖啡豆社区群友自研插件
   * 特点
* 插件使用方法
   * 1 安装插件
   * 2使用方法
   * 3 获取资源
   * 4 没看懂？有疑问加社群

二 minitab 咖啡豆社区群友@JY自研插件

最近在咖啡豆社群里群友 `@JY` 自己开发了一段插件。我和他沟通了多次，最终实现了类似 obsidian.vip 网站的效果。使用起来也非常简单，已经在咖啡豆社群里进行了一部分内测，效果还是很不错的。

今天在这里进行首发，因为没有上架到 obsidian 第三方插件市场，下载地址见文末，回复可见。感谢咖啡豆社群里群友 `@JY` 😀

演示效果和 obsidian.vip 网站很相似了，如果大家使用上有啥问题，可以来咖啡豆社区里，直接询问和沟通。下图是**在 obsidian 中的效果**，支持 markdown 的语法，表格，代码块。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,savZSIKCAuI5f9QdgTv0iOkQEhdKuMHzS_YzzZys2A_o/https://mmbiz.qpic.cn/mmbiz_gif/I4jplPncegpzOeHfibVJG1UpLJs494TxIsdia6pOmpYG8a0QvTUvGIGyybENsgP4ia6xzmpy11OUB7VV8fwVDnl7w/640?wx_fmt=gif&from=appmsg)

### 特点

* **完美复刻 www.obsidian.vip 网站显示效果**。
* 所见即所得，在编辑模式下和阅读模式效果一样。
* 支持常见的 markdown 语法，支持代码块，表格。
* 在源码模式下编辑。

**应用场景**

1. **复习打卡**，面板 1 写题目，面板 2 写答案和解析。这个比挖孔的效果要好，内容也可以更多。甚至可以写上你的见解和易错点。
2. **代码解读**，面板 1 写代码，面板 2 写执行的结果，方便对代码进行阐述，也可以一定程度上复习和理解代码。
3. **模仿 obsidian.vip 中的效果**，进行更多的代码展示和说明。
4. 也可以解释说明，就为了好看，比如 1 中放游戏地区，面板 2 放爆率、刷怪、和刷新时间等等，也不会占用版面。
5. 更多的可玩性简直太多了。

## 三 插件使用方法

### 1 安装插件

   1. **方法 1【推荐】**：下载文末的插件包 `minitabs` ，解压之后，整个文件夹复制到你的库目录下的 `.obsidian\plugins` 下面，然后打开 obsidian 设置，第三方插件，开启插件。找不到插件文件夹的，点击 obsidian 的设置，第三方插件，已安装插件点击文件夹图标，会自动打开插件文件夹。如下图所示：
   2. 方法 2：也可以通过 BRAT 插件安装。先安装并打开 BRAT 插件，找到 Beta Plugin List，点击 `Add Beta plugin`，弹窗输入要安装的插件的 GitHub 地址。输入 `ssjy1919/0bsidian-minitabs` 。BRAT 插件就会自动安装和追踪最新的插件了。需要提前安装 BRAT 插件。

### 2使用方法

**使用方法很简单，如下操作即可：**

1. 下载插件：下载方法看文末（未上架插件）
2. 启用插件：下载插件解压文件夹，放在 plus 文件夹下，启用插件。
3. 复制代码：启用插件进去插件设置，复制需要的代码快。
4. 粘贴代码：随便新建一个笔记，粘贴复制的专用代码块。在编辑模式和阅读模式下可以正常使用了。

**添加面板和内容**

* 修改代码，其中有 tab 名称和 tab 内容，正常的书写就可以了
* 注意在代码中支持内嵌代码块，方便查看代码
* 能够插入表格，多面板效果很舒服

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,swG88IqeU0ju4s4yzZWV-OkxTabvAebpm-d3NE4l6VBw/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpzOeHfibVJG1UpLJs494TxIl9gVIq65A7sbsBwlwdZo5ib53Qib2uZ5O6hvNOd7z5HaeiboFOE2IZ8Ng/640?wx_fmt=png&from=appmsg)  

### 3 获取资源

> * 关注公众号后，复制→右侧关键字:""，公众号对话发送复制的关键字，系统会回复资源
> * 使用问题，可以加群交流，先加微信号“**coffeebean1688**”后拉进群。**注明来意**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sriUZDwHboZfucCXvgOEXHC50ep0C0H4McRRgyXx3yXg/https://mmbiz.qpic.cn/mmbiz_gif/6HUbSrbQwPIWUo2HgOuTm7vv4gibpQhlPFTeS9d56WG8uGdyWL8UY6S5mMHoGASEb2RH3c3CYibyib6gCCOGhfu1w/640?wxfrom=5&wx_lazy=1&wx_fmt=gif)

**没看懂？有疑问**

### **你可以问我关于** **Obsidian** **领域的任何问题**

**操作有问题，可以加群后艾特群主，有问必答。让你找到组织**

扫描二维码，添加微信拉进群(注明来意) !

![图片](https://proxy-prod.omnivore-image-cache.app/126x0,s0pFNKX81mSYbbPx9wa8xo-IWkednnZa2DIKG795hMqw/https://mmbiz.qpic.cn/mmbiz_jpg/I4jplPncegpeK7Ip3bbHKaSianGZiaMg1nAfZ15Kun6CgfQW29ZYFtaOMlRibXfhaKfo8GfKBXibVx27vlDQzrz8iaQ/640?wx_fmt=jpeg&wxfrom=5&wx_lazy=1&wx_co=1)

**所有Obsidian插件 国内高速下载，长期更新，请订阅**

**如果你无法下载插件的话，可以来我的网站下载，所有1000多款插件，国内网盘高速下载，** **实时更新** **，** **没有下载次数限制** **。建议订阅后，会长期更新** 

**obsidian插件下载 | obsidian文档咖啡豆版 (obsidian.vip)**

**https://obsidian.vip/zh/documentation/obsidian-plugins-download**

**Obsidian全部插件简介-随官网实时更新 | obsidian文档咖啡豆版 (obsidian.vip)**

**https://obsidian.vip/zh/community-plugins/community-plugins-index**

**我有一个 obsidian 的文档**

## 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sriUZDwHboZfucCXvgOEXHC50ep0C0H4McRRgyXx3yXg/https://mmbiz.qpic.cn/mmbiz_gif/6HUbSrbQwPIWUo2HgOuTm7vv4gibpQhlPFTeS9d56WG8uGdyWL8UY6S5mMHoGASEb2RH3c3CYibyib6gCCOGhfu1w/640?wxfrom=5&wx_lazy=1&wx_fmt=gif)

**扩展阅读**



