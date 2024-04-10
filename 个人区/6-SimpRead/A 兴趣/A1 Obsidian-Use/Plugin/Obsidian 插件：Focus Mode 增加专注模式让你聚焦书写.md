---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-focus-mode/
title: Obsidian 插件：Focus Mode 增加专注模式让你聚焦书写
date: 2023-11-12 23:39:16
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

[OS](https://pkmer.cn/authors/os)

于  2023-09-14 15:46  发布

 

429

分享

* * *

sr-annote { all: unset; }

## 概述

有时候你是否期待可以在书写世界里找到更多的安静与舒适感，完全专注于码字的创作过程，度过一段惬意而安静的时间。

在这个繁忙、压力和高速发展的时代里，码字成为了一种新的生活方式和休闲方式，有人甚至称之为沉浸式体验。在这种小广场中，我们可以找回专注、投入和享受，在轻敲键盘中感受到所写字句带来的内心喜悦和沉淀的舒适。

Focus Mode 插件为 Obsidian 带来了专注模式，让你获得意思安逸。

**插件名片**

*   插件名称：Focus Mode
*   插件作者：ryanpcmcquen
*   插件说明：为 Obsidian 带来了专注模式
*   插件分类：[’ 界面相关 ’, ‘obsidian 插件 ‘]
*   插件项目地址：[点我跳转](https://github.com/ryanpcmcquen/obsidian-focus-mode)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-focus-mode)

## 效果 & 特性

![](https://cdn.pkmer.cn/covers/obsidian-focus-mode.png!pkmer)

*   直接将当前笔记窗口最大化

## 使用

*   专注模式：自动收起左右侧边栏
*   超级专注模式：不光自动收起左右侧边栏，且会收起面板，只保留当前活动的标签页

<table><thead><tr><th>Hotkeys</th><th>Action</th></tr></thead><tbody><tr><td>Cmd/Ctrl + Alt + Z</td><td>开启专注模式</td></tr><tr><td>Cmd/Ctrl + Alt + Shift + Z</td><td>开启超级专注模式</td></tr></tbody></table>

*   该插件没有设置选项

### 自定义插件的外观

根据状态，将类添加到 `document.body` 中。`focus-mode` 存在于普通模式和超级专注模式中，而 `super-focus-mode` 仅存在于超级专注模式中（惊喜！）。

以下 CSS 代码片段添加到 vault 中将去除非活动行的不透明度：

```
.focus-mode .cm-s-obsidian .cm-line:not(.cm-active),
.focus-mode .cm-s-obsidian div:not(.CodeMirror-activeline) > .CodeMirror-line {
    opacity: 1 !important;
    filter: saturate(1) !important;
}

```

image-windowobsidian-auto-hideobsidian-focus-modeobsidian-fullscreen-pluginobsidian-hide-sidebars-when-narrowObsidian 社区插件