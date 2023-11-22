---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-hover-editor/
title: Obsidian 插件：Hover Editor 通过将悬停弹窗变成一个功能齐全的编辑器
date: 2023-11-12 20:53:13
tags:
  - 400兴趣类/笔记软件/Obsidian/Plugin
host: pkmer.cn
source: Pkmer
type: 插件
banner: 
banner_icon: 🔖
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-06-04 17:28  发布

  分享

* * *

sr-annote { all: unset; }

## 概述

当我们检查笔记，或者浏览文档的时候，有时候需要通过预览的方式查看关联的笔记内容。Obsidian 核心插件 [页面预览](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E6%A0%B8%E5%BF%83%E6%8F%92%E4%BB%B6/%E9%A1%B5%E9%9D%A2%E9%A2%84%E8%A7%88) 很好提供了这样的能力，但是有时候我们发现关联笔记的内容后，发现有些稍微修改的地方。

Hover Editor 插件通过将悬停弹窗变成一个功能齐全的编辑器，来增强核心的 “页面预览” 原有的功能。

**插件名片**

*   插件名称：Hover Editor
*   插件版本：0.11.11
*   插件作者：NothingIsLost
*   插件说明：通过将悬停弹窗变成一个功能齐全的编辑器，来增强核心的 “页面预览” 原有的功能。
*   插件项目地址：[点我跳转](https://github.com/nothingislost/obsidian-hover-editor)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-hover-editor)

## 效果 & 特性

![](https://cdn.pkmer.cn/images/20230507100018.png!pkmer)

*   通过将悬停弹窗变成一个功能齐全的编辑器，来增强核心的 “页面预览” 原有的功能
*   支持你在这个弹窗中编辑或者浏览笔记

## 使用

*   在原有的 `页面预览` 基础上，将弹窗变为一个完整的编辑器
    *   支持大多数编辑功能，包括在各个模式之间切换
    *   弹窗框可以进行拖动和调整大小
    *   弹窗现在可以强制固定，防止自动关闭，你可以理解像便签一样固定在 Obsidian 上。
    *   当拖动或调整大小时，弹出框将自动固定
    *   使用固定功能，可以同时打开多个弹窗
*   当弹窗，成为活动窗口并获得焦点时
    *   可以使用快捷键（例如 ctrl+e）切换模式
    *   弹窗关闭时，焦点将返回到上一个文档
    *   弹窗现在有一个导航栏，包括文档标题和编辑器控件
*   弹窗
    *   可以双击顶部，收起这个弹窗，最大程度地减少弹窗口占用面积。
    *   弹出窗口的模式：可以在设置中设定，弹窗所处的状态：阅读模式、编辑模式 或和当前主笔记的模式对应。
    *   当悬停在包含标题或块引用的链接上时，编辑器将打开并自动滚动到引用位置
    *   当有多个弹窗相互重叠时，当前活动的弹窗将保持在前面。

窗口管理关系图谱页面预览 longformobsidian-hover-editorObsidian 社区插件 obsidian-hover-editor[Readme]