---
id: e006bee2-ce66-415c-8122-ab45a31b3a78
url: https://mp.weixin.qq.com/s/GMIw-TxaqvcUjqrlTHWlBA
title: |
  myZettelkasten：一份卢曼卡片盒笔记法的实践，内附完整示例库可直接下载使用
author: |
  Terry
dtype: 教程
state: true
date: 2023-12-04 14:16:32
---


# myZettelkasten：一份卢曼卡片盒笔记法的实践，内附完整示例库可直接下载使用
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-gm-iw-txaqvc-ujqrl-th-wl-ba-18c33788361)
[Read Original](https://mp.weixin.qq.com/s/GMIw-TxaqvcUjqrlTHWlBA)

原创  Terry  PKMer 知识社区 _2023-10-25 18:58_ _发表于陕西_ 

**点击上方蓝字 关注星标不迷路**

Focus Star

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s2Rh43I6yVIexkTl2gWNNXDbytreXZCLKCREZmGtpbp4/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzQofTmqxhbiabNmdCQZbjzplGjhT5GUIf5Ea09Rb9YaaaQypzX7gG6PA/640?wx_fmt=png)

本文首发于PKMer网站，信息可能已经过时，点击文末左下角 **阅读原文** 获取最新信息

本文导读

每个人实践 Zettelkasten 的方式，都会基于自己对 Zettelkasten 的不同理解，以及不同的笔记工具而不同。

我对 Zettelkasten 的理解主要来自《ANTINET Zettelkasten》一书。其中书中提到 A-N-T-I 四原则：

* A-Analog 模拟（纸笔手写笔记）
* N-Numeric-alpha address 数字字母地址（笔记编号）
* T-Tree structure 树状结构
* I-Index 索引关键词（卡片盒入口，导航）

我主要使用 Obsidian 写笔记，除了 A 原则（纸笔手写笔记）不能做到之外，我基本遵循其余的 N-T-I 原则进行 Zettelkasten 实践。

A 原则我也是认同的，但是用纸笔手写笔记对我来说不现实。虽然做不到手写，但是我用 excalidraw 来写笔记，让笔记看起来跟写在纸上的效果一样。

使用 excalidraw 还有一个很重要的原因，就是我对它非常熟悉。它既是我的白板工具，也是我的草图工具。

而且 Excalidraw 跟 Obsidian 的结合近乎完美——这一点非常感谢匈牙利大叔 Zsolt 将 excalidraw 整合到 Obsidian，并结合 Obsidian 为 excalidraw 插件开发了很多十分惊艳的特性。

实践半年下来，我觉得以 N-T-I 原则组织笔记的方式，用来追踪和发展自己各种各样的想法和思考特别有帮助。

为了更好展示我所理解的 Zettelkasten/卢曼卡片盒原理，也为了更好地跟同样对 Zettelkasten 感兴趣的朋友交流，我特意制作此库。

**本文主要包含以下内容：**

1. 我对 Zettelkasten 的整体印象
2. myZettelkasten 示例库基本介绍

## 1.我对 Zettelkasten 的整体印象

### 1.1 我对 Zettelkasten 的整体定位

1. 用来追踪和发展自己的想法与思考，无论是短期想法还是长期想法
2. 长期的个人知识库，为项目提供知识，服务于自己当前和未来的项目

目前市面上流行的几种笔记组织方法：PARA, Zettelkasten, 中图分类法，我在 \[\[从企业管理角度看待笔记方法\]\]一文中，将它们类比到企业管理的场景，来说明我对这几种方法的理解。感兴趣的朋友可以看看。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sTNaf4Lyq4sspOynR-mzn6cOoTU3jGRQ0VrOvDF-O2yI/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzMib88Gfg4RiamT0QR8cGyA2MPO8TnKicPkPYolttDslJoW8RRLBkZxzag/640?wx_fmt=png)

**关键词导航面板说明：**

1. 输入/选择关键词，进入卡片盒
2. 导航面板自动生成所选关键词指向的分支（树状结构）
3. Table 中展示这个分支的所有笔记，并显示各个笔记的出入链（引用/被引用）
4. 按需选择显示范围：起点（根节点/分支入口）和深度（分支入口的下一层/最后一层）
5. 按需点击具体笔记链接再展示其详细内容

与关键词索引面板交互的方式，有点像是原始版本的 ChatGPT：输入一个关键词，它返回一个答案。但与 ChatGPT 使用海量外部数据生成答案不同的是，ZK 关键词索引面板返回的答案是基于自己过去的思考，并已形成一定分支结构的笔记串。

myZettelkasten 示例库操作演示可以看：操作视频

### 1.3 ZK 关键词导航与标签、图谱的比较

**标签查找 VS ZK 关键词查找**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s6kJMykCLF4fbptz-8cmLa5YVD6pfL51pCT49WynKxwM/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzxWT6dLVrLDpyGgMhhaK2qhJOqJEtp2UD4gTK3zx0eeQ7NkTqXBd1xQ/640?wx_fmt=png)

通过 Obsidian 的标签搜索，我们得到的是带有该标签较分散的多个笔记，且笔记的关系不够清晰。

而通过 Zettelkasten 的索引关键词，我们得到的是基于自己过去思考，已形成该关键词指向的，具有一定分支结构的笔记串。

**图谱 VS ZK 关键词导航**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s9KNC5BuKHwpktMOH-dbOfYQxfAkS6ZyHqyzyCCeNCIM/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzoFWVBA6gBbZXkd04NxO7UOic750kIBPL6LibEzFywlufGqBn5ACVUoibw/640?wx_fmt=png)

对于想法的发展，我认为树状结构是根本，更能体现这个想法是怎样一步一步发展过来的。

而链接（跨分支，跨主题）的地位次之，但链接容易产生跨界的惊喜，也很重要。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sx6h3krll1uGIvOHmySZ2lupVivYWzAbWwYxEFMdqA54/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4Jzia5AWibZxvXdGoklV4MwJqneMSOECtVvmR2dYibicBzE4FRcq97HlN3AGQ/640?wx_fmt=png)

### 2.1 读书笔记

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sKBRXIrZH9-u0LvUY9hpYjVMIniB8iOs3fe0SWaxiLxM/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4Jzmxbcjs0Ozhv2pxDI2uM1YgO9ncyEKDgOeG7XKrjR1Xew3jv9k7QpxQ/640?wx_fmt=png)

* 一本书一个读书笔记文件，按阅读的线性顺序写笔记
* 以无序列表的形式组织，每条笔记加 blockID 方便其他笔记引用
* 原文链接（非必须）
* 日期/日志链接（非必须）

### 2.2 主笔记

可以用 excalidraw 模板或 markdown 模板创建（侧边栏的铅笔按钮和钢笔按钮）

**excalidraw 模板示例**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sF_DLf13Nm7rqW0y51b4KqSTopS4Qrcye8egOZwBOvA8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzcohGhsDI9lticTD3HZZj05PMQMNkhDt49aexlmiaMTBI15rwwtict7DSA/640?wx_fmt=png)

**markdown 模板示例**

**编号规则：中图分类号 + Zettelkasten 编码，分隔符为“-”**

**主笔记编号操作实例**：比如我想深入学习 Obsidian，于是我种一棵 Obsidian 树，树根节点为 1。Obsidian 是笔记软件，我在网上找到比较适合它的中图分类号是 TP319 专用应用软件。于是，我就建一个 TP319-1 的主笔记卡 Obsidian，并在笔记左下角添加 Obsidian 官网的链接。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sDAhRuFYZn8ncf06CWD_3fBg19I6R9sfVPZJGbG2srDY/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzdKRkz2vIH7QrezsDs8HTicxrFgRs1lbWYfkT0gqR7NVf8AxO4MarlibQ/640?wx_fmt=png)

我对 Obsidian 主要感兴趣是插件和 css，于是我又建了 TP319-1-1 Obsidian plugins, TP319-1-2 CSS。以此类推，TP319-1-1-1 Canvas 插件，TP319-1-1-2 Dataview 插件。

有一天，我觉得 Obsidian 插件众多，像是一个大杂烩。那这个思考笔记放在哪里好呢？

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s03zbwQgKuQaVr7NxeA_dCe6yepA4oUV_FkHJw0NxLTI/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4Jz4Flva7ibtBVe9iakhicNktVk3mnFiaXmqoh3E22pu2ibTgpicX1DNSnlDoAQ/640?wx_fmt=png)

这个时候，可以用 TP319-1-1A。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sDUht7FpiQCLjFo7csxESq52eCpwTRTbJCI59ZFy1FhI/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzMUib7UtZCS8LvBhfMRy2avicou2HATrhxbDXEK0VdVLgOf8XCdsqgKSw/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sRp_8D66iwPbysgOt4OzemWCZV82Ocwu_EMtGH_DzmU8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzKmCZcmLe4ribYm5NMgoxgKFtlNAj4cI4lztpBCcSic70Cs3gLgAoibF9Q/640?wx_fmt=png)

**特别说明**：

1. 很多实践 Zettelkasten 朋友没有用这种数字字母笔记编号，但我觉得编号的作用巨大，因此我的主笔记都是这种编号
2. 编号背后体现的是树状结构，一个笔记通过其编号，就可以看到这个笔记是怎样生长过来的，它记录了这个笔记的发展过程
3. 索引面板是通过编号来自动生成树状结构的，在此库，很多功能都是基于笔记的编号来设计的
4. 这种编码不是一种严格的分类结构，而是一种生长的树状结构
5. 每一个新笔记，你需要选择挂到一个你认为最合适的位置附近，这代表你选择了怎样的笔记关系，也是你想法/思考发展的过程

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sk3sD6aOJW8fFL2pbzB0kCgv7swIL5ERfKp_s_KG7OCs/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzC99mMUjPichVOdXlNQEhL8LAMHjQJylwmZ4uZWzJJEmwPkkLPgeRXOg/640?wx_fmt=png)

另外，中图分类号也不是必须的，它的作用只是让相近主题树靠的比较近而已。

比如我现在已经种了有 4 棵不同领域的树，有一天我想研究 Notion，如果不用中图分类号，这时我的 Notion 就是 5 号树。而使用分类号，我的 Notion 主题树为 TP319-2，跟 Obsidian TP319-1 离得比较近。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s9VXIIz8FuJ_OWvhbEUq0rfvGOy0lRcklxPrJ4gTJn6s/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JznfMPeZ5aibiauYEpib7tMthjpZKHj3p2JjmQic51L2cG9MGSjxj9L0BqaQ/640?wx_fmt=png)

### 2.3 索引关键词

索引卡用来定位树状结构的入口：

1. 使用文字关键词命名
2. 内容仅包含所指向的分支入口链接

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slcmXCUq2rBa5frZrsj14AEtBvZbuBTYuol7swQYse14/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzBgYBhtaqJic0t6XL0Q7F5Hc3EOK1fASZGB2Y9xkjutJWaGq7pxFV3LQ/640?wx_fmt=png)

等笔记到了一定数量之后，主要通过关键词 + 分支笔记串（树状结构）+ 出入链来检索笔记。索引卡的作用和意义需要等笔记数量上来之后才能更好地理解。

## 最后

该示例库是基于本人对 Zettelkasten/卢曼卡片盒原理的理解，结合 Obsidian 插件/功能打造的一种实现方式。里面包含了很多我自己的使用习惯，大家不必完全参照：比如用 excalidraw 写笔记。

对 Zettelkasten 原理，数字字母编码，索引关键词等话题感兴趣的朋友可以查看 OB 中文论坛Zettelkasten讨论帖(https://forum-zh.obsidian.md/t/topic/20515/27?u=terry\_c)。

> 阅后福利  
> 关于作者 Terry 的一些管理方法和 Demo 库，作者已经提供了示例空间，欢迎大家自己下载体验 https://pan.baidu.com/s/1sngJz9ez1J76-mAFa28RQA?pwd=f83z

## 往期精彩

* [不止于OB，该如何选适合自己的笔记软件](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484089&idx=1&sn=2d097e63eb7db3005b6fe9a05735c7ec&chksm=c2adf9def5da70c832e7c4369c7c1043284e8920cd582328db5e0c19156db49bdb6a76891e95&scene=21#wechat%5Fredirect)
* [个人知识管理 - 简化生活的终极指南](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484118&idx=1&sn=c2294fb38b24572c6b81f47c35740a3e&chksm=c2adf9b1f5da70a7d2700953eacc6759d83d195b94c58798aa76738d04a6332ea67465ca46cc&scene=21#wechat%5Fredirect)
* [告别魔法！一劳永逸解决无法访问Obsidian社区插件的问题](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247483697&idx=1&sn=b70bd6a0f3cba0f2ec6dbd093a803f17&chksm=c2adfa56f5da7340e9be7ff4403eaca2b9317ef25bb35ea2b939316ce19b4b62a470aed9852a&scene=21#wechat%5Fredirect)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sAEHIqppGl9N5_7OpDzVbyWGw0fFBIPgaRGAKLITuK_Q/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4JzTGAnJaiafncsqKZcFKYGDTeR24ma4JRPcNBHzWktk0JYS5qhobebibhQ/640?wx_fmt=gif)

**你们点点“分享”，给我充点儿电吧\~**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sz31etAzuv6ToJvr3njpTJ48QO8cmNmqTZU44vxzZzPQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvbPicCxxs2nZzwHdGqWTEQOjHJdYdib8a3FzGSDIpYOKoc8UA9bxxxl0PHmuD4iav2iaAeQYGiaZqg0eW/640?wx_fmt=svg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sgVYnzKbyiwBccyzggFoxOOrCYROSItu5m3FHxSYOxzA/https://mmbiz.qpic.cn/sz_mmbiz_jpg/epTcXdtRjfMWsbZ9LA2WqWHzMDJ5V4Jz3LMH9gVX0lO6ic3T9hmXTbmQ0sLic9JoxXMlMibow3OibZlbOAl65ibpAVw/640?wx_fmt=jpeg)

**公众号二维码**

**QQ群｜825255377**

**PKMer官网：https://pkmer.cn/**



