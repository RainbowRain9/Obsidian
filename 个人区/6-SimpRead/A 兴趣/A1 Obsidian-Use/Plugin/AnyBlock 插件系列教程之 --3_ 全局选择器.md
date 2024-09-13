---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/3
state: true
dtype: 插件
title: AnyBlock 插件系列教程之 --3_ 全局选择器
date: 2023-11-12 21:41:04
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/AnyBlock
source: Pkmer
banner:
  - /img/pkmer-avatar.png
banner_icon: 🔖
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

## 标题选择器

**（@bug 似乎是因为 ob 的分段渲染原因，这在渲染模式里会因为过长而产生 bug（选择范围错误））**

**fixing this bug**：因为不是同一个 “段落” 的东西有可能被分开渲染，所以你可以用代码块或引用块将其包起来，使其变成一个 “不可分割” 的整体

可以包括很大一片区域，且不需要选择结束位置

（注意：一般使用 N 级标题选择器所选择的范围为两个 N-1 级标题之间的范围）

（@todo 按理说这里应该还要有个选项，能够选择当前标题的同级项还是低级项）

[quote]

### 标题选择器示例

局部选择器

```
- 列表选择器

- 引用块选择器

- 代码块选择器

```

*   全局选择器
    *   范围选择器
    *   标题选择器

能自动包括更小一级的标题

#### 引用块

#### 代码块

```
console.log("Hello World")

```

#### 公式块

## 首尾选择器（beta）

**（@bug 目前不能在渲染模式中生效）**

用 `{[]` 和 `}.` 将范围包起来即可，特点同样是包括很大一片区域，并且拥有极高的自由度，哪怕是破坏规则的方式

（该选择器甚至可以内联触发，但我将内联触发给关了）

首尾范围选择器很强大，但我并不推荐去滥用这种选择器，更推荐使用标题选择器替代之

例如：

{[quote]

### 局部选择器

*   局部选择器
    *   列表选择器
    *   引用块选择器
    *   代码块选择器

### 全局选择器

*   全局选择器
    *   范围选择器
    *   标题选择器

包括代码块

```
console.log("Hello World")

```

包括公式块

}.

## 标题选择器的妙用

### 标题转列表

其中，标题选择器最有意思的一点：可以通过 ‘title2list’ 转化为列表。

即列表能做到的标题也能，甚至更强大，可以支持大纲嵌套列表和正文

==Among them, the most interesting point of the title selector:

it can be converted into a list through ‘title2list’,

that is, Even the headings that lists can do, and even more powerful,

can support outline nested lists and bodies==

（但注意：多行正文只会视为一层而非多层，建议如果迫不得已用正文，最好就只使用一行）

[title2list]

#### 标题选择器示例

*   局部选择器
    *   列表选择器
    *   引用块选择器
    *   代码块选择器
*   全局选择器
    *   范围选择器
    *   标题选择器

能自动包括更小一级的标题

##### 引用块

##### 代码块

```
console.log("Hello World")

```

##### 公式块

### 标题转表格

一些语法糖：

*   title2table = title2list|list2table
*   title2mindmap = title2list|list2mindmap

[title2table]

#### Origins

*   Long history
*   ::icon(fa fa-book)
*   Popularisation
    *   British popular psychology author Tony Buzan

#### Research

On effectiveness  
and features

On Automatic creation

*   Uses
    *   Creative techniques
    *   Strategic planning
    *   Argument mapping

#### Tools

*   Pen and paper
*   Mermaid

### 标题转脑图

[title2mindmap]

#### root((mindmap))

##### Origins

*   Long history
*   ::icon(fa fa-book)
*   Popularisation
    *   British popular psychology author Tony Buzan

##### Research

On effectiveness  
and features

On Automatic creation

*   Uses
    *   Creative techniques
    *   Strategic planning
    *   Argument mapping

##### Tools

*   Pen and paper
*   Mermaid

### 流程图

[title2list|list2mermaid]

#### Origins

*   Long_history
*   Popularisation
    *   British_popular_psychology_author_Tony_Buzan

#### Research

*   On_effectiveness_and_features
*   On_Automatic_creation
    *   Uses
        *   Creative_techniques
        *   Strategic_planning
        *   Argument_mapping

#### Tools

*   Pen_and_paper
*   Mermaid

### 再来试试标签

[title2list|list2mdtab]

#### Origins

*   Long history
*   ::icon(fa fa-book)
*   Popularisation
    *   British popular psychology author Tony Buzan

#### Research

On effectiveness  
and features

On Automatic creation

*   Uses
    *   Creative techniques
    *   Strategic planning
    *   Argument mapping

#### Tools

*   Pen and paper
*   Mermaid

* * *

2 - 使用示例 - 代码块引用块选择器 3 - 使用示例 - 全局选择器 4 - 使用示例 - 更多处理器 any-block