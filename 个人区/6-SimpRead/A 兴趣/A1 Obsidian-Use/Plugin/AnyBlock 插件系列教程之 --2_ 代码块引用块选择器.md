---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/2
state: true
dtype: 插件
title: AnyBlock 插件系列教程之 --2_ 代码块引用块选择器
date: 2023-11-12 21:40:46
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/AnyBlock
source: Pkmer
type: 插件
banner:
  - /img/pkmer-avatar.png
banner_icon: 🔖
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

## 基本使用

### 消除块（代码 / 引用）

[Xquote]

[Xcode(true)]

```
var str = "Hello World"
console.log(str)

```

### 增添块（代码 / 引用）

这里借助了 “范围选择器”，详见下一节

{[code]

ad-quote

It is a good plugin

}.

{[quote]

[!note]

行 1

行 2

}.

### 转化块

块的转化有时也有大用，例如：

*   借用 md 格式
    *   像 Any-Block 就内置了很多这种功能，例如列表转化为其他树类格式。 在 [设计理念](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/2---%E4%BD%BF%E7%94%A8%E7%A4%BA%E4%BE%8B---%E4%BB%A3%E7%A0%81%E5%9D%97%E5%BC%95%E7%94%A8%E5%9D%97%E9%80%89%E6%8B%A9%E5%99%A8/10-Obsidian/Obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/any-block.md) 中，也演示过没有 callout 语法的环境下，如何将引用块转 Ad 代码块
*   借用代码格式
    *   反过来也行，例如 mermaid 是没有提供代码高亮功能的，写起来比较痛苦。
    *   但在这里我们可以借助 js 的**高亮**来写 mermaid 代码，然后渲染回 mermaid 格式

块的转化是非常灵活的，基于复合处理器，可以有很多种不同的写法：

比较笨拙的写法：

[Xcode(true)]

[Xquote]

```
console.log("Hello World")

``` 

更好的写法：

（code2quote 其实就相当于 Xcode(true)|quote）

（quote2code(js) 其实就相当于 Xquote|code(js)）

[code2quote]

[quote2code(js)]

console.log(“Hello World”)

其中，如果要转化为 callout 语法的引用块的话，这里有个语法糖：用感叹号快捷表示，就不用像上一项那样写两行了

{[!info]

ad-quote

dfsfs

dfsfsdafa

}.

## 一些比较有用的建议

有时代码块 / 引用块的内容会比较长，折叠起来可能会比较方便

hide/fold 快捷指令，代码块默认折叠 / 可折叠

[hide]

```
console.log("Hello World")

```

* * *

1 - 使用示例 - 列表选择器 2 - 使用示例 - 代码块引用块选择器 3 - 使用示例 - 全局选择器 any-block