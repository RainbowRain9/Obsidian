---
id: 3acd7f75-f705-459d-9e70-3b8f76a9dd8d
url: https://mp.weixin.qq.com/s/4URw7BNq1nJG6NI3WbChnw
title: |
  打脸了！这才是Obsidian中侧边注释最优雅的方案
author: |
  Huajin
source: 
dtype: 
tags: 
state: false
date: 2024-01-30 03:16:49
---


# 打脸了！这才是Obsidian中侧边注释最优雅的方案
#Omnivore

[Read on Omnivore](https://omnivore.app/me/obsidian-18d56a71f8e)
[Read Original](https://mp.weixin.qq.com/s/4URw7BNq1nJG6NI3WbChnw)

原创  Huajin  PKMer 知识社区 _2024-01-29 18:00_ _发表于陕西_ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWB7bCVTTIWKrlZdnX7Jyil7Y5MZ6CVdjWLzq622Tx3U/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUhaurdlVFwyiaqtVTZfcMvSA3wazqu093HttUeEoHOdlTAcHLujiclcUE3UiaTeWCX4JfmzZBF0Df4/640?wx_fmt=svg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sMu_2pSXPShKJlMnmhOnpftjlhAYhckY0UesTTgV0xGI/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUhaurdlVFwy3FKEjddSVsrqY1PdQWF8JN7VYt9dXUI9Wxo3vboL5h0vlgsq3u6DzUBqZUb1hvhI/640?wx_fmt=svg)

点击上方蓝字，关注星标不迷路

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sK003OSwGLRpYRLTC15Cdi-LtKt17rrGgF-ROTFagYvQ/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4cDyRiahrW6hm0jC722Q7tDXF8aNgjDQ8Qicg1I50zLu2GQMTGR7rqr0w/640?wx_fmt=png)

本文首发于PKMer网站，信息可能已经过时，点击文末左下角 **阅读原文** 获取最新信息

## Obsidian 样式 - 用 Callout 实现的边注（注释）

之前的推文中：[可能是在obsidian里最好的旁注方案，现在也能对markdown笔记做评论批注啦](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247485615&idx=1&sn=7ff7a0cc01bd0747f860a69aca0d2bbf&chksm=c2adf3c8f5da7adecf8154c514f257febfffbc9b8bb55b37137f097e78d529b1ff33e74c59f1&scene=21#wechat%5Fredirect)，提到利用html的`<details>`标签来进行注释，基本解决了注释的需求，但存在两个问题：第一是必须点击才能展开注释；第二是不支持 obsidian 的md语法格式，单纯以文本形式展出。

而今天介绍的新的方案，使用 obsidian 自带的 callout 语法，不污染笔记，且用法非常简单。看下图示例：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sy8c6E9buqz_jKXNMsHQLCEATyLANNOGXRKKgEg1I52M/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfNQMnB5dPP3foFvUzJwFFLkeicuKg0mrqu5fXJQmsxQuE7q4Yiap4y2G1JkmEQO3Tnx6UEUSc99icQbg/640?wx_fmt=png&from=appmsg)

> 内容修改自 discord 两位大佬分享的 css，使得实时模式可以显示，并适配多种主题。

## 使用方法

添加好 css 后，在正文中直接用边注的 callout 即可。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sJm-SygsBbxcEVAzKWnEcxpSosg1dF3Nlsv3YcTIb-L4/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJy4zxErNJPrFxr1krm0A2jeb3Rs52x8oH6tk4tohs7UsIib0fMNbCHTWxs8wk97TriaLLXgenJtvwiafx4dzBakJvA/640?wx_fmt=svg&from=appmsg)`> [!NOTE|aside-l] 右侧注释
> 注释内容
`

![](https://proxy-prod.omnivore-image-cache.app/0x0,sJm-SygsBbxcEVAzKWnEcxpSosg1dF3Nlsv3YcTIb-L4/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJy4zxErNJPrFxr1krm0A2jeb3Rs52x8oH6tk4tohs7UsIib0fMNbCHTWxs8wk97TriaLLXgenJtvwiafx4dzBakJvA/640?wx_fmt=svg&from=appmsg)`> [!NOTE|aside-l] 左侧注释
> 注释内容
`

![](https://proxy-prod.omnivore-image-cache.app/0x0,sJm-SygsBbxcEVAzKWnEcxpSosg1dF3Nlsv3YcTIb-L4/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJy4zxErNJPrFxr1krm0A2jeb3Rs52x8oH6tk4tohs7UsIib0fMNbCHTWxs8wk97TriaLLXgenJtvwiafx4dzBakJvA/640?wx_fmt=svg&from=appmsg)`> [!NOTE|aside-r]+ 默认展开的注释
> 注释内容
`

![](https://proxy-prod.omnivore-image-cache.app/0x0,sJm-SygsBbxcEVAzKWnEcxpSosg1dF3Nlsv3YcTIb-L4/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJy4zxErNJPrFxr1krm0A2jeb3Rs52x8oH6tk4tohs7UsIib0fMNbCHTWxs8wk97TriaLLXgenJtvwiafx4dzBakJvA/640?wx_fmt=svg&from=appmsg)`> [!NOTE|aside-r]- 默认折叠的注释
> 注释内容
`

## Style Settings

本 css 可以配合 style settings 插件使用，可以调整注释的样式

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sFTM0yZuSrFUhcpx6mXAT_CblWhIkWdZWqw-R74ePEks/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfNQMnB5dPP3foFvUzJwFFLkLLsmchqAuj47bbYO5nGFrfQ9MAG6C3gMLxrWJvIvGXM1mD7IAQ9BCQ/640?wx_fmt=png&from=appmsg)

## CSS 源码

> 点击文末左下角的 **阅读原文** 到网站上复制。

## 往期推荐

* [可能是在obsidian里最好的旁注方案，现在也能对markdown笔记做评论批注啦](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247485615&idx=1&sn=7ff7a0cc01bd0747f860a69aca0d2bbf&chksm=c2adf3c8f5da7adecf8154c514f257febfffbc9b8bb55b37137f097e78d529b1ff33e74c59f1&scene=21#wechat%5Fredirect)
* [开源稍后读剪藏的解决方案，一键将网页内容导入到Obsidian](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247485711&idx=1&sn=5c7d50140237de064e7fb45db6469a2e&chksm=c2adf268f5da7b7efa6ca56f4b00c75fcb0d6a6bfa7baa00c1767a9979ee2cab7773cfecf7c6&scene=21#wechat%5Fredirect)
* [Obsidian 插件：Obsidian Leaflet 用法之管理自己的旅行照片](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247485417&idx=1&sn=f7501ed5645d638c04c2234c79c869d9&chksm=c2adfc8ef5da75986fa1bae78a47ceeab5108a948bfbd475072640ff37db9966689ccfa21b3c&scene=21#wechat%5Fredirect)
* [全网最详细的zotlit模板指南，从zotero到obsidian，写论文从未如此丝滑](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247485191&idx=1&sn=a2927ad028cdbafc128c139d526fe4a8&chksm=c2adfc60f5da7576cc2ad8fc3b75404c0e8ae0c5d8b1cf1efd8c3711fe9db027bca2dd1c115c&scene=21#wechat%5Fredirect)

**期待你的分享、点赞、在看**

![](https://proxy-prod.omnivore-image-cache.app/0x0,sLbz75PZ9iO89IgrYUcxjRR57vnRYCyVesJkAtig4PT8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMCdkpoKibpmxFSwd5e7qfBwJRXdchVFTPcA0wbQVSycj3fLWrSuHpX5vYVgkndLU0dJ1wzHtDguwQ/640?wx_fmt=png)

**QQ群｜**825255377

**PKMer官网｜**https://pkmer.cn/

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s4ISSK1PuJR3nlbJjZ7NJQ5gDohDy9R4E2tEmSJlYfpM/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfPUicgQMTTfcxt7dFrntibCvHbC9iaamiboo70mRfCJaN0MmAUOkUqP3JEqZ4x94JN5ibB4xSzfFoI62TA/640?wx_fmt=gif&from=appmsg)

戳“阅读原文”一起来充电吧!

![](https://proxy-prod.omnivore-image-cache.app/0x0,sztHen2zKglbooc8jnRanh8F2QK9kejIH_eS7fuz0zAU/data:image/svg+xml,%3Csvg xmlns=\"http://www.w3.org/2000/svg\" width=\"24\" height=\"24\" viewBox=\"0 0 24 24\" fill=\"none\"%3E%0A%3Cpath d=\"M12.8974 15.5585L14.9719 13.484L16.2447 14.7568L12.3519 18.6497C12.1566 18.8449 11.84 18.8449 11.6448 18.6497L7.75195 14.7568L9.02475 13.484L11.0974 15.5567L11.1 4.99976L12.9 5.0002L12.8974 15.5585Z\" fill=\"black\" opacity=\"0.3\"/%3E%0A%3C/svg%3E) 继续滑动看下一个 



