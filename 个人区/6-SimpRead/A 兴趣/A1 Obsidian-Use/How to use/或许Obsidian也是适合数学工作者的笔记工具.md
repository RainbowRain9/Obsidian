---
id: e0202652-77bc-4be1-b7f7-a8dc1655f317
url: https://mp.weixin.qq.com/s/YfkG9KqcXd-s4-BixCkZlQ
title: |
  或许Obsidian也是适合数学工作者的笔记工具
author: |
  致九
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/教程/实践
state: true
date: 2023-12-07 23:17:20
---


# 或许Obsidian也是适合数学工作者的笔记工具
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-yfk-g-9-kqc-xd-s-4-bix-ck-zl-q-18c44dab889)
[Read Original](https://mp.weixin.qq.com/s/YfkG9KqcXd-s4-BixCkZlQ)

原创 致九  致九THINKS _2023-05-22 13:13_ _发表于广东_ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sN2OucIqlGSZku2AYVYKj27sSyPZHdUc0JCnewO92KU0/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzILXqcSbXzrMWyRWs1rvCicoB6JHrsjz53rofcN0s8ia7Ta5mvw3P3qIw/640?wx_fmt=png)

号外号外：  

各位小伙伴们，咱们的第一次分享交流会马上就要来啦！

咱们先看看交流会的安排：

交流方式：

1\. 腾讯会议：777-512-048

2\. B 站直播间：https://live.bilibili.com/800679

参会条件：无门槛

会议主题：思考者们 一期 分享交流会

会议内容：Obsidian 经验分享

主讲人：致九、Kyo Sekai、李孝鑫、windilycloud、JuestChaOS

有兴趣的朋友们到时候不见不散哦^\_^

---

小提示：本篇文章约1800字，大约需8分钟阅读。

对于数学、物理、计算机的学生和工作者来说，笔记中参杂着公式是再正常不过的事情了。  

以前的做法是在本地安装全套的 latex 写作环境，如 TeXLive。

或者是在线上的 latex 环境写作：\[OverLeaf\](https://www.overleaf.com/)

在 latex 环境中写作时，**往往要兼顾内容和排版**，会使用大量与内容无关的标记，去控制内容在编译出的 pdf 文件中表现的形式，如字体、符号、间距、方框等等。

Markdown 或许是一个更适合记录相关笔记的载体。

我们应秉持 **内容和表现分开**的原则，先利用 Markdown 快速写下所有内容，有了内容后，再去为了出版、投刊的目的实现复杂的排版。

Markdown 支持 latex 语法，只要记笔记的人熟悉 latex 语法，就可以在当前笔记中渲染出复杂的公式。

成对的 \`$\` 代表内联公式，里面内容将会渲染在行中，与文字混合出现，一般用来记录数学符号或简短的公式。如 $a$、$e^{2i\\pi}=1$。

它们将会被渲染为：  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sc94XB_IADr17or8TZl2V06gPQAXotBVFhN_ohiOPiEk/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzW36cdnFLZkYN7QyRsZsgiauXwXdTfYWHwO16xJBtcWtib4kfeqS4C5Wg/640?wx_fmt=png)

而成对的 \`$$\` 代表公式块，渲染的公式将单独占据一个自然段，如：

```tex
$$\begin{vmatrix}a & b\\ c & d \end{vmatrix}=ad-bc$$
```

它将会被渲染为：  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s3t9f0Mw1OAMxgJDAbPvBeDLveigoJhIYkMsvcqRdnY0/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDz8UL65oyKKk2PAAkng6ibt5OSUxfPGUuebrb9MOYUcHwwelNOHP0wA7Q/640?wx_fmt=png)

更多可以在 Markdown 中使用的 latex 语法可参考：\[Cmd Markdown 公式指导手册 - 作业部落 Cmd Markdown 编辑阅读器\](https://www.zybuluo.com/codeep/note/163962)  

可能很多人和我以前一样，选择了 typora 来记录 Markdown 笔记，但是出于以下的考虑，我切换到了 Obsidian。

1\. 逻辑链路

2\. 相关插件

## **逻辑链路**

Typora 是文档类型 Markdown 编辑器，每份文档都相对分离。  

但是知识并不是分离的，它是具有相关和因果等逻辑关系的，对于理科类比较讲究逻辑的学科来说，一个能够记录完备的知识体系的笔记软件能发挥更大的作用。  

对于 Obsidian，我已经写了很多介绍，可以看看：[Obsidian画的饼，正在一步步实现](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzMDAwMTA4MA==&mid=2247484047&idx=1&sn=711a4e04629b8adbcaef6d9ccf9cec76&chksm=c201bb58f576324e16ad9b9b2a1867d8d620ff784424efde19670869ab7a8e9b7293dafddab2&scene=21#wechat%5Fredirect)  

## **相关插件**

Obsidian 自由的插件市场，可以为输入 latex 公式带来很多便利。  

以下介绍两个与 latex 相关的插件  

1\. templater  

2\. Latex suite

### Templater

配合 Obsidian-templater 插件，我们可以快速输入固定的公式。

首先按照 [打开插件世界大门，看看Obsidian小白之友带来的丝滑编辑体验](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzMDAwMTA4MA==&mid=2247484186&idx=1&sn=1d4599f6fd155d8f26f6cccdabb40b09&chksm=c201bacdf57633dbfe9a7a19a048032452ea87504ae4dd383ee1f7fcf1cc9f05968d9cc1dc27&scene=21#wechat%5Fredirect) 介绍，在插件市场安装好 Obsidian-templater 插件。

提示：如果安装插件有问题，可以参考：[安装obsidian插件的多种方式大汇总](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzMDAwMTA4MA==&mid=2247484290&idx=1&sn=26b37149763e7e439181bdaa2092c32b&chksm=c201ba55f57633432e0342546e2a2f2fa838694dde1d08675160f86b49e1eb9c855effed5ef1&scene=21#wechat%5Fredirect)。

安装好 Obsidian-templater 后，先不急着用，我们要进行基本的设置。

打开 Templater 的插件设置页面，只设置「Teplate folder location」选项，该选项确定了「模版」被放置的文件夹，一般我会将该文件夹命名为「Z-templates」。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sAJn67r19oyTMnGRSNiZhInx1wZF_ENiUVi_ROj7PoMc/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzJs0YIyL6LWlx3Dqic5Kq3GMOsME1IiaTyaKA983zjX6JcLrd0aAkyg2A/640?wx_fmt=png)

Templater 是一个强大却复杂的插件，后续我会以一个个案例的形式逐渐讲解它所涉及的语法和用途，敬请期待。  

我们在本篇可以只关注它的「插入模版」功能。

「模版」即是之前设置的「Z-templates」下的文件，为了以后与其他类型的模版区分开，我还在其下建立了「math」的目录夹：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,stREiCnmcB7EE9bGImjTVQ_IG7klai1PbWJyWagZvclk/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzicN0LkJJFBbHeDaqUWtBvuJVaIaVIAXMkOm2vDPreztnQAI45w96PWw/640?wx_fmt=png)

在 math 目录夹下我建立了两个公式的内容，来看一下其中的泰勒公式：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sce71gFSvvTo54blOAMaOH19nM6CoUZNMiNj8tRe6ytk/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzJaV5ibskz5IbQ2CdDsAibzYg0RCEr8YxoJnlUTJ03z6RYS2rXwia2JvlA/640?wx_fmt=png)

可以看到该条公式比较长，如果平时都是自己手动录入的话，未免需要花费太多时间，然而只要我们将它建立好，放入「Z-templates」，以后就能通过「插入模版」功能快速插入该条公式。

我们先新建一个「Templater 演示」的笔记，并打开它。

然后，在「命令面板」中搜索关键字 templater，可以调用该功能和看到它的快捷键。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sRtfxPgQn6APf5mMoE4gUOA_oLMQD9KkzQqGAfqhbIz8/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDz2KdrytgvnMzACpS4NXP22BgJOuYghCXElvialuGjjTXKa2qNmdlcsXg/640?wx_fmt=png)

「Enter」键确认调用该功能后，将会出现模版的选择对话框，这个对话框中将会显示所有在「Z-templates」文件夹下的文件名称。在该对话框中可以再次输入模版的「文件名」来筛选出具体的模版：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s01lIIP0s5zsxTaB93gb6R5BlPSXGAB2TI_DNv5DrLO4/https://mmbiz.qpic.cn/mmbiz_png/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzEbaSBxZkdSIN55zXqibic0kTCzLQ3DcGqSjRHYnIRt2icq66pXx1C74ibA/640?wx_fmt=png)

让我们来选择「泰勒公式」：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s5ZvG4aO2vpFgm6fnSzkTQFWNu79fBVIm2lPMQsMfpAo/https://mmbiz.qpic.cn/mmbiz_gif/7EZ0IQOFRX2nXLlJkQHSgMSdYTgiazwDzW0oLnbib0PeoEBl4HxkhdKkIg90tHYwtvCJpEu0GqhRYfkhWQicr8lhQ/640?wx_fmt=gif)

可以看到在当前已打开的「Templater 演示」笔记中被填充了与「泰勒公式」一模一样的内容！

利用该功能就能 **将常用的公式封装起来**，避免每次重新录入公式，节约记录笔记的时间，将时间留给思考和更有意义的工作。

### Latex suite

Templater 带来的插入整块内容的便利，而 Latex suite 插件带来的是在录入公式时的便利。

比如，我们通过输入：

`xsr` `sin @t`

就能在 \`$\` 和 \`$$\` 公式块中转化为  

`x^{2}` `\sin \theta`

Latex suite 允许通过使用自定义片段，快速输入公式。与 Templater 相比，这其实就是更细粒度的复用了自己封装的公式片段。

Latex suite 的语法可以参考以下内容：

1\. cuman 大佬写的介绍：https://pkmer.cn/Pkmer-Docs/10-Obsidian/Obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/Obsidian-latex-suite/

2\. Latex suite源代码及其介绍：https://github.com/artisticat1/Obsidian-latex-suite

## **最后**

希望以上介绍能对你有所帮助和启发！



