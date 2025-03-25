---
id: eaa4bffd-b652-4f92-a2b9-8de472737417
url: https://mp.weixin.qq.com/s/Z9hw1Ezp15N3O8BUxZ8yaA
title: |
  Obsidian最强插件Dataview，基础入门讲解
author: |
  拉登Dony
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/dataview
banner: https://source.unsplash.com/900x1600/?
state: true
date: 2024-04-16 15:02:02
created: 2024-04-16T16:48
updated: 2025-03-20T15:49
---


# Obsidian最强插件Dataview，基础入门讲解
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-z-9-hw-1-ezp-15-n-3-o-8-b-ux-z-8-ya-a-18ee5b65c06)
[Read Original](https://mp.weixin.qq.com/s/Z9hw1Ezp15N3O8BUxZ8yaA)

![cover_image](https://proxy-prod.omnivore-image-cache.app/0x0,sklFtN9Qb7iEhjuqVDAiwZA1li77BJbtkjSBI7c9gMYw/https://mmbiz.qpic.cn/sz_mmbiz_jpg/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOicYZ7AgMKMXqKmS11P92y0Aw1IK2JINOoSh2fHYOHPF5NGD8wsUhN3Q/0?wx_fmt=jpeg) 

原创 拉登Dony  拉小登 _2024-04-01 13:28_ _山东_ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWqezcvnDTFt9lW_HHwV5dcSfuzk5fpaw7gC5MLnJso4/https://mmbiz.qpic.cn/sz_mmbiz_png/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfO8PZnBAuAuc2zh94nmS5JE3jjE5jYCcjWOVaReCTvb466Sqib1naaDcg/640?wx_fmt=png&from=appmsg)

> **今日目标：**
> 
> 学习Dataview用法

Obsidian系列文章目录：

* [第1天，从零开始学习Obsidian](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649687928&idx=1&sn=6c92283a49cd9d41e0d4575b63ce24e5&chksm=870ff96fb0787079742a21b3c431810393376eee693a33d502b8433dabdcd44218f9c0ea194a&token=1071217089&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第2天，Obsidian从认识界面开始！](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649687928&idx=1&sn=6c92283a49cd9d41e0d4575b63ce24e5&chksm=870ff96fb0787079742a21b3c431810393376eee693a33d502b8433dabdcd44218f9c0ea194a&token=1071217089&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第3天，Obsidian笔记分类技巧](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649687952&idx=1&sn=c670fcaa33f0ec9df210cd7ebec7c2e4&chksm=870ff987b07870914c4d4e60b53b3dcd7e6a9e2f38b179d0c724aabf83de25f423f68692276b&token=1071217089&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第4天，Obsidian标签管理](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688018&idx=1&sn=b62d82792a66966d020ae739f34fd0aa&chksm=870ff9c5b07870d36d9e25e4fefd82c35421667261950d81d23e1b1c6349ca18c864c3b85843&token=519661445&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第5天，Obsidian插件自学指南1-编辑器篇](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688058&idx=1&sn=403eb17b45c9e777cf815c99639e9ff8&chksm=870ff9edb07870fb1dfc97c210535a1745b08367bc79c480ec40e567864cade8a8f144ff3ac3&token=675511899&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第6天，Obsidian插件自学指南2-媒体篇](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688437&idx=1&sn=1e41292bb97249392bf1e3b061387884&chksm=870ff762b0787e74683ffbe74afc9856ccd8db6d26d30b22e40a69aea21376cadaf4fccd8ce3&scene=21#wechat%5Fredirect)
* [第7天，Obsidian插件自学指南3-一键提升笔记颜值！](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688526&idx=1&sn=6233a49037c360b910a13cbcaaef68c9&chksm=870ff7d9b0787ecf980bd5e4ef0b9fc05fd0a85e1f024049d2930ff358a0b6964bb962591a9a&token=2132431450&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第8天，Obsidian一键自动创建笔记，Buttons！](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688728&idx=1&sn=b169c9dbd75f1628a53d1450f8c4f3cd&chksm=870ff48fb0787d992799a5a908cdcbd6fdbbc3625d780ec2a65ffc538f5d5fa03996e74c535c&scene=21#wechat%5Fredirect)
* [第9天，Obsidian一键创建日报，模版插件](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688758&idx=1&sn=6816292f65f706af53f6c6bad71e5faf&chksm=870ff4a1b0787db7739bbc59199597837d5289bbbb4cc87f297f7710811c3f28dd1d054232c4&scene=21#wechat%5Fredirect)
* [第10天，Obsidian效率翻倍的模版插件，Templater](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688792&idx=1&sn=fb1e815845abe19205cf89b6e64824fe&chksm=870ff4cfb0787dd924c15b58acd6b168c2241c1f3326ea8a32ee0da00af58264da470d1c86f5&scene=21#wechat%5Fredirect)
* [第11天，Obsidian高效编辑笔记第3弹，Quick Add插件](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688840&idx=1&sn=28d24ad8ba7d662146ca98cf6014b507&chksm=870ff51fb0787c097bdbead5a3c687259fded44d0e11a007cbf8ad0592286d040cdca3ee26e0&scene=21#wechat%5Fredirect)
* [第12天，Obsidian日报与周报管理，Calendar插件](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649688982&idx=1&sn=ed7f68ea3f43a923c5c085f28a6d5485&chksm=870ff581b0787c975d1c852659632d98f2f318106a0573f97963c59df1f1e4036dc4fbc33e20&token=1721513289&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第13天，Obsidian日程管理插件，Day planner使用全攻略！](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649689102&idx=1&sn=2d49a655ceefadd0ee0736a741a341cc&chksm=870ff219b0787b0f81a5e8b7f335bde3cba7291d1d11a4f3f2ba8cf18c4bde570c684a07944f&token=472898756&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [第14天，Obsidian插件Tasks：你的时间管理利器](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649689128&idx=1&sn=5bb3efc06e48fc961406b89cd77ab009&chksm=870ff23fb0787b29dd5c2885ae3b2987692388bc2c8f791327253baf8e45c58cc09c2aea71f7&scene=21#wechat%5Fredirect)
* [第15天，Obsidian任务可视化管理插件，Kanban](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649689220&idx=1&sn=524720038bd574c520705b5386c2d6c5&chksm=870ff293b0787b85836fc86da1463b6a004fe70ae33769c6b6889f925fc964b6d896ca5f69c7&scene=21#wechat%5Fredirect)
* [第16天，Obsidian插件，如何利用Recent Files提升笔记使用效率](https://mp.weixin.qq.com/s?%5F%5Fbiz=MzA3MzA5MTk2MA==&mid=2649689314&idx=1&sn=4cd7cdfefd24c6c9b68c5aff260934e2&chksm=870ff2f5b0787be31db90c899ed96fc53cae593f8dc80c8985a581d66c2b6af99d770ba2b9f1&scene=21#wechat%5Fredirect)

欢迎收藏、订阅**《10个必会的Obsidian技巧》**系列教程，今天是学习OB的第17天。

---

之前我们学习Templater插件时，我编写了一段代码，制作了一个Templater模版，来快速导出当前文件夹中的笔记清单。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sY4BLLnbDBBKG7GyAnSe7Gu7wwaojsTSggvSErWxzvNs/https://mmbiz.qpic.cn/sz_mmbiz_gif/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOvDIE7wYdoZTNiciacVVXiaGIOteoSEXNsiceIG9TQ8pJHBE8bO81I7DWzA/640?wx_fmt=gif&from=appmsg)

当时，我还特意学习了JS代码，折腾了一整天。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,srDH31RtDtdEacYM9JTeE5V5tctU6G11HZRMWDZ8h2Dk/https://mmbiz.qpic.cn/sz_mmbiz_png/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOjIMAxdQaZpQ6uhWPibPUcFfYhAKqA6h2Y80YRUq4HZgoZCUuticPmqGQ/640?wx_fmt=png&from=appmsg)

今天，我用上了Dataview插件，感觉自己之前就像一个傻瓜一样，还自己写代码。

同样的需求在Dataview中只需要一两句话，就可以轻松的把文件名称导出成表格、清单、日历等形式。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sKBwxYCLiC-lYFUPkqD8-oLQWfotqLpSPxmGqrlbHEgA/https://mmbiz.qpic.cn/sz_mmbiz_png/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOfYicDHammC3qtIP87JrcAiaOZYPxrtQt1JYPvjx8ZgNplMOuq2oibuUzw/640?wx_fmt=png&from=appmsg)

还可以根据条件来筛选指定的笔记，怎么说呢？**如果你想把笔记导出到表格，实现类似Excel的筛选、排序等操作，那一定不能错过Dataview。**

接下来的几篇文章，会陆续学习Dataview的各种使用方法。今天，我们先来了解Dataview的入门使用。

## 下载安装

首先，在第三方插件市场下载并安装Dataview插件。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sapB3D6VePTxDh1dUf0aSk-gzQzuGThjrxxgguxaR_WQ/https://mmbiz.qpic.cn/sz_mmbiz_png/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOTd7yy6ggafqZ1LCHVD1Rhb4WtkSJb402wfczjHYxLj6GhsPK9tr0ibw/640?wx_fmt=png&from=appmsg)

如果无法访问插件市场，可以通过我分享的链接下来。

* 链接：https://pan.quark.cn/s/baff6407cc0a

和以往的插件不同，Dataview安装完成后，界面上不会有任何变化，我们无法通过鼠标操作来实现笔记导出，而是在笔记中编写查询语句，如下所示：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sx2KU9550AEGHfDvPNHYbQ2bwjywFSDZejkTgxskOBFU/https://mmbiz.qpic.cn/sz_mmbiz_png/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOoprWmNj2KSqE8ed8icafqiadbL1JHjau3kt3TKukS2586pQy2VN3hQ8A/640?wx_fmt=png&from=appmsg)

Dataview的查询语句整体很像SQL语句（一种数据库查询语言），内容大致包括：

1. 查询视图。List、Table、Task、Calendar
2. 查询条件。WHERE：基于笔记内部的信息、元数据字段过滤笔记。
3. 排序方式。SORT：根据字段和方向对您的结果进行排序。
4. 分类汇总。GROUP BY：将多个结果捆绑成一个结果行每组。
5. 指定数量。LIMIT：指定查询结果要返回的记录数。
6. 拆分填充。FLATTEN：基于字段或计算将一个结果拆分为多个结果。

看上去很复杂，不用担心，拉小登老师最擅长的就是化繁为简，用简单的类比、案例，讲解复杂的知识。

今天，我们现在来学习查询视图。

## 查询视图

## List清单视图

如果想要把Obsidian仓库中所有的笔记名称，都导出到笔记中，可以使用下面的代码：

![](https://proxy-prod.omnivore-image-cache.app/0x0,sSylXiMe1p8jGQ96Sa8lKD5OqlQdPNVsIpURxRykkT1w/https://mmbiz.qpic.cn/mmbiz_svg/574VdhMFwaGrRwzbQkdER7TMuzbYcvuJ7OChNAggjoo68GLfhBOBMd9NfNwMYG35Qd3TcIicIjSFtWIJkhzAm9DzH64eTpGwl/640?wx_fmt=svg&from=appmsg)```` ```dataview
list
```
 ````

Dataview插件就把所有的笔记导入到当前笔记，点击笔记名称，可以直接跳转到对对应笔记。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,si29wK9fevK29Z5Bybumz4Po6igbeD06xvNnACYjZGRM/https://mmbiz.qpic.cn/sz_mmbiz_gif/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOkAHfeasYayej94GQ5LkkZjqMHSzEtibHojpKoAWV1VNicuRW6OOqLz0g/640?wx_fmt=gif&from=appmsg)

## Table表格视图

List只有一列，显示的信息非常的少，如果想要获取更多笔记信息，比如笔记创建时间、文件夹，可以使用Table视图。

在笔记中输入下面的代码，可以得到笔记的名称清单。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sSylXiMe1p8jGQ96Sa8lKD5OqlQdPNVsIpURxRykkT1w/https://mmbiz.qpic.cn/mmbiz_svg/574VdhMFwaGrRwzbQkdER7TMuzbYcvuJ7OChNAggjoo68GLfhBOBMd9NfNwMYG35Qd3TcIicIjSFtWIJkhzAm9DzH64eTpGwl/640?wx_fmt=svg&from=appmsg)```` ```dataview
table
```
 ````

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,smooIi_uqtOm9wM4obo8If5YMZP1NszPpVBAK6Fm5Ip4/https://mmbiz.qpic.cn/sz_mmbiz_gif/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOVQj9Gexywd0LXkia4nrfmOnTicqmehKufkJbbHPWsww4l1EwLOiafVFHQ/640?wx_fmt=gif&from=appmsg)

表格中目前只有一列笔记名称，和list效果类似。如果需要添加更多信息，如文件夹名称、创建日期等，只需在后面用逗号间隔添加相应字段。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sSylXiMe1p8jGQ96Sa8lKD5OqlQdPNVsIpURxRykkT1w/https://mmbiz.qpic.cn/mmbiz_svg/574VdhMFwaGrRwzbQkdER7TMuzbYcvuJ7OChNAggjoo68GLfhBOBMd9NfNwMYG35Qd3TcIicIjSFtWIJkhzAm9DzH64eTpGwl/640?wx_fmt=svg&from=appmsg)```` ```dataview
table file.folder, file.cday
```
 ````

这样，我们就能快速输出一个包含文件路径和创建日期的表格，并能通过链接快速跳转到笔记。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s2LiTBn2qJQ2XU_XC2WFFwBNMbqe5Et43EUu7oCIVfX4/https://mmbiz.qpic.cn/sz_mmbiz_gif/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOWghaATibHBM8Bgyx9AIZXOfa8KUu3MKu2euFEY0SoWCpUPdyXib9CCiaA/640?wx_fmt=gif&from=appmsg)

更多文件的属性字段，已经有大佬帮我们整理好了，根据需求在table中添加字段名称就可以了。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sjuVxhQQEO7q2Wb77gyLCvU3tERfhZarn95y72p9CTiI/https://mmbiz.qpic.cn/sz_mmbiz_png/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOORvuG29gWGlBnmLBWRvA4Ns2tlkwKb56RNML8eYRZhop9alkzW3wCA/640?wx_fmt=png&from=appmsg)

_图片来自小红书：小白薯爱学习_

## Tasks任务视图

Dataview的强大之处在于，除了能够列出文件外，还能获取笔记中创建的所有待办事项清单。

输入\`tasks代码，就可以一键获取所有待办事项。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sSylXiMe1p8jGQ96Sa8lKD5OqlQdPNVsIpURxRykkT1w/https://mmbiz.qpic.cn/mmbiz_svg/574VdhMFwaGrRwzbQkdER7TMuzbYcvuJ7OChNAggjoo68GLfhBOBMd9NfNwMYG35Qd3TcIicIjSFtWIJkhzAm9DzH64eTpGwl/640?wx_fmt=svg&from=appmsg)```` ```dataview
task
```
 ````

你可以直接在查询结果中勾选待办事项进行标记完成，或点击链接进入原文档编辑。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sDQkjJHPPvx2E1fD3ekBYT4igJJhmVXzxRO3idToH2L8/https://mmbiz.qpic.cn/sz_mmbiz_gif/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfO3mTTILH0a21ibX46SSoJ8QQUF8iaWRmYCMRLx5l0Kd61u4rzSnjVRmPA/640?wx_fmt=gif&from=appmsg)

我们可以根据条件查询，如未完成的待办事项，或者未完成的待办事项等等，这将在后续文章中展开。

## Calendar日历视图

Calendar日历视图让我印象最深刻。在Excel表格中创建日历表通常很复杂，在Dataview中，只需将查询类型改为`calendar`，就可以按日期输出一个直观的表格。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sSylXiMe1p8jGQ96Sa8lKD5OqlQdPNVsIpURxRykkT1w/https://mmbiz.qpic.cn/mmbiz_svg/574VdhMFwaGrRwzbQkdER7TMuzbYcvuJ7OChNAggjoo68GLfhBOBMd9NfNwMYG35Qd3TcIicIjSFtWIJkhzAm9DzH64eTpGwl/640?wx_fmt=svg&from=appmsg)```` ```dataview
calendar file.cday
```
 ````

上面的代码表示Dataview按照笔记创建日期，输出一个日历表。表格中的点代表特定日期创建的笔记数量，鼠标悬停可以预览笔记，点击则直接跳转到笔记中。这样回顾过去一周或一个月的笔记输出情况非常方便。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sUmWMDmFDsaQ1hax_1mmHiZVYsXsZel-RmuKLeiqEy_4/https://mmbiz.qpic.cn/sz_mmbiz_gif/VpIHXp1jib5RzHxkslD9SIwSZxaG0IlfOugo7monGHZfNn5OdgKGPsRxHC2fjeVgiaBOnVA2HHngckibMaKATob2A/640?wx_fmt=gif&from=appmsg)

这个效果，真是让人爱不释手啊。

> 更多Dataview的语法，可以参考官网帮助文档，先自己预习一下。
> 
> https://blacksmithgu.github.io/obsidian-dataview

## 总结

Dataview的查询语句叫做DQL（Data query language），语法上和SQL语句非常像。

我们可以添加查询条件，选择查询来源，设置排序顺序等。这些涉及到一些复杂的查询语法，我们将在后面的文章中详细展开。

今天先介绍到这里，记得关注、点赞和转发，一起使用Obsidian来管理我们的知识，成为知识管理的专家。

> 我是拉小登，一个爱梳头的Excel老师

如果这篇文章对你有帮助，请帮忙**「点赞」「在看」「转发」**。

这对我很重要，能给拉小登更多动力，持续分享优质的内容。



