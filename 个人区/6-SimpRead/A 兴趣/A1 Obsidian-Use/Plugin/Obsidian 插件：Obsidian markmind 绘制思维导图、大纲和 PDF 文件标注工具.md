---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-enhancing-mindmap/
title: Obsidian 插件：Obsidian markmind 绘制思维导图、大纲和 PDF 文件标注工具
date: 2023-11-12 22:59:52
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner:
banner_icon: 🔖
dtype: 插件
state: true
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

**插件名片**

*   插件名称：Obsidian markmind
*   插件作者：Mark
*   插件说明：让你在 Osidian 中绘制思维导图、大纲和 PDF 文件标注工具。包括多种模式，包括导图模式，表格模式，类白板模式。
*   插件分类：思维导图, PDF
*   插件项目地址：[点我访问](https://github.com/MarkMindCkm/obsidian-markmind)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-enhancing-mindmap)

## 概述

注意此插件并不开源，正常使用免费版本是没问题的。

此插件主要作用就是可以把当前笔记转为思维导图。

<table><thead><tr><th>免费</th><th>支持</th></tr></thead><tbody><tr><td>思维导图 basic 模式</td><td>rich 模式所有功能</td></tr><tr><td>思维导图大纲模式</td><td>pdf 标注</td></tr><tr><td><code>rich</code> 模式部分功能</td><td>支持开发者</td></tr><tr><td>epub 阅读</td><td>epub 阅读和标注</td></tr><tr><td>不支持</td><td>导出思维导图为 pdf</td></tr><tr><td>移动端和电脑端全平台使用</td><td>移动端和电脑端全平台使用</td></tr><tr><td>￥0</td><td>￥80 (永久激活)</td></tr><tr><td></td><td><a href="https://www.markmind.net/cn">购买</a></td></tr></tbody></table>

## 使用方法

本文介绍主要以免费版本为主。

### 创建 basic 模式思维导图

#### 方法 1

在 markdown 文件中添加 yaml :

```
--- 
mindmap-plugin: basic 
---

```

在更多菜单中，你可以找到 _打开为思维导图_ 就可以把当前文档转换为思维导图模式。

![](https://cdn.pkmer.cn/images/202305041751327.gif!pkmer)

#### 方法 2

在文件夹上右击，点击 _新建思维导图_ 菜单 就可以新建一个思维导图的 md 文件，文件内容自动会添加 yaml 信息。

## 在 markdown 文件中嵌入思维导图

通过使用 `![[mindmap.md]]` 即可嵌入 mindmap 这个思维导图文件。

### 思维导图快捷键

<table><thead><tr><th>新建导图</th><th>Ctrl/Cmd+P</th></tr></thead><tbody><tr><td>新建节点</td><td>Tab</td></tr><tr><td>新建同级节点</td><td>enter</td></tr><tr><td>删除节点</td><td>Delete/Backspace</td></tr><tr><td>编辑节点</td><td>Space/dblclick node</td></tr><tr><td>撤销</td><td>Ctrl/Cmd+Z</td></tr><tr><td>恢复</td><td>Ctrl/Cmd+Y</td></tr><tr><td>退出编辑节点</td><td>Tab</td></tr><tr><td>展开节点</td><td>Ctrl/Cmd + /</td></tr><tr><td>收缩节点</td><td>Ctrl/Cmd + /</td></tr><tr><td>拖放节点</td><td>Drag and drop node</td></tr><tr><td>切换焦点节点</td><td>Up/down/left/right</td></tr><tr><td>放大、缩小画布</td><td>Ctrl/Cmd + mouse wheel</td></tr><tr><td>居中根节点</td><td>Ctrl/Cmd + E</td></tr><tr><td>切换导图布局</td><td>选中某节点 ，Ctrl/Cmd + U / D / L / R / M / J / K / T / Q</td></tr><tr><td>删除归纳、外框、联系线</td><td>Delete/Backspace</td></tr></tbody></table>

obsidian-enhancing-mindmapobsidian-mindmap-nextgenObsidian 社区插件 obsidian-enhancing-mindmap[Readme]