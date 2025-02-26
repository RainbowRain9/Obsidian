---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview/
title: Obsidian 插件：Dataview
date: 2023-11-13 00:04:17
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/dataview
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
created: 2023-11-13T00:04
updated: 2024-04-13T12:49
---

## Obsidian 插件：Dataview

> **插件名片**
> 
> 插件 ID：dataview  
> 插件作者：Michael Brenan  
> 插件描述：为 Obsidian 提供数据查询能力，这需要学习一些较为简单的语法，但可以实现丰富的查询和组合效果。包括生成表格，标签，跟踪特定的笔记变化，选择具体笔记内容。  
> 插件版本：0.5.55  
> 插件源码地址：[obsidian-dataview](https://github.com/blacksmithgu/obsidian-dataview)  
> 插件文档地址：[Dataview Doc](https://blacksmithgu.github.io/obsidian-dataview/)  
> 国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?dataview)

Obsidian 是一款强大的知识管理和笔记应用程序， Dataview 插件为 Obsidian 提供了更高级的数据查询和可视化功能，可帮助用户更好地组织和分析笔记内容。

## Dataview 你用过么？

Dataview 插件的用途主要有三个方面。

首先，Dataview 插件可以用于创建复杂的数据查询和筛选。用户可以使用类似于 SQL 的语法，通过在笔记中标记和注释特定的数据字段或属性，然后利用 Dataview 插件进行搜索、过滤和排序。这样能够很方便地查找特定信息、生成特定条件下的数据集合，或者执行一些统计和计算操作。这对于处理大量信息的复杂项目、管理项目清单或进行定量分析非常有用。

其次，Dataview 插件还可以用于创建和展示笔记内容的动态视图。用户可以基于数据的不同维度和属性，使用 Dataview 插件生成列表，表格，日历和任务列表，以便以更直观的方式展示笔记中的内容和关系，并加强对整体知识结构的把握。

最后，Dataview 插件还支持自定义模板和样式，使用户能够根据自己的需要进行个性化的数据展示和排版。用户可以使用 Markdown 语法结合强大的 Dataview 指令，根据自己的喜好和需求，定义不同的模板和样式。这使得用户能够更好地控制和定制输出内容的格式和布局，使其更符合个人审美和展示要求。

总之，Obsidian 的 Dataview 插件为用户提供了更高级的数据查询、可视化和个性化功能，可以帮助用户更好地组织、分析和展示笔记内容，提升知识管理和信息处理的效率。

## 本系列文章在讲什么？

本系列文章分为四个部分：基本语法、实例展示、语法实战、社区实践（来自社区大家贡献）

### [开篇-Dataview基本语法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95)

-   [01 - 简单示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/01---%E7%AE%80%E5%8D%95%E7%A4%BA%E4%BE%8B)
-   [10 - Metadata 元数据](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/10---metadata-%E5%85%83%E6%95%B0%E6%8D%AE)
-   [11 - 添加元数据至文件](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/11---%E6%B7%BB%E5%8A%A0%E5%85%83%E6%95%B0%E6%8D%AE%E8%87%B3%E6%96%87%E4%BB%B6)
-   [12 - 添加元数据至列表和任务](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/12---%E6%B7%BB%E5%8A%A0%E5%85%83%E6%95%B0%E6%8D%AE%E8%87%B3%E5%88%97%E8%A1%A8%E5%92%8C%E4%BB%BB%E5%8A%A1)
-   [13 - Metadata的数据类型](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/13---metadata%E7%9A%84%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B)
-   [14 - 隐式字段](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/14---%E9%9A%90%E5%BC%8F%E5%AD%97%E6%AE%B5)
-   [15 - Literals 字面常量](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/15---literals-%E5%AD%97%E9%9D%A2%E5%B8%B8%E9%87%8F)
-   [20 - 四种查询方式](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/20---%E5%9B%9B%E7%A7%8D%E6%9F%A5%E8%AF%A2%E6%96%B9%E5%BC%8F)
-   [21 - 查询类型](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/21---%E6%9F%A5%E8%AF%A2%E7%B1%BB%E5%9E%8B)
-   [22 - 查询字段](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/22---%E6%9F%A5%E8%AF%A2%E5%AD%97%E6%AE%B5)
-   [23 - 操作符](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/23---%E6%93%8D%E4%BD%9C%E7%AC%A6)
-   [24 - 表达式](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/24---%E8%A1%A8%E8%BE%BE%E5%BC%8F)
-   [30 - Function 函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/30---function-%E5%87%BD%E6%95%B0)
-   [31 - DQL 与 SQL 的异同](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/31---dql-%E4%B8%8E-sql-%E7%9A%84%E5%BC%82%E5%90%8C)
-   [32 - Dataview 中的数值运算函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/32---dataview-%E4%B8%AD%E7%9A%84%E6%95%B0%E5%80%BC%E8%BF%90%E7%AE%97%E5%87%BD%E6%95%B0)
-   [33 - Dataview 中的对象操纵函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/33---dataview-%E4%B8%AD%E7%9A%84%E5%AF%B9%E8%B1%A1%E6%93%8D%E7%BA%B5%E5%87%BD%E6%95%B0)
-   [34 - Dataview 中的字符串操纵函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/34---dataview-%E4%B8%AD%E7%9A%84%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%93%8D%E7%BA%B5%E5%87%BD%E6%95%B0)
-   [35 - Dataview 中的实用函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/35---dataview-%E4%B8%AD%E7%9A%84%E5%AE%9E%E7%94%A8%E5%87%BD%E6%95%B0)
-   [40 - FAQ-常见问题](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/40---faq-%E5%B8%B8%E8%A7%81%E9%97%AE%E9%A2%98)
-   [41 - DQL 与 SQL 的异同](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/41---dql-%E4%B8%8E-sql-%E7%9A%84%E5%BC%82%E5%90%8C)
-   [42 - ISO 8601](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/42---iso-8601)
-   [43 - YAML 基础](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/43---yaml-%E5%9F%BA%E7%A1%80)

### [拓展-Dataview实例展示](https://pkmer.cn/Pkmer-Docs%E4%BE%8B%E5%B1%95%E7%A4%BA)

-   [Dataview 表格简单查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E8%A1%A8%E6%A0%BC%E7%AE%80%E5%8D%95%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview 表格进阶查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E8%A1%A8%E6%A0%BC%E8%BF%9B%E9%98%B6%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview实战-定制你的数据表格并为表格列添加个性化样式](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E5%AE%9E%E6%88%98-%E5%AE%9A%E5%88%B6%E4%BD%A0%E7%9A%84%E6%95%B0%E6%8D%AE%E8%A1%A8%E6%A0%BC%E5%B9%B6%E4%B8%BA%E8%A1%A8%E6%A0%BC%E5%88%97%E6%B7%BB%E5%8A%A0%E4%B8%AA%E6%80%A7%E5%8C%96%E6%A0%B7%E5%BC%8F)；
-   [Dataview 列表简单查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E5%88%97%E8%A1%A8%E7%AE%80%E5%8D%95%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview 列表进阶查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E5%88%97%E8%A1%A8%E8%BF%9B%E9%98%B6%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview 任务简单查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E4%BB%BB%E5%8A%A1%E7%AE%80%E5%8D%95%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview 任务进阶查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E4%BB%BB%E5%8A%A1%E8%BF%9B%E9%98%B6%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview 日历查询示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview-%E6%97%A5%E5%8E%86%E6%9F%A5%E8%AF%A2%E7%A4%BA%E4%BE%8B)；
-   [Dataview语法实战-自定义排序的简单实例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98-%E8%87%AA%E5%AE%9A%E4%B9%89%E6%8E%92%E5%BA%8F%E7%9A%84%E7%AE%80%E5%8D%95%E5%AE%9E%E4%BE%8B)；
-   [Dataview语法实战-自定义排序进阶操作实例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98-%E8%87%AA%E5%AE%9A%E4%B9%89%E6%8E%92%E5%BA%8F%E8%BF%9B%E9%98%B6%E6%93%8D%E4%BD%9C%E5%AE%9E%E4%BE%8B)；
-   [Dataview语法实战-FLATTEN操作符入门示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98-flatten%E6%93%8D%E4%BD%9C%E7%AC%A6%E5%85%A5%E9%97%A8%E7%A4%BA%E4%BE%8B)；
-   [Dataview语法实战-FLATTEN操作符进阶示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98-flatten%E6%93%8D%E4%BD%9C%E7%AC%A6%E8%BF%9B%E9%98%B6%E7%A4%BA%E4%BE%8B)；
-   [Dataview语法实战-GROUP BY 操作符简单示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98-group-by-%E6%93%8D%E4%BD%9C%E7%AC%A6%E7%AE%80%E5%8D%95%E7%A4%BA%E4%BE%8B)；
-   [Dataview语法实战-GROUP BY 操作符进阶示例](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98-group-by-%E6%93%8D%E4%BD%9C%E7%AC%A6%E8%BF%9B%E9%98%B6%E7%A4%BA%E4%BE%8B)；
-   [Dataview 中的构造函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/31---dataview-%E4%B8%AD%E7%9A%84%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0)；
-   [Dataview 中的数值运算函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/32---dataview-%E4%B8%AD%E7%9A%84%E6%95%B0%E5%80%BC%E8%BF%90%E7%AE%97%E5%87%BD%E6%95%B0)；
-   [Dataview 中的对象、数组操纵函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/33---dataview-%E4%B8%AD%E7%9A%84%E5%AF%B9%E8%B1%A1%E6%93%8D%E7%BA%B5%E5%87%BD%E6%95%B0)；
-   [Dataview 中的字符串操纵函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/34---dataview-%E4%B8%AD%E7%9A%84%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%93%8D%E7%BA%B5%E5%87%BD%E6%95%B0)；
-   [Dataview 中的实用函数](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95/35---dataview-%E4%B8%AD%E7%9A%84%E5%AE%9E%E7%94%A8%E5%87%BD%E6%95%B0)；

### [进阶-Dataview语法实战](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98)

-   [汇集主题--关于笔记的创建日期和主题的汇集](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B1%87%E9%9B%86%E4%B8%BB%E9%A2%98--%E5%85%B3%E4%BA%8E%E7%AC%94%E8%AE%B0%E7%9A%84%E5%88%9B%E5%BB%BA%E6%97%A5%E6%9C%9F%E5%92%8C%E4%B8%BB%E9%A2%98%E7%9A%84%E6%B1%87%E9%9B%86)
-   [添加某一主题笔记列表--表格用法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E6%9F%90%E4%B8%80%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E8%A1%A8%E6%A0%BC%E7%94%A8%E6%B3%95)
-   [添加某一主题笔记列表--基本用法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E6%9F%90%E4%B8%80%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E5%9F%BA%E6%9C%AC%E7%94%A8%E6%B3%95)
-   [添加某一主题笔记列表--进阶用法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E6%9F%90%E4%B8%80%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E8%BF%9B%E9%98%B6%E7%94%A8%E6%B3%95)
-   [添加相同主题笔记列表--表格用法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E7%9B%B8%E5%90%8C%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E8%A1%A8%E6%A0%BC%E7%94%A8%E6%B3%95)
-   [添加相同主题笔记列表--基本用法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E7%9B%B8%E5%90%8C%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E5%9F%BA%E6%9C%AC%E7%94%A8%E6%B3%95)
-   [添加相同主题笔记列表--进阶用法](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E7%9B%B8%E5%90%8C%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E8%BF%9B%E9%98%B6%E7%94%A8%E6%B3%95)
-   [添加相同主题笔记列表--完全相同](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E7%9B%B8%E5%90%8C%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E5%AE%8C%E5%85%A8%E7%9B%B8%E5%90%8C)
-   [添加相同主题笔记列表--指定月份](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E8%AF%AD%E6%B3%95%E5%AE%9E%E6%88%98/%E6%B7%BB%E5%8A%A0%E7%9B%B8%E5%90%8C%E4%B8%BB%E9%A2%98%E7%AC%94%E8%AE%B0%E5%88%97%E8%A1%A8--%E6%8C%87%E5%AE%9A%E6%9C%88%E4%BB%BD)

### [应用-Dataview社区实践经验](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C)

-   [Dataview实战-提取并展示笔记脚注](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E5%AE%9E%E6%88%98-%E6%8F%90%E5%8F%96%E5%B9%B6%E5%B1%95%E7%A4%BA%E7%AC%94%E8%AE%B0%E8%84%9A%E6%B3%A8)
-   [Dataview实战-Obsidian dataview 引用本地图片](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E5%AE%9E%E6%88%98-obsidian-dataview-%E5%BC%95%E7%94%A8%E6%9C%AC%E5%9C%B0%E5%9B%BE%E7%89%87)
-   [Dataview实战-发挥元数据的魔力-掌握 Dataview 的四大查询类型](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E5%AE%9E%E6%88%98-%E5%8F%91%E6%8C%A5%E5%85%83%E6%95%B0%E6%8D%AE%E7%9A%84%E9%AD%94%E5%8A%9B-%E6%8E%8C%E6%8F%A1-dataview-%E7%9A%84%E5%9B%9B%E5%A4%A7%E6%9F%A5%E8%AF%A2%E7%B1%BB%E5%9E%8B)
-   [Dataview实战-定制你的数据表格并为表格列添加个性化样式](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E5%AE%9E%E6%88%98-%E5%AE%9A%E5%88%B6%E4%BD%A0%E7%9A%84%E6%95%B0%E6%8D%AE%E8%A1%A8%E6%A0%BC%E5%B9%B6%E4%B8%BA%E8%A1%A8%E6%A0%BC%E5%88%97%E6%B7%BB%E5%8A%A0%E4%B8%AA%E6%80%A7%E5%8C%96%E6%A0%B7%E5%BC%8F)
-   [Dataview实战-制作一个倒计时或者正计时列表](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview%E7%A4%BE%E5%8C%BA%E5%AE%9E%E8%B7%B5%E7%BB%8F%E9%AA%8C/dataview%E5%AE%9E%E6%88%98-%E5%88%B6%E4%BD%9C%E4%B8%80%E4%B8%AA%E5%80%92%E8%AE%A1%E6%97%B6%E6%88%96%E8%80%85%E6%AD%A3%E8%AE%A1%E6%97%B6%E5%88%97%E8%A1%A8)
-   [Obsidian样式-DataView在table视图下标签出现错位断裂的修复](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E5%A4%96%E8%A7%82/css-%E7%89%87%E6%AE%B5/obsidian%E6%A0%B7%E5%BC%8F-dataview%E5%9C%A8table%E8%A7%86%E5%9B%BE%E4%B8%8B%E6%A0%87%E7%AD%BE%E5%87%BA%E7%8E%B0%E9%94%99%E4%BD%8D%E6%96%AD%E8%A3%82%E7%9A%84%E4%BF%AE%E5%A4%8D)

