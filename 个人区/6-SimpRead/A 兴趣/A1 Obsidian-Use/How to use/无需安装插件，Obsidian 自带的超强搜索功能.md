---
id: b5c7444c-bccb-45f2-a142-5cae70e6e3f0
url: https://mp.weixin.qq.com/s/EfYdmqDkSl8cotVZWEdXfg
title: |
  无需安装插件，Obsidian 自带的超强搜索功能
author: |
  OS
dtype: 教程
state: true
date: 2023-12-04 14:03:59
tags:
  - 400兴趣类/Obsidian/教程/搜索
created: 2023-12-04T18:12
updated: 2024-04-13T12:49
---


# 无需安装插件，Obsidian 自带的超强搜索功能
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-ef-ydmq-dk-sl-8-cot-vzw-ed-xfg-18c336d089a)
[Read Original](https://mp.weixin.qq.com/s/EfYdmqDkSl8cotVZWEdXfg)

原创  OS  PKMer 知识社区 _2023-12-04 12:01_ _发表于陕西_ 

**点击上方蓝字 关注星标不迷路**

Focus Star

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s2Rh43I6yVIexkTl2gWNNXDbytreXZCLKCREZmGtpbp4/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzQofTmqxhbiabNmdCQZbjzplGjhT5GUIf5Ea09Rb9YaaaQypzX7gG6PA/640?wx_fmt=png)

本文首发于PKMer网站，信息可能已经过时，点击文末左下角 **阅读原文** 获取最新信息

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,soNtwZDGiJ77o56PWVPfJf0uKTcoFSr3xfunzinJ7w7k/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfPnXZnFrD8v9q5Td2H7ib8WTOjYZvZfDniaRP5qGKHYbXrLib5yqHFB4yzarxRibJYqBywUAvD2Nz9pag/640?wx_fmt=png&from=appmsg)

搜索是一个十分强大的功能，但同时它也可以使你产生困惑。在大多数情况下，你只需要简单地输入想查找的东西即可完成搜索。但为了提升搜索的精度与效率，你还需要了解更多技巧。

## 基础使用

### 开始搜索

你可以通过快捷键 `Ctrl/Cmd-Shift-F` 来唤起搜索（这个快捷键可以修改）。当搜索功能被唤起时，焦点会被放置在搜索栏中，因此你可以立刻输入关键词进行搜索。

### 搜索选中的文本

当你选中某段文本后再唤起搜索功能时，Obsidian 会自动为你在库中搜索这段文本。

## 搜索历史

Obsidian 会记录你最近的搜索历史。当你搜索栏为空时，搜索历史会自动浮现。你可以点击任何一条历史记录以重新运行该搜索。如果想清空历史记录，点击“X”按钮即可。

## 搜索设置

在搜索时，你可以决定是否开启这些选项：

* `区分大小写` 可以将搜索更改为大小写敏感模式，但其会被 `match-case:` 和 `ignore-case:` 语法覆盖。
* `说明搜索含义` 将会说明当前检索式的搜索范围。
* `折叠搜索结果` 将会隐藏所有搜索结果的具体内容，只显示笔记名称。如果你只想隐藏或展开某条结果的内容，点击该结果左边的三角符号即可。
* `显示上下文` 将在展开搜索结果的前提下，显示搜索结果中的更多内容。
* `排序` 则允许你更改搜索结果的排列顺序，这和 \[\[文件列表\]\] 中的排序一样。

## 复制搜索结果

如果想快速地将搜索结果导出成列表，则可以使用 `复制搜索结果` 这一功能。

这个功能允许你对导出的列表进行个性化设置，比如是否添加文件路径，使用 Wiki 风格链接还是 Markdown 风格链接，使用哪种列表符号等等。

## 嵌入搜索结果

你可以将搜索结果嵌入到笔记中。比如：

![](https://proxy-prod.omnivore-image-cache.app/0x0,sbjU3IJ3WBsKNGAJjEygbA9q30UysQf0MpP52cJx-bag/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvfHjE7sPc2ATURhto8cWA7iaVbVSCA0O6v7h6IgXCcoA5cibbX1D0lBkqmUiasKeWs97HcRaficwAiciax/640?wx_fmt=svg&from=appmsg)```` ```queryembed OR search``` ````

然后，你就可以在预览模式下看到 `embed OR search` 的搜索结果被嵌入到当前笔记中。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sbjU3IJ3WBsKNGAJjEygbA9q30UysQf0MpP52cJx-bag/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvfHjE7sPc2ATURhto8cWA7iaVbVSCA0O6v7h6IgXCcoA5cibbX1D0lBkqmUiasKeWs97HcRaficwAiciax/640?wx_fmt=svg&from=appmsg)```` ```queryembed OR search``` ````

需要注意的是，截止 2021/1/18，这并不能在 \[发布的网站\] 中使用。

## 搜索语法

### 基础语法

在设计检索式时，不要忘了 `说明搜索含义` 能够显示搜索的具体含义，这能在你测试检索式时帮上大忙。

* 使用空格分隔关键词。每个关键词都是被独立查找的。比如，检索式 `foo bar` 将搜索同时包含 `foo` 和 `bar` 的笔记。
* 使用双引号来搜索短语。短语中的空格将不再有分隔关键词的作用，因此你可以搜索那些带有空格的语句。比如，`"foo bar"` 将搜索包含 `foo bar` 这一短语的笔记。
* 可以使用逻辑运算符。`OR` 表示或者关系，即文档应该包含以下关键词之一；`-` 表示非关系，即文档不要包含以下关键词；空格表示与关系，即文档应该同时包含以下关键词。比如，`foo OR bar` 会返回包含 `foo` 或包含 `bar` 的笔记。`foo -bar` 将会返回包含 `foo` 但不包含 `bar` 的笔记。
* 可以使用括号来设置逻辑运算顺序。比如 `(a OR b) (c OR d)`。这对于那些复杂的检索式非常有用，可以确保检索式的计算顺序是符合设计的。
* 可以使用正则表达式。正则表达式需要使用 `/` 包括起来，比如 `/[a-z]{3}/`。Obsidian 接受 JavaScript 风格的正则表达式，你可以在 这里 对其进行学习。

### 搜索符

Obsidian 还提供了一些特殊的搜索符。一些搜索符允许你进行嵌套查询，比如 `file:("to be" OR -"2B")`。

* `file:` 将使搜索对象变为文件名。比如，`file:"202007"` 则会搜索名称包含 `202007` 的文件。如果你使用 Zettelkasten 方法并使用时间戳来命名的话，这个搜索符能让你通过搜索文件名来找到某个时间段内记录的笔记。
* `path:` 将使搜索对象变为文件的绝对路径（基于库的根目录）。你也可以将它理解为搜索特定文件夹中的文件。比如 `path:"日记/2020-07"` 将返回路径中包含 `日记/2020-07` 的文件（`日记` 文件夹下子文件夹 `2020-07` 中的文件）。
* `content:` 将使搜索对象变为文件中的内容。比如 `content:"happy cat"`。
* `match-case:` 和 `ignore-case:` 将改变检索式的大小写敏感状态，即 `match-case:` 将使检索式大小写敏感，`ignore-case:` 将使检索式大小写不敏感。
* `tag:` 将检索对象变为标签，返回包含特定标签的文件。比如，`tag:#work` 将返回包含 #work 标签的笔记。使用标签搜索符搜索标签比直接在内容中检索 `#标签` 字符串要精确得多，因为标签搜索符会忽略代码块以及小标题中出现的、形似标签但不是标签的字符串。
* `line:(...)` 将使搜索对象从整个文档的内容变为行的内容。比如，当我们使用最普通的搜索搜索 `foo bar` 时，会返回那些第一行中有 `foo`，最后一行有 `bar` 的笔记。但是，如果使用 `line:(foo bar)`，则会返回只在同一行中同时包含 `foo` 和 `bar` 的笔记。
* `block:(...)` 将使搜索对象从整个文档的内容变为块的内容。正如 块链接与块引用 中所说的，块是被两个空行包围的元素。由于涉及块的操作需要进一步解析每个文件，因此这种搜索可能会比其他搜索慢。
* `section:(...)` 将使搜索对象从整个文档的内容变为章节的内容。所谓章节指的是两个小标题间的文本（包括开头的小标题）。
* `task:(...)` 将使搜索对象变为 任务列表。你可以使用 `task:""` 来在所有任务中检索相应任务。
* `task-todo:(...)` 将使搜索对象变为 任务列表 中的待办任务。使用 `task-todo:""` 来在未完成的任务中检索相应任务。
* `task-done:(...)` 将使搜索对象变为 任务列表 中的已完成任务。使用 `task-done:""` 来在已完成的任务中检索相应任务。

## 往期精彩

* [Obsidian中关于附件管理的思考](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484624&idx=1&sn=092774ab2e690f3598957944bd7bb108&chksm=c2adffb7f5da76a123a677e946aa6682a837df165756bbb33f0dbfc26a0fc83d27e7f4970b14&scene=21#wechat%5Fredirect)
* [Obsidian：自由度之王！探索丰富窗口模式和强大功能](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484404&idx=1&sn=ef7fe81278f5c14a354c2beab970dd03&chksm=c2adf893f5da71854ce2cadf8f09fdf1e42962b9c7c0379fcafcba0966f5d78ee913d6cbc198&scene=21#wechat%5Fredirect)
* [告别魔法！一劳永逸解决无法访问Obsidian社区插件的问题](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247483697&idx=1&sn=b70bd6a0f3cba0f2ec6dbd093a803f17&chksm=c2adfa56f5da7340e9be7ff4403eaca2b9317ef25bb35ea2b939316ce19b4b62a470aed9852a&scene=21#wechat%5Fredirect)
* [导出PDF功能再升级！再也不烦恼长文没有目录了，即刻体验新功能！](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484339&idx=1&sn=ccccec82e8ac5678b7638080198c83dd&chksm=c2adf8d4f5da71c2e811e339eaacc41ab7b13c0c2f4943126947b96e18acf660504b1dcbcd5e&scene=21#wechat%5Fredirect)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sAEHIqppGl9N5_7OpDzVbyWGw0fFBIPgaRGAKLITuK_Q/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzTGAnJaiafncsqKZcFKYGDTeR24ma4JRPcNBHzWktk0JYS5qhobebibhQ/640?wx_fmt=gif)

**你们点点“分享”，给我充点儿电吧\~**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sz31etAzuv6ToJvr3njpTJ48QO8cmNmqTZU44vxzZzPQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvbPicCxxs2nZzwHdGqWTEQOjHJdYdib8a3FzGSDIpYOKoc8UA9bxxxl0PHmuD4iav2iaAeQYGiaZqg0eW/640?wx_fmt=svg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sgVYnzKbyiwBccyzggFoxOOrCYROSItu5m3FHxSYOxzA/https://mmbiz.qpic.cn/sz_mmbiz_jpg/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4Jz3LMH9gVX0lO6ic3T9hmXTbmQ0sLic9JoxXMlMibow3OibZlbOAl65ibpAVw/640?wx_fmt=jpeg)

**公众号二维码**

**QQ群｜825255377**

**PKMer官网：https://pkmer.cn/**



