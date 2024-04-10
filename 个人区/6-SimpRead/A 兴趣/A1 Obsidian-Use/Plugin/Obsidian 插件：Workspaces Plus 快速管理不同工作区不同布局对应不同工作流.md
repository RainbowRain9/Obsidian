---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/workspaces-plus/
title: Obsidian 插件：Workspaces Plus 快速管理不同工作区不同布局对应不同工作流
date: 2023-11-12 23:35:09
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

于  2023-09-14 16:19  发布

  分享

* * *

sr-annote { all: unset; }

## 概述

快速切换管理工作区的布局。你可以按照你不同的习惯，规划工作区。

**插件名片**

*   插件名称：Workspaces Plus
*   插件作者：NothingIsLost
*   插件说明：快速切换管理工作区的布局。你可以按照你不同的习惯，规划工作区。
*   插件分类：[’ 工作区 ’, ’ 效率 ’, ’ 界面相关 ’, ‘obsidian 插件 ‘]
*   项目地址：[点我访问](https://github.com/nothingislost/obsidian-workspaces-plus)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?workspaces-plus)

## 效果 & 特性

![](https://cdn.pkmer.cn/covers/workspaces-plus.png!pkmer)

Workspaces Plus 是一个扩展 [Obsidian](https://obsidian.md/) 中 [工作区](https://help.obsidian.md/Plugins/Workspaces) 功能的插件。

## 使用

### 工作区指示器

*   在状态栏中显示当前活动的工作区
*   单击状态栏中的工作区名称以打开工作区选择菜单
*   `shift-click` 状态栏图标或工作区名称以保存工作区

![](https://cdn.pkmer.cn/images/20230914115202.png!pkmer)

### 工作区选择器

*   切换、删除、重命名和创建新的工作区
    
    ![](https://cdn.pkmer.cn/images/20230914115230.png!pkmer)
    

### 工作区切换器模态框

*   使用可分配的快捷键打开
*   切换、删除、重命名和创建新的工作区

![](https://cdn.pkmer.cn/images/20230914115244.png!pkmer)

### 快捷键

*   打开工作区加强切换器模态框
*   通过名称打开特定的工作区

### 插件选项

*   切换工作区选择器的键盘快捷键开 / 关
*   切换工作区删除确认开 / 关
*   将默认工作区切换行为设置为在切换时始终保存

### 主题选项

*   Workspaces Plus 在 HTML 文档的 body 元素上添加了一个数据属性，可以用于设置特定工作区的样式
    *   数据属性是 body[data-workspace-name=“My Workspace”]
    *   该属性将在加载任何新工作区时更新

### 工作区覆盖

*   使用模板变量覆盖工作区中的页面的能力。

如何使用

在设置菜单中启用插件后，您会发现工作区图标已添加到界面右下角的状态栏中。如果您已经在 Obsidian 中使用工作区，您会注意到您当前活动工作区的名称位于该图标旁边。

:warning: **必须激活 Obsidian 的核心工作区插件才能使 Workspaces Plus 正常工作**

### 创建工作区

您可以通过工作区选择器或工作区切换器模态框以相同的工作流程创建工作区。

1.  在输入框中输入您的新工作区名称
2.  使用 `shift-enter` 创建新的工作区

重命名工作区

通过单击工作区名称旁边的铅笔图标，可以从选择器或模态框中重命名工作区。

### 删除工作区

可以通过在工作区名称旁边使用垃圾桶图标或在菜单中选择工作区时按下快捷键 `shift-delete` 来删除工作区。

### 打开工作区

1.  通过快捷键或点击状态栏中的工作区图标或名称来打开工作区切换器。
2.  您可以通过鼠标点击或使用键盘上的上 / 下箭头导航到工作区后按下回车键来打开工作区。

### 保存工作区

*   默认情况下，切换工作区时不会自动保存
*   您可以通过在状态栏中的工作区图标或名称上进行 `shift-click` 来保存工作区
*   无论是在切换菜单中，您都可以使用 `shift-enter` 来保存当前活动的工作区，或者使用 `alt-enter` 来保存当前活动的工作区并切换到您选择的新工作区
*   在插件选项菜单中（位于 Obsidian 的设置中），您可以切换一个设置，该设置将在切换时自动保存活动的工作区

### 在工作区中覆盖页面

*   在设置中向下滚动并打开要修改的工作区。
*   在页面 ID 旁边的文本框中输入要加载的字符串，其中包含模板变量。
    *   示例：1 Journal/{{date:YYYY}}/{{date:YYYY-MM}}/{{date:YYYY-MM-DD}}.md
*   切换到工作区，页面将使用覆盖中的值加载，并替换变量。

## 自定义样式

如果你喜欢布局紧凑的工作区选择器，可以参考这段 CSS 代码片段，并配合 [Obsidian css 代码片段](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E5%A4%96%E8%A7%82/obsidian%E7%9A%84css%E4%BB%A3%E7%A0%81%E7%89%87%E6%AE%B5) 使用

![](https://cdn.pkmer.cn/images/20230914115505.png!pkmer)

```
.workspaces-plus-modal.quick-switch {
  padding: 0px;
  border-radius: 5px;
  min-width: 13em;
}

.workspaces-plus-moda.quick-switch .workspace-item {
  padding-left: 2em;
  padding-right: 4em;
  font-size: 0.9em;
}

.workspaces-plus-modal.quick-switch .prompt-results {
  padding-top: 0;
}

.workspaces-plus-modal.quick-switch .prompt-results::-webkit-scrollbar {
  display: none;
}

.workspaces-plus-modal.quick-switch .workspace-results {
  padding: 0px;
}

.workspaces-plus-modal.quick-switch .workspace-item.is-selected {
  border-radius: 0px !important;
}

.workspaces-plus-modal.quick-switch input.prompt-input {
  font-size: 0.9em;
  padding: 0px 1em;
  border-top-left-radius: 5px !important;
  border-top-right-radius: 5px !important;
  border-radius: 0px;
  border: none !important;
  border-bottom: 1px solid var(--background-modifier-border) !important;
}

.workspaces-plus-modal.quick-switch input.prompt-input:focus {
  box-shadow: none;
  border: none !important;
  border-bottom: 1px solid var(--background-modifier-border) !important;
}

.workspaces-plus-modal.quick-switch .delete-workspace {
  right: 0.7em !important;
}

.workspaces-plus-modal.quick-switch .rename-workspace {
  right: 2em !important;
}

```

Obsidian 的 CSS 代码片段 Obsidian 社区插件 workspaces-plus