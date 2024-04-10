---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/code-tab%E8%BF%98%E8%83%BD%E8%BF%99%E4%B9%88%E7%8E%A9/
title: Obsidian 插件：code tab 还能这么 “玩”
date: 2023-11-12 21:01:20
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/codetab
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

## 引言

这篇文章是对 [obsidian-code-tab](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-code-tab) 可以把你的内容转换为具有选项卡切换功能的代码块，就像这个样子：

我的笔记中用了很多 code-tab 代码块，他可以把我的线性文章缩短成一块，对我构建对于某个知识点的框架非常有利

![](https://cdn.pkmer.cn/images/code-tab%20%E8%BF%98%E8%83%BD%E8%BF%99%E4%B9%88%E2%80%9C%E7%8E%A9%E2%80%9D-20231103153447996.png!pkmer)

虽然用 ob 的核心插件『大纲』或者使用 floating-toc 之类的插件都可以实现快速查阅的功能。但是我更喜欢这种实现方法与 code-tab 这样直接打碎全文，将内容并排展示的方式。原来文中的每个标题都变成了一个标签页，标题与标题之间的递进或者同级的概念也更加清晰。

如果已经决定的这篇文章写成这样的格式，我不会直接在开头写就把四个反引号写上，我依旧是线性的把文章写完，只不过每个标题我都替换成 `tab: 标题名`。全文写完以后再在开头和结尾补充上语法。这样就不会因为文本写在代码块里面不渲染 markdown 语法了。

我对插件做了一些修改，有需要的可以自取

*   选中的标签页下方长条颜色换为了蓝色；
*   淡化未选择的标签页文字颜色；
*   鼠标悬浮于未选择的标签页时，下方出现灰色长条；
*   限制标签页正文的最大长度，超过长度添加纵向滚动条；

**另外**

使用了下面的 css 后，配合 style-setting 插件还可以自定义 tab 的颜色、透明度，修改出现滚动条时最大长度的大小

```
/* @settings

name: Code-tab
id: code-tab
settings:
  - 
    id: bc
    title: background color of tab items and tab contents
    title.zh: 标签页栏和正文的背景颜色
    type: variable-themed-color
    format: hex
    default-light: '#f6f8fa'
    default-dark: '#1e1e1e'
  - 
    id: tabbbc
    title: the active tab item border bottom color
    title.zh: 选中的标签页的标签下方长条的颜色
    type: variable-themed-color
    format: hex
    default-light: '#87a5c7'
    default-dark: '#87a5c7'
  - 
    id: tabbc
    title: active tab item background color
    title.zh: 选中的标签页的标签的背景颜色
    type: variable-themed-color
    format: hex
    default-light: '#d7dcff52'
    default-dark: '#282c34'
  - 
    id: tabfc
    title: active tab item font color
    title.zh: 选中的标签页的标签的字体颜色
    type: variable-themed-color
    format: hex
    default-light: '#0E0E0E'
    default-dark: '#D8DEE9'
  -
    id: tabop
    title: opacity of deactived tab item
    title.zh: 未被选中的标签页的标签的透明度
    type: variable-number-slider
    default: 0.5
    min: 0
    max: 1
    step: 0.1
*/
.theme-dark {
  --bc: #1e1e1e;
  --tabbc: #282c34;
  --tabfc: #D8DEE9;
}

.theme-light {
  --bc: #f6f8fa;
  --tabbc: #d7dcff52;
  --tabfc: #0E0E0E;
}

body {
  --tabop: 0.5;
  --tabbbc: #87a5c7;
}

.tab-container .tabs .tab-item--active {
  background-color: var(--tabbc);
  border-bottom-color: var(--tabbbc) !important;  /* 选中的标签页下方长条的颜色 */
  color: #000000;
  opacity: 1 !important;
}

.tab-container .tabs .tab-item {
  white-space: nowrap;
  border-bottom-color: var(--tabbc);
  background-color: var(--bc);
  border-radius: 2px;
  color: var(--tabfc);
  opacity: var(--tabop);
}

.tab-container .tabs .tab-item>p{
  margin: auto;
}

.tab-container .tabs .tab-item:hover {
  border-bottom-color: #b4b4b4;
  transition: transform 250ms cubic-bezier(0, 0.5, 0.5, 1.1), border-bottom-color 250ms ease-out;
}

.tab-container .tab-contents {
  border: 1px solid var(--bc);
  background-color: var(--bc);
}

.tab-container .tab-contents .tab-content--active {
  padding-left: 20px;
}

:is(.markdown-preview-view, .markdown-rendered) pre {
  background-color: var(--bc) !important;
  padding: 0px;
}

.tab-container .tab-contents {
  max-height: 600px;
  overflow: auto;
}

```

有时我会想给标签栏中的标签名加上高亮、加粗或者斜体，可是原版 code-tab 并不支持标签栏渲染，于是我稍微在原版的基础上加了些修改，让标签栏的文本也可以渲染 markdown，需要的可以在下方自取。

![](https://pkmer.cn/Pkmer-Docs%E8%83%BD%E8%BF%99%E4%B9%88%E2%80%9C%E7%8E%A9%E2%80%9D-20231104022822915.png)

[xhuajin/obsidian-code-tab-page at v1.0.0 (github.com)](https://github.com/xhuajin/obsidian-code-tab-page/tree/v1.0.0) 自取

code-tab 还能这么玩 obsidian-code-tabObsidian 社区插件 code-tab - 还能这么 “玩”-20231104022822915.png