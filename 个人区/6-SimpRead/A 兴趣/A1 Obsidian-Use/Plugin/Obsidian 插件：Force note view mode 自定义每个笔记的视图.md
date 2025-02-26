---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-view-mode-by-frontmatter/
title: Obsidian 插件：Force note view mode 自定义每个笔记的视图
date: 2023-11-12 23:37:32
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
created: 2023-11-12T23:37
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-06-04 17:46  发布

  分享

* * *

sr-annote { all: unset; }

## 概述

虽然 Obsidian 在(<u>编辑器</u>)中提供了常规编写模式的一些视图定义选项。但是对于一些用户来<u>说，这样对所</u>有笔记” <u>一视同仁</u> “的方法很不自由。    

*   比如我的文献导入内容，可能不需要==编辑主要是阅读，那么我希望进入时候都是阅读模式。
*   比如我的日记，就是进入就需要经常编辑。

在不同的使用场景下，统一化的设置似乎就会有所制约。

**插件名片**

*   插件名称：Force note view mode by front matter
*   插件作者：Benny Wydooghe
*   插件说明：自定义每个笔记的视图
*   插件分类：[’ 界面相关 ’, ’ 效率 ’, ’ 编辑器 ’, ‘obsidian 插件 ‘]
*   插件项目地址：[点我跳转](https://github.com/bwydoogh/obsidian-force-view-mode-of-note)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-view-mode-by-frontmatter)

## 特性 & 功能

允许你在 front-matter 中使用 YAML 语法，自定义每个笔记文件的视图样式。如：obsidianUIMode: preview，强制使用阅读模式

## 使用

*   几乎不需要你的任何设置

语法：在笔记顶部输入

```
---
obsidianUIMode: preview
---

```

表示使用预览视图

或者

```
---
obsidianUIMode: source
obsidianEditingMode: live
---

```

Obsidian 的 YAML 和 Frontmatterfrontmatter-alias-displaymetaeditobsidian-meta-bind-pluginobsidian-metatableobsidian-view-mode-by-frontmatterObsidian 社区插件 obsidian-view-mode-by-frontmatter[Readme]