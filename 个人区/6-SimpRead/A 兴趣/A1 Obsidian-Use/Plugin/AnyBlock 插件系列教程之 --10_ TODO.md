---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/10
state: true
dtype: 插件
title: AnyBlock 插件系列教程之 --10_ TODO
date: 2023-11-12 21:43:44
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/AnyBlock
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
created: 2023-11-12T21:43
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

*   reinforce
    *   选择器
        *   **嵌套选择器** 没有嵌套的程序是没有灵魂的 !!! （但问题在于，例如说第一层是 tree，可能会破坏结构，有歧义。因为现在的 tree 格式是 number-str 的，那需要 number-dom 才行） （或者说：列表选择器不能嵌套列表选择器有歧义，需要嵌套引用选择器，在此基础上你解除引用选择器间接嵌套）
        *   现在的都是同级选择器，增添下级选择器（话说下级选择器的多了一个根部，怎么解决？ 当标题头吗。比如标题，我认为范围不选这个头会比较好？）
    *   处理器
        *   QA 处理器
        *   优化 2ultable，在这个模式中让内联换行变成同级换行而非下级换行的意思
    *   层级
        *   负级列表开关
        *   根据层级关系，推荐合理的处理器（如检测到树相关的就推荐树类处理器）
    *   样式
        *   树表格的间隔着色样式获取可以优化 方案 1：例如多行的格可以视情况使用渐变（单数不用，复数需要，但会不会有不统一的问题）？ 方案 2：仿 mindmap 的着色，后面的列就不要隔行着色了
        *   列表格的可折叠样式
    *   转化
        *   右键选择转化为：md 原生 (表格)/html 格式 / 图片
    *   渲染模式
        *   第一行的头选择器没有被隐藏
*   fixing bug | .
    *   复选框列表的兼容、有序列表的兼容
    *   **引用块内的列表 / 列表内的引用块 无法识别**
    *   **表格转置与表头符号冲突、转置模式目前是纯 css 实现的 如果大家的行高不相同，会出现不匹配的情况。** 后续会将 css 实现改进为转化 table 元素实现
*   已优化
    *   性能：优化刷新频率，现在的刷新频率太高了