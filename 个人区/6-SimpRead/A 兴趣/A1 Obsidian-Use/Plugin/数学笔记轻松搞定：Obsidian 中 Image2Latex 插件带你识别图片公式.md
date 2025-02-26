---
id: 1cd8efb5-c971-4d74-be6d-911b637f2082
url: https://mp.weixin.qq.com/s/a0HvueqxN0NDmqstC4uAnA
title: |
  数学笔记轻松搞定：Obsidian 中 Image2Latex 插件带你识别图片公式
author: |
  Huajin
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/教程/实践
state: true
date: 2024-02-29 23:00:23
created: 2024-03-01T12:31
updated: 2024-04-13T12:49
---


# 数学笔记轻松搞定：Obsidian 中 Image2Latex 插件带你识别图片公式
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-a-0-hvueqx-n-0-n-dmqst-c-4-u-an-a-18df5615f22)
[Read Original](https://mp.weixin.qq.com/s/a0HvueqxN0NDmqstC4uAnA)

**·点击上方蓝字·关注星标不迷路**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sK003OSwGLRpYRLTC15Cdi-LtKt17rrGgF-ROTFagYvQ/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4cDyRiahrW6hm0jC722Q7tDXF8aNgjDQ8Qicg1I50zLu2GQMTGR7rqr0w/640?wx_fmt=png)

本文首发于PKMer网站，信息可能已经过时，点击文末左下角 **阅读原文** 获取最新信息

> ❝
> 
> 插件名片
> 
> * 插件名称：Image2LaTEX
> * 插件版本：1.0.4
> * 插件作者：Hugo Persson
> * 插件描述：识别剪切板中的图片中的数学公式并且转换为 latex
> * 插件项目地址：https://github.com/Hugo-Persson/obsidian-ocrlatex

* 配置简单，十分钟左右能配置完成
* 插件使用体验好，识别速度很快（十秒内识别成功）

> ❝
> 
> **注意**  
> 插件使用的是 simpletex 的 api，目前 (2024-01-30) 还可以免费使用。未来如果 simpletex 的 api 收费，可以使用另一款同样功能的插件 **latex-ocr**

## 效果演示

多行公式

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,ssSL_8dy9OiDQtAhBaHTCBqaxWNXyo09ylI1HabXJZoo/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMVueQVyN3mPkImMI8bHATfFdD8ghUZ8HHXXEs4ribJJXf8eUSwmE4qQQdxYPNvKyibuoiaDLrv3YHmA/640?wx_fmt=png&from=appmsg)

矩阵识别

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,suDULj4NHjtj2YAjBA7tV48n4lC3LC2ORbmWFKH8KWQI/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMVueQVyN3mPkImMI8bHATfqUxkHyNpzvWes2hziaGRNSgJOsLCaNAqpveibRG4U2GO9rKicdMyseybg/640?wx_fmt=png&from=appmsg)

手写识别

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sfUMxT0aUaZ1pJDva4eexiK30B6RfgPGrWF5lj69tr1g/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMVueQVyN3mPkImMI8bHATfzojPBicrc3syoeRN0dv3niccqq1u9jsCv2quvze0DIVQsXQCRl0pRIJQ/640?wx_fmt=png&from=appmsg)

## 配置

该插件实际上是调用了 simpletex 进行的公式识别，因此需要联网使用。并且在使用之前，需要进行一些简单配置

* 在 https://simpletex.cn/ 中创建一个个人账户
* 点击上方的 API 接口 https://simpletex.cn/api

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,smYpTF4d5EqbW7ul6uKYJtKGJ2tvWeUH81019zaI9ZeY/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMVueQVyN3mPkImMI8bHATfiaeDuh1JRspcL8EWakwr0bibu7A9EibK9tKZphHVBgUZOlduLtPsJnqSA/640?wx_fmt=png&from=appmsg)

点击按钮：前往 API 仪表板

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s91MY2PpJ5zjjHg8Vxph4-izHCf0TgFBqGJsOZlnajtk/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMVueQVyN3mPkImMI8bHATfkxqfsd3jPWvGCkfwic3rs6GtoMnVUVqscxPWOG5DkbD2SAT0L1an2pw/640?wx_fmt=png&from=appmsg)

点击：用户授权令牌创建一个 token，复制 token

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sL-dK2Sk5gU8t29UXoefF70gRmnEMBjtDFMu_xYrNkek/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMVueQVyN3mPkImMI8bHATfSfN3q3MxqOyL1nM5BXvf5ibzPMH9sbH4WdR6zKh5lNPJBSLnGXALlqQ/640?wx_fmt=png&from=appmsg)

粘贴 token 到插件的设置中，配置完成

## 使用方法

* 插件是识别剪切板中的图片，因此需要先复制一张想要识别有公式的图片
* 光标放到笔记中想要插入公式的地方，打开命令面板（快捷键ctrl+p）
* 搜索命令Image2laTEX: Generate latex from last image to clipboard
* 使用该命令，正文中出现Loading latex...字样
* 等待几秒后公式就会自动插入笔记

期待你的

分享

点赞

在看

**END**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sOSJkwTDB6QM5zpu9wPW8mrvx5fdbTiMN9LgMbGKRl-Q/https://mmbiz.qpic.cn/sz_mmbiz_jpg/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4Vjq9JG6zBibQZc5VZHnYwictvNicHDhGHOerLGqRmbArmUwNBNX9BpyXg/640?wx_fmt=jpeg)

**QQ群｜825255377**

**PKMer官网：https://pkmer.cn/**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s1iMGeiG2FwNcupUadi6qJINI8pLlO1bJAZVy-2NtIC0/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfPUicgQMTTfcxt7dFrntibCvHjLN4gygNBJUjgKsBExWv4xGJlhusgqyK4TIpeqApUB2d2KtJ6RwFhg/640?wx_fmt=gif&from=appmsg)点击阅读原文查看更多


