---
id: ace039d0-be3f-4f94-80aa-47fd26a1ed3a
url: https://mp.weixin.qq.com/s/dJTEzR24RzQjaD-0OEk68Q
title: |
  快速创建Obsidian块引用，不再浪费时间等待！
author: |
  致九
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/Plugin
state: true
date: 2023-12-11 22:51:59
---


# 快速创建Obsidian块引用，不再浪费时间等待！
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-d-jt-ez-r-24-rz-qja-d-0-o-ek-68-q-18c595ceea6)
[Read Original](https://mp.weixin.qq.com/s/dJTEzR24RzQjaD-0OEk68Q)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svS3shP3BCj0nkKVyG41RfLVv-QBsGQwC7EbgHp2jwKA/https://mmbiz.qpic.cn/sz_mmbiz_png/7EZ0IQOFRX0ZuLIR05p6JFE41ekAnjday8K3uIy9uqVreohccy0hInEwVEyLh768GyI8Bdsnics3rNCWXiaOy5YA/640?wx_fmt=png&from=appmsg)

作者 | 致九

发布 | 微信公众号：致九THINKS  

日期 | 2023.12.11

小提示：全文约 **500** 字

在 [Obsidian 的嵌入功能：一处修改，多处复用](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzMDAwMTA4MA==&mid=2247484252&idx=1&sn=050d8557f13176501cced99a9ab73a82&chksm=c201ba8bf576339d343a9f3eccdd07c3fbc15f0c90a52dc81c1d939aa8438b54ae21f3546c61&scene=21#wechat%5Fredirect) 中，曾经介绍了如何创建一个块引用链接。   

```lua
![[文件名#^块ID]]
```

今天我将向大家介绍如何快速地创建一个块引用链接。  

一个小小的动作优化，就能免去大家在创建「块引用」链接时的繁琐。  

主角是「Copy Block Link」插件 ▼  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s8IC5MPIl7xZUx6IkVV7xEH7X4XSfc1hLjkjmJKQ61tA/https://mmbiz.qpic.cn/sz_mmbiz_png/7EZ0IQOFRX0ZuLIR05p6JFE41ekAnjdarbZhL368A7aqv6aRe7FqUK9PzOIticZBVEmwRTwduRqE7sJnVAOw1sQ/640?wx_fmt=png&from=appmsg)

该插件只聚焦于：快速创建一个块、标题的引用链接，并复制到粘贴板中。

当我们的鼠标在编辑器中的任一段落，右键菜单中将会多出以下两个 ▼ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,ssVdhEe0HT8pdMkxQQO4gvmzAgXpYQd-tni1FcwcaLPY/https://mmbiz.qpic.cn/sz_mmbiz_png/7EZ0IQOFRX0ZuLIR05p6JFE41ekAnjdacPkJRicico3Bhxgpm5gmDRMBiclial3onXYZnuqPJGRFMibgGTfR3a7bDVg/640?wx_fmt=png&from=appmsg)

当我们的鼠标在文中的任一标题，右键菜单中将会多出以下两个 ▼

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWkSpYTqBIFFT8oGahwILmFT8-MGDFBoeILRysaqdfTE/https://mmbiz.qpic.cn/sz_mmbiz_png/7EZ0IQOFRX0ZuLIR05p6JFE41ekAnjdaVChnKJCuWYENjSMUscuKKxkYdICJ0fb0lBf3A93WIVCJDIZ6b6dSgA/640?wx_fmt=png&from=appmsg)

除此外，还能为下面两个命令设置快捷键 ▼  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sL9P049SHBUJbdPeujXm--oYaiwFEKtk_BpTfZAJHV1Q/https://mmbiz.qpic.cn/sz_mmbiz_png/7EZ0IQOFRX0ZuLIR05p6JFE41ekAnjda1ibEOBvnypRiajnRqlBR0JpdicGPa7BXVCyEYwMrzD9n6boWySLWQ76yw/640?wx_fmt=png&from=appmsg)

这些菜单一个是创建 \`\[\[\]\]\` 这样的链接，一个是创建 \`!\[\[\]\]\` 这样的嵌入

不了解这两者区别的请看：

* [如何在 Obsidian 从一个知识跳转到另一个知识？](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzMDAwMTA4MA==&mid=2247484064&idx=1&sn=4be57d7a69919136cc14d63fa494bd97&chksm=c201bb77f5763261c8cc10e75853acbc7da29f378b76b20e879fd65bbdf331e4da4cf44781dd&scene=21#wechat%5Fredirect)
* [Obsidian 的嵌入功能：一处修改，多处复用](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzMDAwMTA4MA==&mid=2247484252&idx=1&sn=050d8557f13176501cced99a9ab73a82&chksm=c201ba8bf576339d343a9f3eccdd07c3fbc15f0c90a52dc81c1d939aa8438b54ae21f3546c61&scene=21#wechat%5Fredirect)

有了这样的快捷操作，我们可以很便捷实现下面的流程：

1. 在 A 笔记中对内容块 B 创建引用链接
2. 然后在 C 笔记中粘贴引用

自然而然，A 与 C 就自动创建了关联，关联关系可以在「图谱」、「反向链接」、「出链」等功能中看到。  

在写作中常使用「引用」和「嵌入」，好处多多：

* 有效减少内容的冗余，
* 丰富整体知识库的链接，
* 对思路追根溯源，
* 在修改时，一处修改，处处修改

无论你是 Obsidian 小白 还是 Obsidian 高手，希望你都发现新的惊喜和用法。



