---
id: 2a44e9e0-f254-456c-b84c-e83a3788234d
url: https://mp.weixin.qq.com/s/mCwmQz3aqNYzWY1p-2wDZA
title: |
  Obsidian NoteChain 完成 80%的功能开发
author: |
  江下虫
source: 微信公众号
dtype: 插件
tags:
  - 400兴趣类/Obsidian/Plugin
banner: https://source.unsplash.com/900x1600/?
state: true
date: 2024-04-15 14:22:40
---


# Obsidian NoteChain 完成 80%的功能开发
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-m-cwm-qz-3-aq-n-yz-wy-1-p-2-w-dza-18ee06bf78e)
[Read Original](https://mp.weixin.qq.com/s/mCwmQz3aqNYzWY1p-2wDZA)

![cover_image](https://proxy-prod.omnivore-image-cache.app/0x0,sg46FeLt_3T5ooRymxIkUUEdAxDoIGHnsox-EYuT--KU/https://mmbiz.qpic.cn/sz_mmbiz_jpg/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZFNNaEA5QPYvlqwsUiaJNRhbjj9MwVibYgUUo5Q1cgTyjV9PHJCrhU1uQ/0?wx_fmt=jpeg) 

原创  江下虫  知更鸟在屋顶 _2024-04-14 23:57_ _浙江_ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sKImlUxvK5VSMKFvCsUx40RdHc-QO7ubxvllj7LiVAG8/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZY3l2ZtMX9L1eqkPh3t4m2JwdArQeegC9StqWQvg86SM7V51wc9tJcA/640?wx_fmt=png&from=appmsg)

感谢凌云和Wish在《[悄悄在 Obsidian 记录成就](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzI5MzMxMTU1OQ==&mid=2247485394&idx=1&sn=fae355b5ba7d37a5a46b0c656699a4d6&chksm=ec7542fadb02cbecd52943bfe14dad7dbf71bd4f02a6ae403d81dd53e55ea15fd572add4660a&scene=21#wechat%5Fredirect)》的赞赏。![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sCOB_d8slZgrInM_CRQVZUjbZoKIZWuOVrIoLAVdHq9g/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZWH3eZPwgXcGYyiarXqP9nicfbGQWYjV8t8ibOWqvB3h038uwlKYMONCYA/640?wx_fmt=png&from=appmsg)![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sCOB_d8slZgrInM_CRQVZUjbZoKIZWuOVrIoLAVdHq9g/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZWH3eZPwgXcGYyiarXqP9nicfbGQWYjV8t8ibOWqvB3h038uwlKYMONCYA/640?wx_fmt=png&from=appmsg)![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sCOB_d8slZgrInM_CRQVZUjbZoKIZWuOVrIoLAVdHq9g/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZWH3eZPwgXcGYyiarXqP9nicfbGQWYjV8t8ibOWqvB3h038uwlKYMONCYA/640?wx_fmt=png&from=appmsg)

没想过有人赞赏，没设置赞赏回复。所以在此祝愿每个人：Wish U，少年凌云志，扶摇九重天。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,shqK-yQCByaiRe5OsZmjnc5OrD8MlPuHQCQw1Z9Xwgsg/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8Z3metbeOv0VLGDU0vGMzXGSSA9Hha3fNcHbkRH8moSE7CcHibYIGNktw/640?wx_fmt=png&from=appmsg)

---

今天学习了 Javascript 的 prototype，终于实现替换 Obsidian 排序与还原。于是把 NoteChain 删除了不必要的功能，算是达成目标插件 80% 的功能，推荐大家试用。  

一些功能和迭代可以看历史文章：  

* [我的Obsidian插件发布啦：](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzI5MzMxMTU1OQ==&mid=2247485043&idx=1&sn=492718ce25a48e9764bd33e2a7b6197b&chksm=ec75435bdb02ca4dd1a6b819dfbcfefc49002f7df3cd327de572437cf3e91cfe456873559e54&scene=21#wechat%5Fredirect)介绍插件安装主要命令行
* [从NFTL 到 NOTING](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzI5MzMxMTU1OQ==&mid=2247485241&idx=1&sn=3bfbcc65e09a97197f79ee818ecd3413&chksm=ec754211db02cb07b779c3ff43f1cd256070b64ff131bf0ec908da52ede6835dd56612dcd7de&scene=21#wechat%5Fredirect)：NoteChain 与 LongForm 互通
* [目录王者归来](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzI5MzMxMTU1OQ==&mid=2247485327&idx=1&sn=afa11d3ba311b546812ca13f335a33f3&chksm=ec7542a7db02cbb1f535d46005c148454fe7424a94145fe06cae30690245e886d4dbbbc58b4c&scene=21#wechat%5Fredirect)：目录通过 NoteChain 排序

由于我改了插件名，所以使用 BRAT 安装测试版插件时，地址需要修改：  

```awk
https://github.com/zigholding/obsidian-notechain-plugin
```

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sJ0Jt5pzHzoPoXWKErRoGIvX7cVXudBcLiD09ZFyPJGE/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZrKeD1icTCRt8kn9roQpJ6DN8BbTEEnBzMwfP9OnEt7gsgOPuukaeceQ/640?wx_fmt=png&from=appmsg)

好了，开始介绍最大的不同吧！  

设置页删除不不必要的设置，新增一个选项：Sort File Explorer。

选中后，目录将会自动根据 NoteChain 排序。当添加、重命名、删除文件或根据命令修改链条元数据时，会自动刷新笔记顺序。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sx_0HCjCVqXfhTfBd4h7SEwgSbzt78jaryhV-venee_A/https://mmbiz.qpic.cn/sz_mmbiz_png/hp9XO4U4Gj94gAAcMVyYbxib9lz4WbI8ZftFoOr88zIVIaN9tSrzlyXKGGRvVtut9QGzbI5vR6okCHR3SM156Fw/640?wx_fmt=png&from=appmsg)

设置笔记链条，可以通过：

* Reset Note Chain by LongForm：LongForm 批量设置
* Reset the chain of current folder ：根据文件名/创建时间/更新时间批量设置
* Insert node of chain：在链条中插入当前笔记；

目前已经满足我绝大部分的功能需求，还有两个点可以优化：  

1）文件夹目标排在最前面，且根据名称排序。如何将目录也按链条排序呢？

2）通过在目录中拖拽文件，重置笔记链条；



