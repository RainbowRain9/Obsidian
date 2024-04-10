---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/optimize-canvas-connections/
title: Obsidian 插件：Optimize Canvas Connections 优化 Canvas 中的连接线
date: 2023-11-12 22:58:28
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[Bon](https://pkmer.cn/authors/bon)

于  2023-06-04 17:46  发布

  分享

* * *

sr-annote { all: unset; }

## 概述

22 年底与大家正式见面白板（Canvas）功能，成为了很多人整理笔记，梳理思考方式的心头好。但是卡片和节点之间的链接线，有时候当我们随手绘制的时候，显得不那么美观和考究。

Optimize Canvas Connections 是一个功能非常简单的 Canvas 插件，但是却能节省你很多的时间，自动为你调优你白板中，节点间的连接线。

**插件名片**

*   插件名称：Optimize Canvas Connections
*   插件作者：Félix Chénier
*   插件说明：优化 Canvas 中的连接线
*   插件项目地址：[点我跳转](https://github.com/felixchenier/obsidian-optimize-canvas-connections)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?optimize-canvas-connections)

## 效果 & 特性

![](https://cdn.pkmer.cn/images/20230514141810.png!pkmer)

*   最短路径形式（Shortest path）：支持将 Canvas 中跨过自身的连接线，优化成不跨过该节点的连接线形式，相当于从左到右的连接线，会直接帮你将连接点迁移到右边，而不是从左边进行连接，注意这种方式有可能会将你原先在左边的连接点切换成上边的连接点，以实现最短路径连接；
*   不变换轴（Preserve axes）：例如当你选用这个功能时，不会只看最短路径，而是会变更左边到右边，或者上边到下边（相反也是）， 而不会将左边的连接点替换成上或者下的连接点。

## 使用

*   选中 Canvas 中的任意节点，然后按 Ctrl+P 来使用命令：
    *   Optimize Canvas Connections: Optimize selection (preserve axes)
    *   Optimize Canvas Connections: Optimize selection (shortest path)
*   或者不选中任何节点，直接在当前的 Canvas 中执行以上的命令，那么会应用到全局；

custom-state-for-task-listheading-level-indentobsidian-bannersobsidian-day-and-nightobsidian-dynamic-backgroundobsidian-hiderobsidian-icon-folderobsidian-minimal-settingsobsidian-style-settingsObsidian 社区插件 optimize-canvas-connectionsoptimize-canvas-connections[Readme]Obsidian-Banners