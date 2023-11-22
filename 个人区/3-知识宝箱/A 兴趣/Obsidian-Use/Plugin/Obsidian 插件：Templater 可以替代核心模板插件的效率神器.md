---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/templater/templater-obsidian/
title: Obsidian 插件：Templater 可以替代核心模板插件的效率神器
date: 2023-11-12 23:54:12
tags:
  - 400兴趣类/笔记软件/Obsidian/Plugin/Templater
host: pkmer.cn
source: Pkmer
type: 插件
banner: 
banner_icon: 🔖
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>
## 概述

Templater 号称 Obsidian 四大金刚之一 ([quickadd](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/quickadd),[dataview](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/dataview/dataview),[obsidian-excalidraw-plugin](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/excalidraw/obsidian-excalidraw-plugin)), 模板插件当之无愧，但因为模板插件用法很极客基本靠命令代码，很多新手只能用别人写好的模板实现自己需求，入坑门槛比较高。注意此模板插件并非 Obsidian 官方自带的核心模板插件。

## 功能介绍

既然称之为 Templater 模板插件，应该是类似 word 模板一样的功能，设置好变量， 然后自动生成带格式和结构的 md 文档。

跟官方的模板插件不同，Templater 插件内置的变量和命令更多。简单总结 templater 主要的功能有

*   通过命令调用模板文件
*   不同文件夹使用不同的模板文件
*   创建新文件时调用模板文件
*   模板中使用 js 脚本
*   模板中调用系统命令

这里的关键就是如何写模板文档，这里就需要参考官方的语法说明文档了。[Introduction - Templater (silentvoid13.github.io)](https://silentvoid13.github.io/Templater/)

## 设置

![](https://cdn.pkmer.cn/images/202305141650262.png!pkmer)

## 常用的语法变量

要用好模板，就需要了解下常用的 templater 变量（简称 tp 变量），这些 tp 变量可以理解为模板中的占位符，生成笔记的时候，这些变量就会变成对应的内容。

<table><thead><tr><th>内部变量</th><th>参数</th><th>功能描述</th><th>代码示例</th><th>显示效果</th></tr></thead><tbody><tr><td><code>{{tp_title}}</code></td><td>无</td><td>取得当前文件的名称</td><td><code>{{tp_title}}</code></td><td><code>一文掌握Obsidian模板</code></td></tr><tr><td><code>{{tp_folder}}</code></td><td>- <code>vault_path</code>: 取得文本库到当前文件夹的相对路径。取值范围 <code>true</code> 或 <code>false</code>，默认为 <code>false</code>。</td><td>获取当前目录的名称。</td><td>1. <code>{{tp_folder}}</code> 2. <code>{{tp_folder:vault_path=true}}</code></td><td>1. <code>Obsidian</code> 2. <code>写作/技术类/Obsidian教程</code></td></tr><tr><td><code>{{tp_include}}</code></td><td>- <code>f</code>: 此为必填项。须指定从文档库开始到某一具体文件的相对路径，将该文件全部内容填充到当前文档中书写有 <code>{{tp_include:f="location"}}</code> 的位置。</td><td>将指定文件中全部内容的填入当前文档。指定文件可为另一样章，其中包含的变量也将解析替换（替换深度 <code>10</code>）。</td><td><code>{{tp_include:f="location"}}</code></td><td></td></tr><tr><td><code>{{tp_date}}</code></td><td>- <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD</code>)。<br>- <code>offset</code>: 设置偏移天数，例如设定为 <code>-7</code> 时可获得上周日期 (默认值为 <code>0</code>)。</td><td>取得今日 + 偏移天数的日期。</td><td><code>{{tp_date:f="ll", offset=7}}</code></td><td></td></tr><tr><td><code>{{tp_yesterday}}</code></td><td>- <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD</code>)。</td><td>取得昨天的日期。</td><td><code>{{tp_yesterday}}</code></td><td><code>2021-03-24</code></td></tr><tr><td><code>{{tp_tomorrow}}</code></td><td>- <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD</code>)。</td><td>取得明天的日期。</td><td><code>{{tp_tomorrow}}</code></td><td><code>2021-03-26</code></td></tr><tr><td><code>{{tp_time}}</code></td><td>- <code>f</code>: 指定时间格式化字符串， (缺省格式为: <code>HH:mm</code>)。</td><td>取得当前时间。</td><td>1. <code>{{tp_time}}</code> 2. <code>{{tp_time:f="H:m:s"}}</code></td><td>1. <code>08:36</code> 2. <code>8:36:9</code></td></tr><tr><td><code>{{tp_creation_date}}</code></td><td>- <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD HH:mm</code>)。</td><td>获取当前文档创建时的日期。</td><td><code>{{tp_creation_date}}</code></td><td><code>2021-03-21 13:03</code></td></tr><tr><td><code>{{tp_last_modif_date}}</code></td><td>- <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD HH:mm</code>)。</td><td>获取当前文档最后修改的日期。</td><td><code>{{tp_last_modif_date}}</code></td><td><code>2021-03-25 08:36</code></td></tr><tr><td><code>{{tp_title_date}}</code></td><td>- <code>title_f</code>: 指明适用于文档名称中的日期字符串格式。 (默认格式为: <code>YYYY-MM-DD</code>)。此处设置应与核心插件 “日记” 中指定日期格式化字符串相同。 - <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD</code>)。 - <code>offset</code>: 设置偏移天数，例如设定为 <code>-7</code> 时可获得上周日期 (默认值为 <code>0</code>)。</td><td>多用于 “日记”。可获取文件名中包含的日期 + 偏移天数。</td><td><code>{{tp_title_date:title_f="YYYY-MM-DD_dddd", f="YYYY-MM-DD"}}</code></td><td><code>2021-03-26</code></td></tr><tr><td><code>{{tp_title_yesterday}}</code></td><td>- <code>title_f</code>: 指明适用于文档名称中的日期字符串格式。 (默认格式为: <code>YYYY-MM-DD</code>)。此处设置应与核心插件 “日记” 中指定日期格式化字符串相同。 - <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD</code>)。</td><td></td><td></td><td>- <code>offset</code>: 设置偏移天数，例如设定为 <code>-7</code> 时可获得上周日期 (默认值为 <code>0</code>)。</td></tr><tr><td><code>{{tp_title_tomorrow}}</code></td><td>- <code>title_f</code>: 指明适用于文档名称中的日期字符串格式。 (默认格式为: <code>YYYY-MM-DD</code>)。此处设置应与核心插件 “日记” 中指定日期格式化字符串相同。 - <code>f</code>: 指定日期格式化字符串， (缺省格式为: <code>YYYY-MM-DD</code>)。 - <code>offset</code>: 设置偏移天数，例如设定为 <code>-7</code> 时可获得上周日期 (默认值为 <code>0</code>)。</td><td>多用于 “日记”。可获取文件名中包含的日期后一天 + 偏移天数。</td><td><code>{{tp_title_tomorrow_title:title_f=="YYYY-MM-DD_dddd, f="YYYY-MM-DD"}}</code></td><td><code>2021-03-27</code></td></tr><tr><td><code>{{tp_daily_quote}}</code></td><td>无</td><td>提供的 API 取得每日名言摘引。</td><td><code>{{tp_daily_quote}}</code></td><td></td></tr><tr><td><code>{{tp_random_picture}}</code></td><td>- <code>size</code>: 以如下方式设置图片尺寸 <code>&lt;宽&gt;x&lt;高&gt;</code>(默认值为: <code>1600x900</code>).</td><td></td><td></td><td></td></tr><tr><td>- <code>query</code>: 输入一个关键字用于限定选定图片的范围。如需使用多个关键字，彼此之间需要以英文半角 <code>,</code> 加以间隔。此时，还有另一注意事项：需使用英文双引号 <code>"</code> 用以在两端定界。(默认值为: 没有搜索关键字)</td><td>基于搜索关键字从 unsplash.com 获取一张随机图片。</td><td><code>{{tp_random_picture:size="800x600", query="beijing"}}</code></td><td></td><td></td></tr><tr><td><code>{{tp_title_picture}}</code></td><td>- <code>size</code>: 以如下方式设置图片尺寸 <code>&lt;宽&gt;x&lt;高&gt;</code>(默认值为: <code>1600x900</code>).</td><td>基于笔记标题从 unsplash.com 获取一张随机图片。</td><td><code>{{tp_title_picture:size="800x600"}}</code></td><td></td></tr><tr><td><code>{{tp_cursor}}</code></td><td>无</td><td>将当前位置设定为套壳样章后游标的操作位置。</td><td><code>{{tp_cursor}}</code></td><td></td></tr></tbody></table>

## 常用模板举例

新建文件，弹出输入文件名称，自动填充常见 yaml 的模板

把下面代码内容保存成 md 文件 放到 template 的模板目录，比如 `88-template` 随便起个名称，这里命名为 `tp-通用模板.md`

```
---
UID: 20230819231847 
aliases: 
tags: 
source: 
cssclass: 
created: 2023-08-19
---

## ✍内容


```

在 tp 插件的 文件夹模板中 如果需要在库根目录创建文件就启用模板，这里选择 `/` 然后找到刚才保存 `tp-通用模板.md` 的文件

![](https://cdn.pkmer.cn/images/202305141711170.png!pkmer)

这样新建文件的时候 就会调用这个模板效果如下：

![](https://cdn.pkmer.cn/images/202305141719847.gif!pkmer)

## 社区使用技巧

*   [Templater 实现关键词自动化套用模板](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E4%BD%BF%E7%94%A8%E6%8A%80%E5%B7%A7/templater%E5%AE%9E%E7%8E%B0%E5%85%B3%E9%94%AE%E8%AF%8D%E8%87%AA%E5%8A%A8%E5%8C%96%E5%A5%97%E7%94%A8%E6%A8%A1%E6%9D%BF)：铅笔小明分享的通过关键词自动化套用模板
*   [Templater 插件基本语法格式](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/templater/templater%E6%8F%92%E4%BB%B6%E5%9F%BA%E6%9C%AC%E8%AF%AD%E6%B3%95%E6%A0%BC%E5%BC%8F)
*   [Templater 插件两次单选语法](https://pkmer.cn/Pkmer-Docs%E4%BB%B6%E4%B8%A4%E6%AC%A1%E5%8D%95%E9%80%89%E8%AF%AD%E6%B3%95)]

一种实用新型 Obsidian 实践之构建我的第二大脑 Templater 实现关键词自动化套用模板日记模板 buttonsobsidian-tasks-pluginObsidian 社区插件 quickadddataviewobsidian-excalidraw-plugintemplater-obsidianTemplater 插件基本语法格式 Templater 插件两次单选语法