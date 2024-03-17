---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/editing-toolbar/
title: Obsidian 插件：Editing Toolbar 必装的可视化编辑工具
date: 2023-11-12 21:17:07
tags:
  - 400兴趣类/电脑软件/Obsidian/Plugin
host: pkmer.cn
source: Pkmer
banner: 
banner_icon: 🔖
dtype: 插件
state: false
time: ""
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-09-01 10:13  发布

 

3229

分享

* * *

sr-annote { all: unset; }

Editing Toolbar 是 Cumany 二次开发的可视化编辑工具栏，旨在增强 Obsidian 的可视化编辑体验。提供类似于 Word，在线办公软件 的浮动工具栏等交互方式。

**插件名片**

*   插件名称：Editing Toolbar
*   插件作者：Cumany
*   插件说明：旨在增强 Obsidian 的可视化编辑体验。提供类似于 Word，在线办公软件 的浮动工具栏等交互方式。
*   插件项目地址：[点我跳转](https://github.com/cumany/obsidian-editing-toolbar)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?editing-toolbar)

## 效果 & 特性

![](https://cdn.pkmer.cn/images/8dcebbf3dbf5d43541cacc63301ae1a8_MD5.gif!pkmer)

**重要提示**

Editing Toolbar 可以自定义添加命令，只要是 命令面板里能看到的都可以加。也可以自由调整顺序，非常方便。

## 安装

1.  进入 Obsidian 社区插件
2.  搜索 Editing Toolbar
3.  安装
4.  开启插件

## 使用

1.  增加新的工具栏样式 tiny
    
    ![](https://cdn.pkmer.cn/images/6c7222e15b6962cc554077c737db26c4_MD5.png!pkmer)
    
2.  增加工具栏位置选项，top，following
    
    *   top 样式类似 word 的指定工具栏效果
    *   following 样式，则是跟随光标点击位置
    
    ![](https://cdn.pkmer.cn/images/ee396b67b8834eb107c53c27100bd31d_MD5.png!pkmer)
    
3.  支持 多窗口，多 tab 适应 obsidian 0.14+
    
4.  增加格式刷功能 内置字体颜色和背景颜色两种格式刷（鼠标中键或者右键可取消格式刷状态）
    
5.  增加一些内置命令
    
    *   change-font-color 字体颜色调色板和格式刷
    *   change-background-color 背景颜色调色板和格式刷
    *   indent-list 列表增加缩进
    *   undent-list 列表减少缩进
    *   editor-undo：撤销
    *   editor-redo：重做
    *   hrline
        *   会插入一个 `---` 分割线
    *   justify 两端对齐 插入一个 html 代码，让文字两端对齐 `<p align="justify">.....</p>`
    *   left 插入一个 html 代码，让文字左对齐 `<p align="left">.....</p>`
    *   right
        *   插入一个 html 代码，让文字右对齐 `<p align="right">.....</p>`
    *   center 居中对齐 插入一个 html 代码，让文字居中 `<center>.....</center>`
    *   fullscreen-focus 默认绑定快捷键 `Ctrl+shift+F11`。 将使笔记页面全屏显示，让你更专注于写作本身。要退出全屏，请按 ESC 或再次执行全屏命令。
    *   workplace-fullscreen-focus 默认绑定快捷键 `Ctrl+F11`。 与全屏聚焦模式不同，这个模式只是隐藏了左右侧边栏的面板，它只是工作区全屏。
    *   head 1-6 级标题设置 默认绑定快捷键 `Ctrl+1,ctrl+2,...Ctrl+6`。
        
        ![](https://cdn.pkmer.cn/images/0d9a9a1c49d9d2b61ea4e17c400766e3_MD5.png!pkmer)
        

### 进阶使用

1.  支持自定义命令图标
    
    ![](https://cdn.pkmer.cn/images/02dbf5b6ba9ecf5b170766f390f3f0a5_MD5.gif!pkmer)
    
2.  支持修改命令名称
    

![](https://cdn.pkmer.cn/images/48b368f52a8494689040e851a77bad09_MD5.gif!pkmer)

1.  支持添加子菜单

![](https://cdn.pkmer.cn/images/ee9a0674177f5467ccaa9888fe3227e4_MD5.gif!pkmer)

1.  支持菜单拖动排序
    
2.  增加格式刷功能 内置字体颜色和背景颜色两种格式刷（鼠标中键或者右键可取消格式刷状态）
    
    ![](https://cdn.pkmer.cn/images/043688f59a5fa25d87f3d6bfa1c60de9_MD5.gif!pkmer)
    
    1.  工具栏图标宽度自适应缩小
        
        ![](https://ghproxy.com/https://raw.githubusercontent.com/cumany/cumany/main/pic/202209072157728.gif)
        

### 与其他插件一起使用

1.  [obsidian-emoji-toolbar](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-emoji-toolbar) 快速插入表情符号
    
    ![](https://ghproxy.com/https://raw.githubusercontent.com/cumany/cumany/main/pic/202209092001600.gif)
    
2.  [Obsidian-Table-Generator](https://github.com/Quorafind/Obsidian-Table-Generator/) 和 [ob-table-enhance](https://github.com/Stardusten/ob-table-enhancer) 快速插入和编辑表格
    
    ![](https://ghproxy.com/https://raw.githubusercontent.com/cumany/cumany/main/pic/202209092008571.gif)
    

协作者指南 Obsidian 如何制作多栏布局 Obsidian 基础操作问题 cm-editor-syntax-highlight-obsidiancm-typewriter-scroll-obsidiancmenu-plugincode-block-copyeasy-typing-obsidianediting-toolbarhighlightr-pluginlapelmulti-column-markdownnumber-headings-obsidianobsidian-columnsobsidian-commentsobsidian-dynamic-highlightsobsidian-emoji-toolbarobsidian-latex-suiteObsidian 社区插件 remember-cursor-positiontable-editor-obsidiantypewriter-modeweather-fetcher