---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-local-images-plus/
title: Obsidian 插件：Local image plus 将网络图片自动变为本地
date: 2023-11-12 21:23:29
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
created: 2023-11-12T21:23
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-09-14 15:40  发布

  分享

* * *

sr-annote { all: unset; }

## 概述

有时候我们的笔记当中需要援引网络中的图片，但是这些图片会因为网络加载速度，或者是网页失效，导致不可用。这时候就需要用插入本地图片的方式，保持图片可访问性的持久性。但手动完成有些费时，这时候就需要用到 Local image plus 插件。

**插件名片**

*   插件名称：Local image plus
*   插件作者：Sergei-Korneev
*   插件说明：将你粘贴的网络图片，自定下载到本地并插入到你粘贴的位置
*   插件项目地址：[点我跳转](https://github.com/Sergei-Korneev/obsidian-local-images-plus)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-local-images-plus)

## 特性

该插件是 Local image 插件的进化版。在笔记中查找指向外部图像的所有链接，在本地下载并保存图像，最后调整笔记中的链接以指向本地图像文件。

## 使用

该插件会在你的笔记中找到所有外部图片链接，下载并保存图片到本地，最后调整笔记中的链接指向本地图片文件。

例如，我们最初在笔记中有这样的标记：

```
![](https://picsum.photos/200/300.jpg)

```

本地图片插件会下载图片 300.jpg，并保存在 vault 的 **media** 子目录中，然后更改标记，使其指向本地存储的图片：

当你从网页中复制粘贴部分内容并希望将图片保存在你的 vault 中时，这非常有用。因为外部链接可能会在未来被移动或过期。

### 自动方式

*   在插件中打开 `On paste processing`：即在你黏贴网络图片的过程中。

### 手动方式

通过 ctrl+p 命令来使用：有两个选项

*   Download images locally：只处理你选中的笔记中的图像.
*   Download images locally for all your notes：根据插件中的设置，** 仓库中所用的图像到本地。

### 设置

*   `Media foloder`：指定下载的图片存储路径。
*   `Show notification`：完成下载图片存储后弹出提示。

深入 Obsidian 附件管理 mousewheel-image-zoomobsidian-file-linkobsidian-image-captionobsidian-image-toolkitobsidian-local-images-plusObsidian 社区插件