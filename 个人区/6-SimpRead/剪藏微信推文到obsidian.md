---
description: 快速剪藏微信推文或网页内容到Obsidian
title: 剪藏微信推文到obsidian
url: https://mp.weixin.qq.com/s?__biz=MzI1OTYwMTE0MQ==&mid=2247485638&idx=1&sn=25c373b2d55b953fc3e895452fe61b83&chksm=ebdfc2907fb542cccb9a6c9a8ca7dd33ef2286cb79120a0f083d6d0bd2f910a1f94b29dbc1ac&mpshare=1&scene=1&srcid=0227MtPKKG3zWkVfNSKiQCFb&sharer_shareinfo=ee471a40a622afe3e9ab83f241d28fab&sharer_shareinfo_first=ee471a40a622afe3e9ab83f241d28fab#rd
author:
  - "[[吴卓满]]"
banner: https://mmbiz.qpic.cn/sz_mmbiz_jpg/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWW2sfCiczfo83jKxREPYRibjdAoacOIrLLdX8jiclEuXqBLUlUzoBPF1kbg/0?wx_fmt=jpeg
source: 微信公众平台
dtype: 微信
tags: 
state: false
created: 2025-02-27T15:10
updated: 2025-02-27T15:10
---

## 这是一篇obsidian笔记剪藏教程，

旨在利用**海上飞棚**大佬提供的笔记卡片微信号，轻松收藏微信推文或网页内容到自己的obsidian笔记中。

利用腾讯的云函数服务，基于容器镜像部署；

实现效果如下：

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWqLmf8GLr5V8ANFd79vibnib6sj1jEfibNpR6Jdmib4uSUshGWvCMicVBs6g/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWjOicdGDwPBAPV9SUnMArj7owvKQAHBy1DutvVfUALn2vicHrHicicCZKqw/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

## 部署成本

腾讯的云函数支持按量付费，不使用则不计费；

我们部署的是Web函数，计费项如下表：

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWE0TJEWz8d4RSRVwqdhjSc54TyMBLJRXBcTicjyRgf3BfVWS6iaI3XuZA/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

由于价格太低，我懒得估计了，

建议充值一块钱进去，让它慢慢扣费就可以了。

## 实现前提

- 微信上添加【笔记卡片】为好友；

> 笔记卡片是一个微信号，被部署为微信机器人；
> 
> 微信号是：note\_card；
> 
> 由**海上飞棚**大佬提供；

- Obsidian已完成同步设置；

> Obsidian的同步可以使用webdav或S3协议的对象存储；
> 
> 如果你不知道怎么设置Obsidian的同步，可以参考下面这一篇文章。

《[Obsidian同步方案](https://mp.weixin.qq.com/s?__biz=MzI1OTYwMTE0MQ==&mid=2247485592&idx=1&sn=f88eb0dcac6d6d0b947b2b887c2a07af&scene=21#wechat_redirect)》

## 流程图

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWBYQ4sarc8MpNTKnEbeSM4yiag88lZDzc5hHsP1bNGeDpktdOHELL58w/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

##   

- 【笔记卡片】这个微信号只是负责把微信推文的URL转发到我们构建的云函数服务器，与笔记数据没有关系，从而保证了笔记的隐私与安全；
- 我们部署的云函数服务端，需要具有云端数据写入能力（账密信息以环境变量方式传入）；
- 云函数服务端具有笔记读取的能力，但是代码里没有实现读取的逻辑，只开发了单方面写入的接口，也保证了笔记的隐私与安全；

## 项目地址：

- Github

https://github.com/zibuyu2015831/note\_card\_for\_obsidian

- Gitee

https://gitee.com/zibuyu2015831/note\_card\_for\_obsidian

（点击下面的【原文链接】，可以直接跳转）

## 如何部署

有两种部署方式：**代码部署**和**镜像部署**；

由于直接的代码部署容易出现环境依赖问题，笔者不推荐，

这里介绍使用腾讯的镜像仓库，进行镜像的自动构建和云函数部署。

下面是具体的部署步骤。

## 1\. 从 Github 或者 Gitee 平台 Fork 代码

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWCZGlicAqnQ5AvfF9qn9ELyHUoUicJtFpSH7RZSfvY2GQ5l4j4o2Slsicg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

github平台

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWrWb5l7ibA5DTqvcIh5neOVyvwIxsJxsUKXn2CTibwLOF2g2zW19q9LRQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

gitee平台

## 2\. 进入腾讯的容器镜像服务界面

腾讯的容器镜像服务，个人版是免费的。

> 官网是：https://console.cloud.tencent.com/tcr/?rid=1

- 新建仓库。

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWPIuTQaNaSYm9mXwNVaTPh9vcSBCymkH2lfhtnlBvUgxbIgXkibPNpVg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

新建镜像仓库

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWKibDQ4qS7HDvJiaqX6LDNmicxq11WHBT5OIjzqIjYMpwSoFcEO4bOkpiaQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

填写信息

## 3\. 在新建的仓库中，新建镜像构建规则

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWW3YvLydGF0Jr00rG0kE4nUBYShfBEo7r70ViciaaVSSJP6hKZSyLFIzqg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

新建镜像构建规则

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWW4ZyHania6ialSGT7myPB3iaUxicet6kBCDj4YTS1yhAsCmuzJiaMnf6OPibg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

选择代码来源

## 4\. 构建镜像

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWBXk0U8pWbDngXG8luaoH1YZFaXdHCRMh266ZyibYTAYCMCdYEhpiaicfQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

首次需要手动构建镜像

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWKuaB1XPbpNnnKIgxQvicg7eqqB3gIhNMIMSQL4QnEqH294ySicqSlLug/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

直接确定

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWOIBgn4WcSmibzA6kqd2ia0AXNktb3ib511lm2SwicDVtgd6gibmuLrTotKw/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

等待镜像构建完成

## 5\. 进入【函数服务】界面

腾讯的函数服务，新手有三个月的免费额度，而我们使用的功能，如果仅是自己用到话，花费很少，

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWW1gv4xJR16bBCwVibHPcY9855k6lpmPPvEld6su2eCdSBZvtJL8vPAiaQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

新建函数，可以选择自己所在区域

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWmyibozSsaEXrOaia6icuo9FcQhpuc8DRbtpsHRdibRH9yNNQD0c0CGy9TQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

使用容器镜像

## 6\. 选择镜像

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWvOWia0vibGfVbmHMKY69GMUiawDdl3ib2X00Vibjiaia65XuIv8jtDde3CZibQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

选择刚才构建的镜像

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWj2SQ1BiaOnECxcMQtC7z4DUXS7hKw3yu2nGsq0eV8aUodXyfLAy9kBw/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

直接确定

## 7\. 填写环境变量

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWUkUELPaOPr7jC34D0iao0AzUI2NW8JokbVQor7VtpcZgNzyTNwy9TIQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

根据ob都同步配置，填写所需鉴权信息

由于程序需要访问你的笔记，较为敏感；

所以关于鉴权之类的信息，都是通过环境变量的方式传入；

我使用坚果云（webdav协议）进行obsidian的笔记同步，

需要设置的环境变量如上图。

如果你使用其他的同步方案，可以参考下表。

| 参数名称 | 描述 | 是否可选 |
| --- | --- | --- |
| **storage\_type** | 存储类型，值为“qiniu”或“s3”或“webdav”，默认为“qiniu” | 可选 |
| token | 鉴权token，只有token输入正确的请求才会处理；这里不要传入 | 不填 |
| qiniu\_access\_key | 七牛云的access\_key | 可选 |
| qiniu\_secret\_key | 七牛云的secret\_key | 可选 |
| bucket\_name | 对象存储bucket的名称；七牛云和s3都需要传入 | 可选 |
| s3\_endpoint | s3对象存储的域名 | 可选 |
| s3\_region | s3对象存储的区域 | 可选 |
| s3\_access\_key | s3对象存储的密钥 | 可选 |
| s3\_secret\_key | s3对象存储的密钥 | 可选 |
| webdav\_url | WebDav对象存储的域名 | 可选 |
| webdav\_user | WebDav对象存储的用户名 | 可选 |
| webdav\_psw | WebDav对象存储的密钥 | 可选 |
| **save\_note\_path** | 笔记保存路径，必须传入 | 必填 |

## 8\. 其他设置项

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWTn6JVXicicFanptYSj7ziaVSrK6jia8ScVXibrAzgibT58B0QFspEO5OvNRQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

建议不使用日志记录

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWaRaagWz1cUcz0Sxqyh3xzlib4GPciafVJQufjjniamDKU51icXne6na4Vw/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

记得勾选公网访问

## 9\. 获取函数URL

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWicSN8h1CoibPmPZ8ctOQHZ9XSEPHaFeej1r1TjrQ6j5XFsK07DWTwvBA/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

等待函数创建，一般很快

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWbb0FmREyB9K3cu3RZtHVoNjPmvIzfhWrThKRSB8rBDGxrbicnKrPJKA/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

复制函数的访问URL

## 10\. 给笔记卡片设定webhook地址

由于代码中设置了`/webhook`的访问路径，因此复制的URL后面需要添加该路径；

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWqzib1ctfRMOexiaI3QnG2zUQ8kCseb0iaNsTo2IN0pR2XopoZdQbiaaAdQ/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

代码只有一个访问路径

```
你复制的URL/webhook
```
![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWCSEzMo1Dg2qgdbzQdFxD6KMUxvN57XiaZhSJajq0jmnJmoqhANyQYQg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

将拼接好的webhook配置到笔记卡片中

![图片](https://mmbiz.qpic.cn/sz_mmbiz_png/DMBDmIyNqvErq66ExGVwfNg9icGNXCQWWVzu5MPIWIoUFJluYnfXee6AQ1Cz7SRXibcdLJT2YwQveR1rMo7lI5Wg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

测试通过

最后挖个坑，

嗯，基于海上飞棚大佬的微信机器人，notion、思源、语雀这些笔记平台应该都可以用，

有需要可以留言，人多的话就搞一搞~

\---完---