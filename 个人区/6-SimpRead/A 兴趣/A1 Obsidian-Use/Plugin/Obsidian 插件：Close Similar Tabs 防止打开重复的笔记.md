---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/close-similar-tabs/
title: Obsidian 插件：Close Similar Tabs 防止打开重复的笔记
date: 2023-11-13 00:40:37
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
created: 2023-11-13T00:40
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-08-25 09:34  发布

 

196

分享

* * *

sr-annote { all: unset; }

## 概述

随着多窗口，多标签页，多面板的加入，Obsidian 在并行事务管理，快笔记书写，这让我们的编辑效率越来越快。

但是有时候会遇到一个情况，就是我们打开了大量重复的标签，导致标签栏有些拥挤。尤其是网上冲浪或研究课题时，可能打开同一网站的多个标签页而导致窗口杂乱。

这个插件可以防止你在 Obsidian 中同时打开重复的标签页，通过自动关闭它们来避免冲突。默认情况下，它会在每个窗口中关闭重复的标签页，不过用户可以在 “关闭方式” 设置中将其改为 “仅在当前窗口” 或“所有窗口”，以此在整个 Obsidian 工作空间中避免打开重复的标签页。此外，通过更新，现在支持使用分割面板了。

**插件名片**

*   插件名称：Close Similar Tabs
*   插件作者：1C0D
*   插件说明：自动关闭重复打开的标签页，防止标签栏拥挤和冲突
*   插件项目地址：[点我跳转](https://github.com/1C0D/Obsidian-Close-Similar-Tabs)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?close-similar-tabs)

## 效果 & 特性

*   通过自动关闭重复的标签，防止你在 Obsidian 中同时打开重复的标签页

## 使用

*   插件开启后即可使用
*   当你打开重复的标签时，会自动关闭新打开的标签页
*   并切换激活倒已经存在的那个标签页

### 两种模式

*   ” 按窗口 “：独立关闭每个窗口中的重复标签页
*   ” 所有窗口 “：如果在不同的窗口中重新打开相同的文件，则关闭重复标签页。在窗口内与第一个选项相同。

### 其他选项

*   ” 无空标签页 “：避免在每个窗口中出现空的重复标签页。
*   ” 清晰通知 “：清楚地指示发生了什么。

您可以正常地拆分文件，它不会关闭重复的标签页。

在不按下 Ctrl 键的情况下打开链接，重复的标签页会被关闭。

### 两个命令

*   ” 关闭相似标签页参数 “：打开一个带有首选项的模态窗口。
*   ” 快速切换 “：快速打开 / 关闭关闭相似标签页。它不会禁用插件。（与首选项中的参数相关联）

在首选项中的 ” 快速切换 “，可以在不禁用插件的情况下启用 / 禁用关闭相似标签页。

**提示**

*   默认情况下，插件只能针对每个窗口中关闭重复的标签页，不过用户可以在 “关闭方式” 设置中将其改为 “仅在当前窗口” 或“所有窗口”。

close-similar-tabscycle-through-panesobsidian-openerobsidian-tabsObsidian 社区插件