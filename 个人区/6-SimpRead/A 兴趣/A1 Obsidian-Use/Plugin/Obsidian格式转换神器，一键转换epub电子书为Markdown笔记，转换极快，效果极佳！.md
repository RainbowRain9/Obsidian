---
id: f1c15daa-f310-4063-bdd6-4f174ece07e0
url: https://mp.weixin.qq.com/s/NgzDgFETxZGK09MEXC5n5A
title: |
  Obsidian格式转换神器，一键转换epub电子书为Markdown笔记，转换极快，效果极佳！
author: |
  维客笔记
dtype: 插件
state: true
date: 2023-12-03 13:14:22
tags:
  - 400兴趣类/Obsidian/Plugin/同步
---


# Obsidian格式转换神器，一键转换epub电子书为Markdown笔记，转换极快，效果极佳！
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-ngz-dg-fe-tx-zgk-09-mexc-5-n-5-a-18c2e1941dd)
[Read Original](https://mp.weixin.qq.com/s/NgzDgFETxZGK09MEXC5n5A)

原创 维客笔记  维客笔记 _2023-12-02 17:55_ _发表于湖北_ 

大家好，我是来自1037号森林的维客！

## 写在前面 

先聊两句

之前是谁希望将电子书籍变成markdown格式，然后导入obsidian中去，借助markdown纯文本格式和ob的双链，打造自己的wiki知识库。

现在，我终于探索到了一个超级简单的方案，动动手指就行。

另外，希望ob官方赶紧收了ta，再丰富一下importer插件。

> 什么？你竟然不知道importer插件？！😲请看这篇文章📌[**万物皆可入Obsidian：打破笔记软件边界，探索无限可能！Notion，Apple Notes，OneNote...**](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzg5Njk3MDUyMQ==&mid=2247488857&idx=1&sn=0c0abbef2ec6f53ca81f35b1743be74b&chksm=c079af2ff70e2639be7a9d4ebf3b493303e345d2b9641e9cb51ee7af89216b33162a7bab18ee&scene=21#wechat%5Fredirect)

好了，进入正题😋

## 效果预览 

老规矩，先瞅一眼效果，觉得不错，再继续往下看！

就以<<风格的感觉 21世纪写作指南>>这本书为例吧，用阅读软件打开这本epub格式的书籍是下面这个样子的：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sfyTYqTJMmjdwUYMBwhb5NWt8oezIzRaAg9B4HeIme9U/https://mmbiz.qpic.cn/sz_mmbiz_png/h0UtZibCfO5mmXf5h7PkoToxYL8eztWZslTLkez4B7QChNZ5v95KI3a86pSCBCvYuRpAyQ0sicV8lZR9NpPib0NOA/640?wx_fmt=png&from=appmsg)

导入ob之后，自动转换为markdown格式：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s4N-9ClFmGHjGSHeW6NOs3QpG4QYeTHnjvInFdEaDQlo/https://mmbiz.qpic.cn/sz_mmbiz_png/h0UtZibCfO5mmXf5h7PkoToxYL8eztWZs6zhCFKWmiaYTQOVTMKyk6lOAdQc0jXKt0WdKtepoWTkQU604eCpAuRw/640?wx_fmt=png&from=appmsg)

书中的图片的位置都不会变。

效果极佳！

## Epub to md转换神器 

## 简介

插件名为Epub Importer，已上架obsidian插件商店，开发者是aoout.

它的功能就一个：将.epub格式的文件转换为md格式并导入到你的obsdian库中，整个过程飞快，无需等待。

> 插件可在文末获取哈！

## 使用方法

#### 01 安装插件并启用

插件可在文末获取哈！

#### 02 选项配置

为了更方便地导入书籍，我建议大家还是简单配置一下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s8ZSw9iL2bZa-emiR-sNU95Q4CJZsdEHiTLpCkgtG9II/https://mmbiz.qpic.cn/sz_mmbiz_png/h0UtZibCfO5mmXf5h7PkoToxYL8eztWZsIPRFDbicLsADmloQokWJcuzo1ql2hSLBVzvWn5Uc0BJ5cG0vj7at0uQ/640?wx_fmt=png&from=appmsg)

> * Library: 就是你要导入的epub格式的书籍存储在电脑上的哪个文件夹中，将这个文件夹的路径粘贴进来就可以了
> * save path：导入ob之后，你希望转换后的md格式书籍存储在ob的哪个文件夹中
> * assets path:这个是转换后的书籍中图片存储的位置
> * properties template：这个是属性模板，就是你希望转换后的书籍里包含哪些元信息，目前仅支持下面几个
> 
>>> * {{bookName}}
>>> * {{title}}
>>> * {{author}}
>>> * {{publisher}}
>>> * {{language}} 其他几项随意吧

#### 03 导入

在选项配置好之后，就可以来导入书籍了，很简单，`ctrl+p`调出命令面板，输入关键字epub

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,swspBTpBo0ZSDJfohwC1M2RiUk105zOSj8rAm5k864gs/https://mmbiz.qpic.cn/sz_mmbiz_png/h0UtZibCfO5mmXf5h7PkoToxYL8eztWZsnMXnak1bVlr91rrhxyku9aItucms0TpwwPS3bc5dicPGSzbvZ7ksorw/640?wx_fmt=png&from=appmsg)

然后，就自动弹出前面选项里定义的library文件夹

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sgpglRz1ym1cp8UhLyEJZ35TN0yxZIo1u8JsSEenaVn0/https://mmbiz.qpic.cn/sz_mmbiz_png/h0UtZibCfO5mmXf5h7PkoToxYL8eztWZszohHKR4rUu0HKSsv6hbZsrRU37pvW3HBqibVETbt8icqYhrAutWWN69A/640?wx_fmt=png&from=appmsg)

选择一本即可导入并转换。

整个转换过程极快！

## 注意事项

如果你的epub格式书籍是图片版或者扫描版的，则不可转换，这可不是ocr识别。

## 写在最后 

目前只能搞定epub，对于pdf还不行（将pdf转成epub的工具还少吗？！如果你还不知道，请给我一个赞👍，我安排起来）

欢迎在下面留言交流，分享更佳的解决方案，一起探索解决问题的极简方式！

\---

插件获取方式：

1、帮忙顺手**在看**或者**点赞**一下这篇文章，十分感谢！

---

欢迎关注维客笔记，一起探索解决问题的极简方式！

十分感谢**点赞、在看&赞赏**我的小伙伴们，你们都是我前行的动力!

**A better you, A bigger world！**



