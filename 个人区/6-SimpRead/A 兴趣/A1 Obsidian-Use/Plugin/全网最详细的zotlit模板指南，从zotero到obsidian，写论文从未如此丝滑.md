---
id: eb408e0a-cbfe-4e80-b2ef-0f71bb194703
url: https://mp.weixin.qq.com/s/XW59c6lTxK1L_yU2zPsyuw
title: |
  全网最详细的zotlit模板指南，从zotero到obsidian，写论文从未如此丝滑
author: |
  alephpiece
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/Plugin
state: true
date: 2023-12-13 08:37:28
created: 2023-12-19T10:04
updated: 2024-04-13T12:49
---


# 全网最详细的zotlit模板指南，从zotero到obsidian，写论文从未如此丝滑
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-xw-59-c-6-l-tx-k-1-l-y-u-2-z-psyuw-18c60698562)
[Read Original](https://mp.weixin.qq.com/s/XW59c6lTxK1L_yU2zPsyuw)

原创  alephpiece  PKMer 知识社区 _2023-12-12 18:02_ _发表于陕西_ 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sz8mnntouFxVx1eI-FQsErcRg1knPLJhk-BYqzYSOu9o/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4od4Zbe7GZY3WQacUvzgrR3ZTbIIFmNmehE3Cux0m1XAo3iaLpxkEWvA/640?wx_fmt=png)

**点击上方蓝字 关注星标不迷路**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sz8mnntouFxVx1eI-FQsErcRg1knPLJhk-BYqzYSOu9o/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4od4Zbe7GZY3WQacUvzgrR3ZTbIIFmNmehE3Cux0m1XAo3iaLpxkEWvA/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sK003OSwGLRpYRLTC15Cdi-LtKt17rrGgF-ROTFagYvQ/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4cDyRiahrW6hm0jC722Q7tDXF8aNgjDQ8Qicg1I50zLu2GQMTGR7rqr0w/640?wx_fmt=png)

本文首发于PKMer网站，信息可能已经过时，点击文末左下角 **阅读原文** 获取最新信息

> “
> 
> **声明**
> 
> 撰写本文时，我的 ZotLit 版本为 1.1.4，插件后续更新可能未反映在本文中。
> 
> ”

Obsidian ZotLit 的 `[@` 语法带来了如同原生 Obsidian 内链一样的体验（详情可查看[PKMer出品的ZotLit插件：Obsidian 与 Zotero 联动，有 \\\[@ 就够了](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484770&idx=1&sn=94014a33313f4b57e0f4ff5d5fd7c8a5&chksm=c2adfe05f5da77133dd576a14104f81c4b5f5f1804fd271f3e81fb5a4a6a6a6ad7dc2776a648&scene=21#wechat%5Fredirect)）。如果说 ZotLit 的 `[@` 是手指的享受，那么 ZotLit 灵活的模板一定是眼睛的享受。

如果笔记中的文献引用是 author-year 格式，会不会倍感舒适？

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sMYdwRsXOQ9l2U1k6jQrWfJB_6_QmtRbwHxqu_rWtdTQ/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21S9iczMxJFsibZAogkLFTykMZqBCSdgDK1UjMyMdS9dQE1jJT8D0ugtlSQ/640?wx_fmt=gif&from=appmsg)

如果笔记中的文献引用跳转到参考文献列表，是不是一时之间忘了自己在写 Markdown？

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sshEshHJjhgMDqoJKmGYOSdqr-h3NrTZBv-M5nXI9sKI/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21S8QdON7tVXtarGakic6iaB0Abs7aWNFbUQRGO8RFic3hB71uibcBNF98YIw/640?wx_fmt=gif&from=appmsg)

## ZotLit 模板编辑

Obsidian ZotLit 插件使用模板来确定要导出的 Zotero 条目内容，模板使用 Eta 模板引擎 实现。

Eta 的语法和 Obsidian Templater 插件的模板语法很像，具体介绍可以参考 ZotLit 文档：模板基础知识 – ZotLit (aidenlx.top)。

下面简单介绍一下 ZotLit 模板语法和编辑器。

### Eta 语法简介

要想用 ZotLit 在 Obsidian 中获取一个 Zotero 条目的作者列表，可以在模板文件中写

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`<%= it.authors %>`

这段代码的含义如下：

* `<%` 和 `%>` 是 Eta 的分隔符，在里面的都是 Eta 代码，这里面也可以写 JavaScript。
* `=` 表示要输出分隔符里面的变量，在这里就是输出 `it.authors`。
* `it` 是 Eta 的一个全局变量，它包含了当前文献的题录、笔记、注释等信息。
* `it.authors` 就是从 `it` 中取出当前文献的作者列表。

### ZotLit 有哪些模板？

ZotLit 目前有 1 个简单模板和 7 个模板文件，用于指定要从 Zotero 导出的内容、格式，都是可以自定义的。这些模板都在 ZotLit 设置的 `Template` 选项卡中列出来了。

> “
> 
> 下面所说的文献笔记（literature note）是指从 Zotero 导出到 Obsidian 的 Markdown 笔记，可以包含一个 Zotero 文献条目的几乎所有信息。
> 
> ”

下图是 ZotLit 1.1.4 的设置界面。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,si8UO8bvbYPMf7VpDS7mWcIyGT6ysAzxdnEjE8lm9G60/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SC9sCs8SQDQofwGT9PFkzX908GWyDL8ZG1R5UFoI8vdLnjYtz2xBTPw/640?wx_fmt=png&from=appmsg)

这 8 个模板分别是：

* 笔记文件名（note filename）：文献笔记的文件名。简单模板，只能在 ZotLit 设置中修改。
* 笔记内容（note content）：文献笔记的内容。模板文件，可自定义要从 Zotero 条目导出的笔记内容。
* 笔记属性（note properties）：文献笔记的属性。模板文件，指定 Obsidian properties。
* 注释（annotations）：PDF 注释列表。模板文件，指定从 Zotero PDF 导出注释列表的格式。
* 单条注释（single annotation）：PDF 的单条注释。模板文件，指定一条注释在文献笔记中的格式。
* 主要 Markdown 引用（primary Markdown citation）：引用一篇文献的链接格式。模板文件。
* 次要 Markdown 引用（secondary Markdown citation）：引用一篇文献的链接格式。模板文件。
* 彩色高亮（colored highlight）：在文献笔记中显示有颜色的 PDF 高亮块。

### 模板文件编辑器

除了文件名模板可在设置中修改，其他可自定义模板都只能在文件中修改。这些模板文件可以通过 `Template` 选项卡中的 `Eject` 按钮生成。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sO77P97udXXRKFcArAnvfjtRU6xG6yFxMDUedeCkXLM8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21Sqy8wagajlh0wtW0aAG2iatq2ibPS0VnTcv3p4gbpcQtS4pRiaiadkZtiaow/640?wx_fmt=png&from=appmsg)

之后，可以随时从这个选项卡跳转到生成的模板文件。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWBoK7KhIxaiRKiSa1arQS4b2z_mHOc5m12W-d4Ds6tw/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SrDIQ9GNvWibxe50N8kqxAibjdm5stibR0cvH7B3RKBTDHhKaK7QZ8XARA/640?wx_fmt=png&from=appmsg)

为了方便编辑模板文件，ZotLit 提供了一个模板文件实时编辑器。截至 ZotLit 1.1.4，这个编辑器都是可以从注释面板打开的，步骤如下。

* 在 Obsidian 中打开命令面板。
* 找到 `ZotLit: Open Zotero annotation view in side panel`。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sjcHc5wUpMq4nsmqeZjtl0ZYkoQo-r2aUQ8nLepyHkI4/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21Sn9OiatyeI9TwLodbBehB6z8UTiaHD3hLq7ibKko0qo7td3gF1PAgW0New/640?wx_fmt=png&from=appmsg)

* 打开注释面板后，点击链接图标，选择链接模式 `Link with selected literature`。

> “
> 
> 也可以使用其他链接模式，总之要链接到一个文献来展示模板的效果。
> 
> ”

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s_8Q88rzETVdsoQdTuPuRxmhY5j1C6jIWRSu4XO7f-s8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SaARib7auIKf4EkT5qG1sC3BiasXUBggE6vKltgFnyKiaONK3iazVHXwIMg/640?wx_fmt=png&from=appmsg)

* 在弹出的搜索框中搜索要链接的 Zotero 文献。
* 完成后，该文献的注释就出现在面板里。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sAcmXk5mtll0I75Xh5f_LcgiQovYa5O4hprCevZLl5qg/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21S5IhWxkQCJfuCgepkZiajpnQTHS8masXMgCBdF0iadaNS33APD2hVQb1g/640?wx_fmt=png&from=appmsg)

* 点击 info 图标，`Show details`。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sjdh6bmkXZ8iD-e4RAPSEFU6yx_rzhTE3bsEaJCh21tY/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21Scg7OA07tuQsPDicKZFRC3HpiaVAI74kRvQgN6gVbaREEQjjaNLJoicibPw/640?wx_fmt=png&from=appmsg)

* 实时编辑器启动。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,snR6LC7O6qkg3_7Y9O5dT7WSzObzVVzmQtFwPR-8ZZLQ/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21STSXRepDLFk5vIawMSyHoL65HH8o9n4gJsxC7MeYl31NfRuy5cRXmdQ/640?wx_fmt=png&from=appmsg)

编辑器分为三个区域：

1. 模板文件。当前正在编辑的模板显示在此。
2. 导出预览。用这个模板导出的文献笔记显示在此（就是前面的步骤链接的那个文献）。
3. 条目数据。当前文献的所有可导出的数据显示在此。

终于准备完了！虽然步骤很多，但是只要接下来把模板文件准备好，就再也不用折腾了！

## 笔记文件名

### 修改笔记文件名

用 ZotLit 导出一篇 Zotero 文献，于是在你的 Obsidian 仓库里多了一个文件：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sVbcwi0v31GIL8TQsS3R6jye5O-GtnRrV962h1hXfuG8/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21S08Xphrkcde7bSnGubYor3FsS6Uib7Q50RlXicq4XXlYFSUQEUooQgbaQ/640?wx_fmt=png&from=appmsg)

什么？你不喜欢这个文件名？可以改！

打开 ZotLit 设置的 `Template` 选项卡，找到里面的 `Note filename`，把它改成你想要的样子就可以。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s7r7K8SwBOD1rCu2Kz1zftXRg_8E1_-Kw3mUBOh8VHFw/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21STGmBmUfUWlwKs40yk2KeicB0nRGyLic6nB5SJuI2NaS8qQaicJmXCAXTQ/640?wx_fmt=png&from=appmsg)

它的默认值是

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`<%= it.citekey ?? it.DOI ?? it.title ?? it.key %>.md`

意思是以当前文件的 `citekey` 或 `DOI` 或 `title` 或 `key` 作为文件名，首选 `citekey`。

如果把文件名模板改成 `<%= it.key %>.md`，就会看到这样的文件名：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svuzGr2XYvtTBqv-geyQzDgSPz2tOlWyyK3zzR4BYKEE/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SA2gEPfnhJwJyIK6ibeb159GFXricAgVP1H5EyDMUU6hiaWpvzThlwI66A/640?wx_fmt=png&from=appmsg)

如果你喜欢给文件名加一些前缀，像我一样：

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`@<%= it.citekey ?? it.DOI ?? it.title ?? it.key %>.md`

就会看到这样的文件名：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sqcArwlRGChbc2ePn987p0bN-xBllRUeusfBgDGsvCrc/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21ShcOgnofHF30VR34ebvqywBBPRpC6aCTmzYL0wBVicncHXXWI86Q2HsQ/640?wx_fmt=png&from=appmsg)

### 中文文献笔记名太长

#### 有多长？

如果用 ZotLit 导入一篇中文文献，会发现文件名和英文文献的格式不太一样，尤其是文件名可能超级长，这怎么办？

比如说，同样的一本书，英文标题和作者名是

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`Title: Ultralearning: Master hard skills, outsmart the competition, and accelerate your careerAuthor: Scott Young`

换成中文存起来的话，中文标题和作者名是

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`Title: 终极学习：精通技能赢得竞争平步青云！Author: 斯考特 杨`

看看这两条记录用 ZotLit 导入 Obsidian 会得到什么样的文件名。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s_8kueKP9tX3xw3PZuRynsXkZke7lG40h7U4CRw1kbYg/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21ShD9AY5zfBy9CD4muPicUia92bMNs3NwFSNgIp89MHvzIT3Hg97rE3AuA/640?wx_fmt=png&from=appmsg)

* 英文作者名是小写开头，中文作者名是大写字母开头，强迫症要犯了！
* 英文标题截取了三个词，中文标题截取了三个“词”，这中文“词”也太长了吧！

#### 怎么办？

其实，这是由于 Better BibTeX 本身提供的默认 `citekey` 对中文拼音不友好，ZotLit 从 Better BibTeX 那里直接拿过来就成这样了。还好 Better BibTeX 对此是有解决方案的。

在 Zotero 里打开 Better BibTeX 的设置，可以看到 `citekey` 的默认值。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sJ5KQpb0HypxRFHvM9sRh6ek8h74nAOWBOLi5Bal6TLc/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SZY6UOS95xbAHegqg8DdeafYJwBpsiasLHzyYdibib0fJfVhFwg49xmnbQ/640?wx_fmt=png&from=appmsg)

这里面的 `auth.lower + shorttitle(3,3)` 就是导致中文文献笔记名太长的罪魁祸首！

> “
> 
> 设置界面底下有行叫 _“启动引用格式的 "jieba"/"pinyin" 过滤器。将消耗大量内存。“_ ，我还是不打算消耗大量内存，所以不用它。
> 
> ”

怎么办？请看下面这两个讨论提供的信息：

* https://github.com/retorquere/zotero-better-bibtex/issues/2450
* https://github.com/retorquere/zotero-better-bibtex/issues/1678

太长不看版：直接把 `citekey` 的格式改成

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`auth.transliterate.lower + shorttitle.ideographs.capitalize.select(1,3) + year`

文件名瞬间清爽了。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sbbzH9vHQ9bsmSS40SjmV8hPU1SVb5Nr7HweOZvqpdOk/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SPjRok7HY96xVeDH32bVeUAGmczbUleuCba5zvPhkfgrkZ8FEmyRttg/640?wx_fmt=png&from=appmsg)

这个方法只是把中文文献 `citekey` 里面的标题限制到三个字，如果大家有更好的分词方法请分享给我！

## 文献引用格式

文章开头的两个图片中的效果怎么实现？

先打开 ZotLit 配置，切换到 `Template` 选项卡，找到下面两个模板，点旁边的按钮生成模板文件。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s4uUgAe8QT8LwUhmdGMSagYhwFoywd7dVU5c5ZrZa-Qk/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SLAlU9UzKKKM38BdSk8Z84iaxAP7DklzlNH6yZBB8B7LbtRibshfiaXXNA/640?wx_fmt=png&from=appmsg)

这两个模板决定了在 Obsidian 笔记中用 `[@` 插入文献引用的时候会得到什么。

### 默认值的效果

如果就用默认的，当你在自己的笔记里用 `[@` 搜索一篇文献并按下回车，得到的引用按照 `Primary Markdown citation` 模板说的来。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svQhqxIUhf8Q2bI7yyrv3MAdel384bqvopVvWJVp1tPI/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21STzvjXDtrDic5xAHaQVnLVozNDiaaxGpPvIr8W9vYt3NyQjgSPQ98wUgQ/640?wx_fmt=gif&from=appmsg)

当你在笔记里用 `[@` 搜索文献后加上个 `/` 再按下回车，得到的引用就按照 `Secondary Markdown citation` 模板说的来。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s9o_wqgD6l1klCwGlUW5bqjZCtadLCaj8oznfLBWvGmc/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SxY7WPPvNYl7lU5jrxU52HRpnrgKsR1Zo0RGrpHXwrGNzxR9oA1opqQ/640?wx_fmt=gif&from=appmsg)

### 修改文献引用格式

> “
> 
> 如果你像我前面说的一样给笔记文件名加了个 `@`，那么下面的代码直接就能用。如果你的笔记文件名前面没有 `@`，请把下面代码中的 `@` 删掉。
> 
> ”

打开 `Primary Markdown citation` 这个模板，把里面的内容换成

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`` <%= it.map(lit => `[[@${lit.citekey}|(${lit.authors.first()}${lit.authors.length>1?" et al.":""}, ${lit.year?lit.year:lit.date})]]`).join("; ") %> ``

再打开 `Secondary Markdown citation` 这个模板，把里面的内容换成

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`` <%= it.map(lit => `[[@${lit.citekey}|${lit.authors.first()}${lit.authors.length>1?", et al":""}. ${lit.year?lit.year:lit.date}. ${lit.title}.]]`).join("; ") %> ``

> “
> 
> \[!tips\] 群友建议 上述模板只要超过两个作者就用第一个作者 et al，如果想要一个或两个作者全部显示，只需将上述内容的 `lit.authors.first()}${lit.authors.length>1?" et al.":""` 替换成 `lit.authorShort` 即可
> 
> ”

我知道这两句代码有点长，但效果还是不错的，先来试试。

在自己的笔记中，如果输入 `[@`，搜索一篇文献并按回车，看起来是这样。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sKf0niqrOOfrja6AqItrz1rCeR6ulupQa0An5LmwcF1c/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SNcPGlgF6PicialSFy6kichwcWEyLpB7hA6uTmpZeKYAGMReWfn1dhgP2Q/640?wx_fmt=gif&from=appmsg)

如果输入 `[@`，搜索文献，再输入 `/`，再回车，看起来是这样。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s1xSmzVmIcdqDp1BHIXSv7uWLOkpKPOk8G-T0uDmZ2kY/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SJ4rq9kVyApdibSDfAk2pFT97RqPEzdE0zlicZt4K023ORySfd3pz7mkA/640?wx_fmt=gif&from=appmsg)

有没有感觉好看一点？下面说说前面的代码是什么意思，这样一来你自己也可以修改了。

`Primary Markdown citation` 这个模板刚刚改成了

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`` <%= it.map(lit => `[[@${lit.citekey}|(${lit.authors.first()}${lit.authors.length>1?" et al.":""}, ${lit.year?lit.year:lit.date})]]`).join("; ") %> ``

它和默认值的区别主要是 `it.map(...)` 括号中的内容。

这块内容用 Wikilink 格式引用文件，并且创建别名，所以整个看起来是 `[[@${lit.citekey}|...]]`。为了把别名弄成 author-year 格式，代码里分别处理了作者名和年份：

* 取第一个作者名：`${lit.authors.first()}`
* 有多个作者就加尾巴：`${lit.authors.length>1?" et al.":""`
* 最后加上年份：`${lit.date?lit.date:lit.year}`

### 参考文献列表

如果你以为我有自动生成的参考文献列表，那你上当了 :)

下面这个图里的参考文献列表仅仅是 Markdown 脚注而已。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s_lrNImesgxDvh_yIAiN4lPeq5AZ_y1b8XSm5dMv92Bs/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfM1SzrbDTj2eTjtX32pia21Sicrv1daXu4xsk2ibcvrvuvcHmK4HFJxfZv74gesiaSLhSfuIO3sOvjOog/640?wx_fmt=gif&from=appmsg)

## 文献笔记内容

ZotLit 导出的文献笔记也可以做的很好看，只要修改 `Template` 选项卡中的 `Note content` 模板就可以，大家可以自己探索！

下面分享一下我自己的简单配置，效果如下。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s1OkDN5d-t-pQclosXNeHb_1YTb-aPvfXVQFmtSBIy68/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfM1SzrbDTj2eTjtX32pia21SAORQ0AGxU0ZSfiaE7INWlvP1qvJTPs6XxTpRjXZgok5hhics7SZ7e06w/640?wx_fmt=png&from=appmsg)

我的模板文件如下。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`` # <%= it.title %>> [!INFO]> - **Authors**: <%=it.authors.map(author => `[[${author}]]`).join(', ')%>> - **Date**: <%= it.date ?? it.year %>> - **DOI**: <%= it.DOI %>> - **Groups**: <%= it.collections %>> - **Tags**: <%=it.tags.map(tag => '#' + tag.toString().replaceAll(' ', '-')).join(', ')%>> - **Links**：[Zotero](<%= it.backlink %>)<% it.notes.forEach(note => { -%><%= `${note}` %><% }) %># 注释<%~ include("annots", it.annotations) %> ``

简单解释一下。

* 文献题目直接作为标题，前面加上 Markdown 一级标题标记 `#`。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`# <%= it.title %>`

> “
> 
> 除了 `<%` 和 `%>` 之间的内容被解释为 Eta 代码，其他都是原样输出到文献笔记。
> 
> ”

* 元信息放在高亮块里面。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`> [!INFO]`

> “
> 
> 可以去掉，或者换成 Admonitions。
> 
> ”

* 作者名逐个输出，用逗号加空格分隔，每个名字都改成 Obsidian 链接。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`` > - **Authors**: <%=it.authors.map(author => `[[${author}]]`).join(', ')%> ``

> “
> 
> 直接输出作者列表用 `<%= it.authors %>`。这里是一段包裹在 `<%=` 和 `%>` 之间的 JavaScript 代码。
> 
> ”

* 日期从 Zotero 条目的 `date` 或 `year` 获取，优先选 `date`。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`> - **Date**: <%= it.year ?? it.date %>`

* Tags 输出时加上 `#`，并且把空格换成 `-`，这样就成了 Obsidian tags。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sMan2JF1nMnaDa01x504xOsqZvXlBrBEQSZBSLd5EhrQ/https://mmbiz.qpic.cn/mmbiz_svg/ic3ibEjvYaKJxBj47ccnYYvUyBUDMm4Bvkx7bPl8zfT5Oun3WDlgDXKOBGox5HYTc7K5JYfZm6Mok5ygcCgq3nPuovYQhibQUFt/640?wx_fmt=svg&from=appmsg)`> - **Tags**: <%=it.tags.map(tag => '#' + tag.toString().replaceAll(' ', '-')).join(', ')%>`

**往期精彩**

* [个性化知识管理 | 使用 Obsidian 打造独特的个人图书馆](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484964&idx=1&sn=2f0555db5a927717b187372d26a277fd&chksm=c2adfd43f5da7455c043c4a6785124c1af48e051bcaae1b2d342cad7998834ec2db60fe97558&scene=21#wechat%5Fredirect)
* [软件联动的硬核工作流！自定义 Excalidraw 脚本，在建立库外 Eagle 素材库的连接](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484870&idx=1&sn=8a3834aed35e3987ae59885cebfb0cfe&chksm=c2adfea1f5da77b7ce69ae97b76082b9af7c3652d25b606972de17a5a0a0d54686a8ffd1191d&scene=21#wechat%5Fredirect)
* [高效工作流 | 构建跨平台思维空间：Obsidian 三端同步指南（Win、Android、iPad）](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484887&idx=1&sn=9cf9ca057af19ff09882f89b121ad5c6&chksm=c2adfeb0f5da77a642d3bcde72a913337d0bb4c325212d465bf2089c4a6bfac2dca8ae8dba38&scene=21#wechat%5Fredirect)
* [Obsidian中关于附件管理的思考](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkzNTUyMTgwMA==&mid=2247484624&idx=1&sn=092774ab2e690f3598957944bd7bb108&chksm=c2adffb7f5da76a123a677e946aa6682a837df165756bbb33f0dbfc26a0fc83d27e7f4970b14&scene=21#wechat%5Fredirect)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sguOUFLamLG6AckIuOlqibizq3_dLAX1E6ZcDAx30HHc/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4FahVknzZOtyialibXqJ7HCvy2hmB305FQK9o5TOmCuVSywLzE16zOjibQ/640?wx_fmt=gif)

**求分享**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sguOUFLamLG6AckIuOlqibizq3_dLAX1E6ZcDAx30HHc/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4FahVknzZOtyialibXqJ7HCvy2hmB305FQK9o5TOmCuVSywLzE16zOjibQ/640?wx_fmt=gif)

**求点赞**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sguOUFLamLG6AckIuOlqibizq3_dLAX1E6ZcDAx30HHc/https://mmbiz.qpic.cn/sz_mmbiz_gif/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4FahVknzZOtyialibXqJ7HCvy2hmB305FQK9o5TOmCuVSywLzE16zOjibQ/640?wx_fmt=gif)

**求在看**

end  

如有任何问题，加入PKMer群聊联系交流：

![](https://proxy-prod.omnivore-image-cache.app/0x0,sjt01iZ_gv1vFdz3VEZNy4_qs0XjL1Bx5s81DW6JexOI/https://mmbiz.qpic.cn/sz_mmbiz_png/epTcXdtRjfMgAA4zSBvibMChFC6dt45G4dynCwEv94dWatxcPGTAqHhlvPDuPWa5eud7nPmASaoUZALW2TIkmgg/640?wx_fmt=png)

**QQ群｜825255377**

**PKMer官网：https://pkmer.cn/**



