---
id: bcf986e3-2bdc-4909-b20f-f81e13a2ce0f
url: https://forum-zh.obsidian.md/t/topic/26298
title: |
  单插件+CSS 管理连续空格，2 空格、4 空格及以上 - 经验分享 - Obsidian 中文论坛
source:
dtype: 教程
tags:
  - 400兴趣类/Obsidian/教程
state: true
date: 2024-03-16 14:18:12
---


# 单插件+CSS 管理连续空格，2 空格、4 空格及以上 - 经验分享 - Obsidian 中文论坛
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-forum-zh-obsidian-md-t-topic-26298-18e45e7970b)
[Read Original](https://forum-zh.obsidian.md/t/topic/26298)

准备：[Dynamic Highlights 插件 5](https://github.com/nothingislost/obsidian-dynamic-highlights)。CSS 片段文后给出。

适用场景，包括但不限于：

* 中英混排、调整英文句子时，容易出现句中连续 2 空格。
* 使用 Shift \+ Enter 软换行时，搞不清行首有几个空格。
效果展示，点击展开 

![20231125_121119](https://proxy-prod.omnivore-image-cache.app/280x375,spdjmxo60rT3WKgzZ_YevkAgHTFvkuMWQlCZr3AjYSWo/https://forum-zh.obsidian.md/uploads/default/original/2X/8/8539adaef10b8f406a78c4e12f7aca1a34bac5dd.gif)

对只有使用需求的，跟随步骤配置即可。  
对有修改需求的，各部分后附说明（默认折叠），可参阅学习修改。

注：更新至 Insider v1.5.0 后 Ob 原装列表样式过于不符合我的审美，本文是在关闭“显示缩进参考线”的条件下进行测试的。

对 Insider v1.5.0 原装列表样式的吐槽 

平时：（4 个空格而已，默认你空辣么大干啥）

![image](https://proxy-prod.omnivore-image-cache.app/464x155,sVf3XT7fymWuHp_HuZCpUD_CZDg7RzhfAqFvdXEr2ru8/https://forum-zh.obsidian.md/uploads/default/original/2X/8/8cb4e45f4326558bfb5371b61f1b2d215d62b0d8.png)

使用 [Control Characters 插件](https://github.com/joethei/obsidian-control-characters) 查看空格时：（更大了）

![20231125_101955](https://proxy-prod.omnivore-image-cache.app/517x135,sXxzcJJ6NT61H7iCNnGZV8kdpknLs5o8RkL7ZhkOtnYM/https://forum-zh.obsidian.md/uploads/default/original/2X/1/18ab3bca0e200426b5f0704cca0a0df45abeca65.gif)

  
插件配置 

[![image](https://proxy-prod.omnivore-image-cache.app/517x275,swMauef0yMclZrGsZlffrrgV9Stu_si1vSpAVbUWBPw0/https://forum-zh.obsidian.md/uploads/default/optimized/2X/7/7cc649ea01ceb76879278743d9ce5b0c25e0ad03_2_517x275.jpeg)](https://forum-zh.obsidian.md/uploads/default/original/2X/7/7cc649ea01ceb76879278743d9ce5b0c25e0ad03.jpeg "image")

从左往右依次：

1. 输入名称：`SP2`。
2. 点击圆点，点击 `Clear`，清除默认颜色。
3. 输入匹配内容：2 个空格。
4. 保持正则关闭，点击 `Save`。

因为插件的 Save 按钮中间区域交互有点问题，建议点击按钮边缘区域进行保存。

用同样的方法，再添加一个名称 `SP4`，输入匹配内容：4 个空格，保持正则关闭，点击 `Save`。

说明 

这一段操作，相当于通过插件，我们为所有匹配内容左右加上了`<span class="SP2"> </span>` 和 `<span class="SP4"> </span>` 的 HTML 代码。

现在，我们文档中所有连续 2 个空格都将应用 `<span class="SP2">` 指定的 CSS 样式，而所有连续 4 个空格都将应用 `<span class="SP4">` 指定的 CSS 样式，彼此之间按照 HTML 元素的排列，可以互相嵌套。

  
CSS 配置 

Dynamic Highlights 插件的作用是创建新的 span class，因此对其应用 CSS 只需像其他 CSS 片段一样放在 Ob 的 snippets 文件夹下。

如果不知道什么是添加 CSS，此链接有详细说明：[CSS 分享：自动隐藏式十字花左侧边栏](https://forum-zh.obsidian.md/t/topic/26605/2)

效果展示 CSS 代码 

```css
.SP2:not(.SP4 .SP2) {background-image: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg"><rect x="1.6" y="-1" width="40%" height="110%" fill="none" stroke="hsla(90, 100%, 50%, 0.6)" /></svg>');}

/*v1.5.0额外代码*/
body {--list-marker-min-width: unset; /*编辑模式列表缩进*/}

```

为了避免行首奇数空格，如效果展示中引用块第二行无序列表行首 5 个空格，CSS 将右边线调得离文本较近。这样，当文本明显与线拉开了距离，就能判断出现了奇数空格。

说明 

`.SP2:not(.SP4 .SP2)` 指定除了 `class="SP4"` 下 `class="SP2"` 的元素外所有 `class="SP2"` 的元素的样式。

`url(' ')` 中为 SVG，`<rect />` 这段代码创建了一个矩形。

* `x="1.6"` 表示矩形的左上角相对于 SVG 视口左侧的水平位置为 1.6 个单位。
* `y="-1"` 表示矩形的左上角相对于 SVG 视口顶部的垂直位置为 -1 个单位。
* `width="40%"` 表示矩形的宽度为 SVG 视口宽度的 40%。
* `height="110%"` 表示矩形的高度为 SVG 视口高度的 110%。
* `fill="none"` 表示矩形内部不填充颜色，即透明。
* `stroke="hsla(90, 100%, 50%, 0.6)"` 表示矩形边框的颜色为 hsla 色彩模式中色相为 90 度、饱和度为 100%、亮度为 50%、透明度为 0.6 的颜色。
  
彩蛋：常用中文全角标点左右空格管理 

由于中文全角标点在显示上类似自带 1 个空格，在中英混排中确认中文全角标点两边是否有空格也是一件麻烦事，可以用同样的方式解决。

效果展示 

![20231125_143235](https://proxy-prod.omnivore-image-cache.app/363x175,sNjyffn_4kO95kPO4AR1NyeerwzpAmaPnB6q26FGAxUE/https://forum-zh.obsidian.md/uploads/default/original/2X/d/dfbb36510cf5d8af4b7c50b397a399dc157981c8.gif)

  
插件配置 

Dynamic Highlights 名称：`T0`。

匹配内容 `[！，。？；：（）《》【】、] (?!\^|#)|(?<! |#) [！，。？；：（）《》【】、]`

**启用正则**。

CSS 配置 

```css
.T0 {text-decoration: underline dashed hsla(90, 100%, 50%, 0.6);}

```

说明 

在正则中，管道符 `|` 意为“或者”，表示要匹配的内容是被管道符分隔的任意一个。

中括号 `[ ]` 内的内容是字符的集合，表示要匹配的字符可以是其中任意一个。这里包括全角感叹号、逗号、句号、问号、分号、冒号、括号、书名号、方括号、顿号。

也即这个正则表示匹配常用中文全角标点右边有 1 个空格或左边有 1 个空格的所有内容。

###  想阅读更多？请浏览[经验分享](https://forum-zh.obsidian.md/c/8-category/8)中的其他话题或[查看最新话题](https://forum-zh.obsidian.md/latest)。



