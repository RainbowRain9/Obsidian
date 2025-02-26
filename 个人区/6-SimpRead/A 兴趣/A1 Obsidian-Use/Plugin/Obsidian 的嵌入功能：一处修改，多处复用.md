---
id: f2315ec7-6fdf-4ea3-be2b-44d83b7fb696
url: https://mp.weixin.qq.com/s/7fIos-JdkwTexVRQ72ocsw
title: |
  Obsidian 的嵌入功能：一处修改，多处复用
author: |
  致九
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/教程/实践
state: true
date: 2023-12-07 23:22:04
created: 2023-12-10T19:52
updated: 2024-04-13T12:49
---


# Obsidian 的嵌入功能：一处修改，多处复用
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-7-f-ios-jdkw-tex-vrq-72-ocsw-18c44dda2f3)
[Read Original](https://mp.weixin.qq.com/s/7fIos-JdkwTexVRQ72ocsw)

原创 致九  致九THINKS _2023-05-04 20:08_ _发表于广东_ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWUFtllYLtHS7XfPYIMDedkTyT2haaLnIicAuOFkktXk/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX1qbyLjibtHl9JF8cr59aVlRysLsichChoGOXUhJQNibaLDodPV3XnjfNxVLg0iahvp20q0k2EDt5NsCA/640?wx_fmt=png)

假后开工，恢复更新！

为了解决大家对Obsidian的问题，我建立了Obsidian学习成长互助群方便沟通，欢迎大家加入该群，一同探讨知识管理之路。

入群步骤：  

第一步，关注本公众号「致九THINKS」  

第二步，点击菜单栏中的「ob互助群」

就能获得最新的入群二维码啦！

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHB1C6S7XracJR_Nkw5xgnXYXtphUGTfophy8e9wVGgQ/https://mmbiz.qpic.cn/mmbiz_jpg/7EZ0IQOFRX1qbyLjibtHl9JF8cr59aVlRw1d7ZUWeUaBupSxF8yH1PkcKz4URYeaOTtZln6rTZUJ6ODWAoCZBTQ/640?wx_fmt=jpeg)

OK，正文开始！  

---

小提示：本篇文章约1000字，大约需6分钟阅读

很多时候我们都喜欢偷懒。  

比如说，我之前写过的东西，能直接在当前页面组合一下，就能出稿，那该多好啊！

Obsidian 给出了适合懒人的答案：嵌入功能。

嵌入不同于常规的复制 + 粘贴的操作。以前当我们复用以前内容的时候，一般操作是把笔记内容复制粘贴到很多地方去。

但是每当笔记内容有更新和修改的时候，就需要找到所有用到这则笔记的地方，然后一一修改，同步最新的内容。

然而，嵌入功能使我们在修改笔记时，只需在一处修改，其他所有地方的笔记中嵌入的内容都会同步显示。

Obsidian 给嵌入功能分成了不同的层级，我来一层一层讲解怎么用好 Obsidian 的嵌入功能。

## **文件层级**

首先，可以将整个笔记文件的内容嵌入到其他笔记中，只要遵循以下的格式：

```lua
![[文件名]]
```

下图演示了如何嵌入一个笔记文件：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,swqyUy31_RWT_5LWxjuDGM7CfEb9UvKwkcx3KQ8c6Z40/https://mmbiz.qpic.cn/mmbiz_gif/7EZ0IQOFRX2Mf69G1aTvYYaLOU5e3TNic7ke0nJRkvEg65noKMTtE0y5JGiceCbKibcj9UbKvW9kDkQuqEyWrmXIw/640?wx_fmt=gif)

实际上，在 obsidian 中加入图片、音频、视频，采用的正是文件层级的嵌入。

可以看到，嵌入的语法就是在内部链接前加入了 `!`。

## **标题层级**

然后，可以将一个笔记文件的某个标题下的内容嵌入到其他笔记中，只要遵循以下的格式：

```lua
![[文件名#标题名]]
```

```


```

下图展示了如何嵌入标题层级的内容，并且点击该链接可以跳转到对应的内容。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sodQSDkUmQQDUWL72P1k40mW9bpy2rdRBgmtlzkkBr6Y/https://mmbiz.qpic.cn/mmbiz_gif/7EZ0IQOFRX2Mf69G1aTvYYaLOU5e3TNicibVSVt0J2ELpZ1YJfYGgTUibBtf4DOaZo1uEXMpQv5qMjAWTqsYJewxA/640?wx_fmt=gif)

## **块层级**

在 Obsidian 中，一个块可以是一个段落、一个引用、一个列表等等。一般来说，前后有空行包围的东西就是块。

在 obsidian 中，可以将一个笔记文件的某个块嵌入到其他笔记中，只要遵循以下的格式：

```lua
![[文件名#^块ID]]
```

这种方式叫做块引用。  

在平时的记录时，首先需要输入 `![[文件名` 来唤起弹窗，在选择相应的文件后，通过输入 `^` 进入块选择界面。随后，需要继续输入关键词来选择要链接的块。可以参考以下演示图：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s2JhzqP0wA86QAr2F89q-vt8kqLTt8iSygx3JI79OvO4/https://mmbiz.qpic.cn/mmbiz_gif/7EZ0IQOFRX2Mf69G1aTvYYaLOU5e3TNicUAFCyyrM0XwZB3L1ou40VWm1zrYEwKO0KApboxkKJsFAW1RIMPLE9A/640?wx_fmt=gif)

如果我们忘记了某个内容所在的文件也没有关系，可以通过全局的块引用来找到自己想要嵌入的内容块，使用全局块引用我们需要输入：

```lua
![[^^关键词]]
```

``然后稍微等待一会，就能在弹窗中进行选择。

经过群友 `@知识管理小白` 的提醒，大家需要注意以下问题：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sS-HO4yi5VpPO4LoFkm6CFgkKZoqQON9JrQwFmWi8TLA/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2Mf69G1aTvYYaLOU5e3TNicI3fibpcQ0Us2m2Vb8k3zXbgIw8aCjOJa9zuVnEx2V0T4CoSrg1zthDQ/640?wx_fmt=png)

这个问题的解决方式是我们可以通过输入更多的关键词来筛选更适合的内容，关键词之间用空格隔开：

```lua
![[^^关键词1 关键词2 关键词3]]
```

```

```

在弹窗中选择一条内容后，就会自动转换为块引用链接。

## **总结**

以上介绍了不同层级内容的 Obsidian 嵌入方式，在实际运用中，我们可以根据自己所需要的信息层次，选择不同层级的嵌入方式，享受 Obsidian 给我们带来的便利，提高创作的效率。



