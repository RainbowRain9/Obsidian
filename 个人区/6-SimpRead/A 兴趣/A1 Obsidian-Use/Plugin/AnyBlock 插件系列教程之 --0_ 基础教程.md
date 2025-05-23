---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/0
state: true
dtype: 插件
title: AnyBlock 插件系列教程之 --0_ 基础教程
date: 2023-11-12 21:39:36
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/AnyBlock
source: Pkmer
banner: 
banner_icon: 
created: 2023-11-12T21:39
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

**ob 库，请用 Obsidian 安装 AnyBlock 插件打开**

你可能需要频繁切换：源码 / 实时 / 渲染模式，推荐个人快捷键：

*   Ctrl + / | 切换源码和实时（默认未设置）
*   Alt + / | 切换编辑和渲染（默认 Ctrl+E）

插件推荐设置：(默认)

## 插件介绍

黑曜石插件 AnyBlock（后文可能会简称 `AB` ）。你可以通过一些方法灵活地创建一个 “块”。

同时该插件提供了一些实用的功能，例如 `列表转化为表格`

插件由两个核心部分组成：**选择器**和**处理器。**

选择器可以选择一段文本区域，并将其转化为 “块”。

处理器可以将选择器转化为的 “块”，进行一定程度的再处理。

## 选择器

### 选择器包括

[2ut|scrollT]

*   列表选择器
    *   使用：在_列表_的上一 / 两行加上 `[处理器名]` 的 header，注意 header 必须和_列表_首行位于同一层次
*   引用块选择器
    *   使用：在_引用块_的上一 / 两行加上 `[处理器名]` 的 header，注意 header 必须和_引用块_首行位于同一层次
*   代码块选择器
    *   使用：在_代码块_的上一 / 两行加上 `[处理器名]` 的 header，注意 header 必须和_代码块_首行位于同一层次
*   标题选择器
    *   使用：在_标题_的上一 / 两行加上 `[处理器名]` 的 header，注意 header 必须和_标题_首行位于同一层次
    *   注意要项：选择范围可能会跨越多个 Obsidian 认为的 “最小块”，在渲染模式中可能会被 Obsidian 进行优化而失效
*   首尾选择器
    *   使用：以 `:::` 开头和结尾，处理器名写在第一个 `:::` 的后面，不需要加 `[]`。其实就和代码块差不多，这也是 VuePress 的一个 md 扩展语法
    *   注意要项：选择范围可能会跨越多个 Obsidian 认为的 “最小块”，在渲染模式中可能会被 Obsidian 进行优化而失效

### 选择器一览

Here’s an example: (@todo nested rendering is a bit buggy at the moment).

**You can also view all the selectors supported by the current version of the plugin through the Settings panel.**

%% 下面举例使用：（@todo 嵌套渲染目前还有点 bug）%%

%% 你也可以通过设置面板来查看当前版本插件所支持的所有选择器 %%

[title2list|list2tab]

#### List Selector

[code(js)]

*   1
    *   2
        *   3
    *   4

#### Quote Selector

[code(js)]

#### Code Selector

[code(js)]

#### Title Selector

A TAB bar like this is done using this selector

%% 像这里的转标签栏，就是使用标题选择器完成的 %%

#### Head-tail Selector

This selector is not available in render mode

%% 该选择器在渲染模式不可用 %%

:::code()

1

2

3

:::

#### Table Selector

add in V2.2.0

[code(js)]

|1 |2 |

|---|---|

|3 |4 |

### 嵌套支持

*   v2.0.0 开始， 支持在列表或引用块中，使用 AB 语句（非不再限制只能再文档根部使用）
*   v2.1.0 开始， 能够支持用 AB 块包括 AB 块自己（@todo 依赖于 html2md，出 bug 的概率较大）

[title2list|list2tab]

#### List in Quote

[X]

1  
2

[code(js)]

*   11
    *   12
        *   13
    *   14

3  
4

#### Quote in List

[2table]

*   l1
    
    [Xquote|code(js)]
    
*   l2
    

#### List in List

Or even three levels of nesting

%% 甚至三层嵌套 %%

[list2table]

*   1
    *   2
        
        *   3 [Xquote]
            
        
        [list2table]
        
        *   < ll1| ll2
        *   ll3| ll4
        
    *   5
        

#### Quote in Quote

[#q in q]

### ~~Advanced selector（underdevelopment） ~~

%% 高级选择器（未开发）%%

`[>XXX]` 可以缩减范围选择（此功能未开发）

{^XXX} 所在层级选择，不同于下一层级选择（此功能未开发）

## 处理器

### 处理器包括

[2table|scrollT]

*   渲染处理器
    *   文本到 UI
    *   包括解析操作，其实叫做 “解析并渲染” 会更准确一点 如果不指定渲染操作则为 md 渲染操作
*   文本处理器
    *   文本到文本
    *   仅处理文本，即将一系列纯文本转化为另一个新的纯文本。可叠加
*   装饰处理器
    *   UI 到 UI
    *   可以提供一些装饰：如溢出滚动等。可叠加

[# 注意]

1.  处理器可以进行叠加操作，多个处理器用 `|` 间隔。一个处理器可以由多个文本操作和多个装饰操作、加一个渲染操作组成
2.  装饰器是 v1.3.0 版本新增的，相较于旧版本，有了装饰处理器会更灵活，可以对已经成型的页面元素进行二次修改
3.  如果对文本处理器直接使用装饰处理器，默认会自动先对文本进行一个 `md渲染处理器`
4.  三种处理器的逻辑，如下所示 [list2mermaid]
    *   Text—TextProcessor—>Text
    *   Text—RenderProcessor—>UI
    *   UI—DecorateProcessor—>UI

### 处理器一览

**（下面可能包含旧的或未实现的或与插件版本不符的处理器，也可能通过设置面板查看自己安装插件所支持的所有处理器）**

**你也可以通过设置面板查看当前版本插件所支持的所有处理器**

[list2table|overfold]

*   < 大类型 | 解析方法 | 解析方法 zh | 渲染方法 | 渲染方法 zh | 可转 md/html
*   tree
    *   ul-list| ul 树 （一叉多层树）
        *   2ut/2mdut | 转表格（规范） | md/html
    *   li-list| li 树 （一叉多层树）
        *   2lt/mdlt | 转列表格 | html
    *   ab-tree | 二层树 也叫 ” 消除最高级 ” （一叉二层树）
        *   2timeline | 转时间线 | mermaid
        *   2tab | 转标签栏 | html
        *   2chat | 转对话
    *   tree-list | 树列表 （多叉多层树）
        *   2table/2mdtable | 转树表格 | html
        *   2mermaid | 转流程图 | mermaid/html
        *   2mindmap | 转思维导图 | html
        *   2tree | 长得像树的树状图 | html
        *   2xuri | 旭日图 | html
        *   2brace | 括弧分类图 | html
*   other
    *   title | 标题级（语法糖）
        *   2list+list2xxx | (组合使用，下面提供了几种语法糖)
        *   2tab
        *   2table
        *   2mindmap
    *   code | 一定代码
        *   2doctable | 转表格（文档生成） | html
        *   json | 这个不能转树，只能说转可折叠渲染
    *   common | 通用
        *   text | 纯文本 | md
        *   md | md 渲染 | md
    *   render| 渲染 （理论上为 ” 渲染修饰器 ” 但该功能没做）
        *   flod | (折叠类) 可折叠 | md+
        *   hide | (折叠类) 默认折叠 | md+
        *   heimu| (折叠类) 黑幕遮挡 | html
        *   limit()/part() | (折叠类) 限高折叠 | html
        *   scroll()| (折叠类) 限高滚动 | html
        *   title()| 增加块标题（代码块可能会很常用）

支持的文本操作：

（与渲染操作相比，文本操作的特点在于可叠加。即：可以先经过多个文本操作，再进行渲染操作）

[2table]

*   < 类型 | 类型 zh | 方法 | 方法 zh
*   title| 标题类
    *   title2list| 转列表文本，title 最重要的处理器，可配合 list 渲染器使用
*   tree-indent | 树缩进
    *   indent2list | 缩进转列表
*   code/quote | 代码或引用块
    *   X | 根据选择器自动解除块
    *   code/code(str) | 变代码块
    *   Xcode/Xcode(bool) | 解除代码块
    *   quote | 变引用块
    *   Xquote | 解除引用块
    *   code2quote | 代码块转引用块
    *   quote2code | 引用块转代码块
*   text | 纯文本操作
    *   replace| 替换（带参）
    *   slice()| 切片（例如切割 1,-1，也可以达到类似 Xcode 的效果）
    *   listroot| 增加列表根
    *   2tree-indent | 列表转缩进

三种可解析为树的选择器的差异

[2table]

*   < 选择器 | 可解析层次 | 在 ul-list 里解析的区别
*   列表选择器 | 树层次（>0）| 首列仅解析列表层，`|` 为分割
*   负列表选择器 | 树层级（>-4）| 首列仅解析负列表层
*   标题选择器 | 树层级（>-9）| 首列仅解析标题层

补充：

*   `2` 表示 `to` 的意思（就是一种格式转化为另一种格式）
*   `X` 表示 `去除` 的意思（例如去除引用块或代码块）

* * *

0 - 基础教程 1 - 使用示例 - 列表选择器 any-block