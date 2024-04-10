---
id: b54bc2c1-ff0e-4b6b-a964-a23d7ede085a
url: https://zhuanlan.zhihu.com/p/609413004
title: |
  给ChatGPT施咒，让它为你制作Anki卡片——Prompt工程案例 - 知乎
author: |
  Thoughts Memo​信息技术行业 算法工程师
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/ChatGpt
  - 400兴趣类/Obsidian/Plugin/同步/Anki
  - todo
state: false
date: 2024-03-22 11:08:37
---


# 给ChatGPT施咒，让它为你制作Anki卡片——Prompt工程案例 - 知乎
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-zhuanlan-zhihu-com-p-609413004-18e6421a8a4)
[Read Original](https://zhuanlan.zhihu.com/p/609413004)

Chain-of-Thought (CoT) Prompting

今天本来打算休息，但实在管不住自己这双手。很久没有写原创了，今天就分享一下最近折腾 ChatGPT 的一些心得。

之前有看我这篇《[ChatGPT 出现后，那些靠知识记忆取胜的教育模式会被颠覆吗？](https://www.zhihu.com/question/583015287/answer/2901234936)》回答的朋友，应该对 ChatGPT 制作的抽认卡印象深刻：

![](https://proxy-prod.omnivore-image-cache.app/815x605,sQimWbHDtmRlgB9hjB6mNmK8IFQlH2olDdp8j_xAUSy0/https://pic1.zhimg.com/v2-e275a9326c568ec03be093eefa980818_b.jpg)

大家可能会好奇，我是如何让 ChatGPT 学会制作抽认卡的。这里我就结合一些 Prompt 工程\*的初步技巧，让大家看看如何一步步引导 ChatGPT 完成你提供的任务。

> Prompt 是为了让语言模型实现预期任务所提供的指令和背景信息。  
> Prompt 工程是开发和优化 Prompt 的实践，可以帮助我们更有效地利用语言模型完成各种任务。

## Basic Prompt 1

首先，想要让 ChatGPT 制作抽认卡，大家最先想到的 Prompt 是什么呢？从最简单的开始：

我：balabalabala（一段文本）。请帮我把上述文本制作成抽认卡。

然而，这个 Prompt 的效果不佳：

![](https://proxy-prod.omnivore-image-cache.app/811x524,sJ8HCJTWX7elBkbgD6I8ifToF3po0wcSmGPQMXHusNGY/https://pic2.zhimg.com/v2-cadbcb81e4cc8e3ddd6ad1d6295d54d1_b.jpg)

ChatGPT 显然没搞懂我是想要从文本中制作多张抽认卡。而且它做的卡片的回答也巨长无比，违反了最小信息原则，根本没法记。

## Basic Prompt 2

那该怎么办？直觉告诉我，先加上量词再说：

![](https://proxy-prod.omnivore-image-cache.app/794x860,s1BsFNu4yw3OV7ZOt0u2IQ3KqN6R-vz_XZeUnE-ULYJk/https://pic2.zhimg.com/v2-ba69078823c04618a39bcb49bf9b598d_b.jpg)

效果好多了！看来 ChatGPT 真的懂什么叫做抽认卡。但是它制作的卡片还是有不少缺点，特别是卡片 3，答案太长了，很难记忆。让我们继续改进，增加一些对抽认卡的要求：

![](https://proxy-prod.omnivore-image-cache.app/1428x585,sD7steiSn7pChhIO5zdgoFvwPKir_bhwPHw_SEpKIrrY/https://pic1.zhimg.com/v2-e86a252cff931595c612b15bccc353d4_b.jpg)

果然，答案比之前更简短了，不会重复题干中的废话。可能有些朋友觉得已经够用了，但我认为还有改进的空间。

怎么做？给一些例子让 ChatGPT 学习！

## Few-shot prompts

我很久以前在翻译 SuperMemo 的 20 条制卡原则时，曾经自己本土化了一条例子：

![](https://proxy-prod.omnivore-image-cache.app/995x926,sK9J1awWC5AJcvf9xep9alsDhHk3XgWZGLz1OuhEuvqE/https://pic3.zhimg.com/v2-ab1cbe630443714f8a6a4a53d52be33e_b.jpg)

试试把这个例子教给 ChatGPT：

```angelscript
请根据我提供的文本，制作一套抽认卡。

在制作抽认卡时，请遵循下述要求：
- 保持抽认卡的简单、清晰，并集中于最重要的信息。
- 确保问题是具体的、不含糊的。
- 使用清晰和简洁的语言。使用简单而直接的语言，使卡片易于阅读和理解。
- 答案应该只包含一个关键的事实/名称/概念/术语。

文本：
衰老细胞的特征是细胞内的水分减少，结果使细胞萎缩，体积变小，细胞代谢的速率减慢。细胞内多种酶的活性降低。细胞核的体积增大，核膜内折，染色质收缩、染色加深。细胞膜通透性改变，使物质运输功能降低。
一套卡片：
卡片1：
问题：衰老细胞的体积会怎么变化？
答案：变小。
卡片2：
问题：衰老细胞的体积变化的具体表现是什么？
答案：细胞萎缩。
卡片3：
问题：衰老细胞的体积变化原因是什么？
答案：细胞内的水分减少。
卡片4：
问题：衰老细胞内的水分变化对细胞代谢的影响是什么？
答案：细胞代谢的速率减慢。 
卡片5：
问题：衰老细胞内的酶活性如何变化？
答案：活性降低。
卡片6：
问题：衰老细胞的细胞核体积如何变化？
答案：体积变大。
卡片7：
问题：衰老细胞的细胞核的核膜如何变化？
答案：核膜内折。 
卡片8：
问题：衰老细胞的细胞核的染色质如何变化？
答案：染色质收缩。
卡片9：
问题：衰老细胞的细胞核的染色质变化对细胞核形态的影响是？
答案：染色加深。
卡片10：
问题：衰老细胞的物质运输功能如何变化？
答案：物质运输功能降低。
卡片11：
问题：衰老细胞的物质运输功能为何变化？
答案：细胞膜通透性改变。

文本：
  教育心理学是心理科学与教育科学相交叉的产物，它的产生是由于心理科学与教育科学发展的需要。这一性质决定了它具有双重任务：
  首先，教育心理学作为心理学科的根本任务在于研究、揭示教育系统中学生学习的性质、特点、类型以及各种学习的过程与条件，同时承担着整个心理学科理论在教育领域中向纵深发展的任务。
  其次，教育心理学作为一门教育学科的根本任务在于研究如何应用学生的学习及其规律去设计教育、改革教育体制、优化教育系统，以提高教育效能、加速人才培养的心理学原则。
  这两个任务一个是理论建设任务，一个是实践指导任务。需要说明的是，这两个方面的任务是彼此统一、互相促进的。
一套卡片：
```

不负重望，ChatGPT 学会了，还多制作出了两张卡片，让问题更加全面：

![](https://proxy-prod.omnivore-image-cache.app/797x701,sld4_XALVHu513KY8nsqz3dZvqCghq7np7by_0awCCqs/https://pic1.zhimg.com/v2-b7be4a0a50fee13bb29d55f4988ffdbc_b.jpg)

但是 ChatGPT 的卡片 3 还是把「双重任务」搞复杂了。还能继续改进吗？

## Chain-of-Thought (CoT) Prompting

别忘了，ChatGPT 还有思维链的能力，可以做一些推理。因此，我们也可以教他一步一步制作抽认卡，以满足我们的要求（为了避免文本太长，我把 Few-shot 的例子移除了，也方便大家观察 CoT 的独立效果）：

```asciidoc
请根据我提供的文本，制作一套抽认卡。

在制作抽认卡时，请遵循下述要求：
- 保持抽认卡的简单、清晰，并集中于最重要的信息。
- 确保问题是具体的、不含糊的。
- 使用清晰和简洁的语言。使用简单而直接的语言，使卡片易于阅读和理解。
- 答案应该只包含一个关键的事实/名称/概念/术语。

制作抽认卡时，让我们一步一步来：
第一步，使用简单的中文改写内容，同时保留其原来的意思。
第二步，将内容分成几个小节，每个小节专注于一个要点。
第三步，利用小节来生成多张抽认卡，对于超过 15 个字的小节，先进行拆分和概括，再制作抽认卡。

文本：
  教育心理学是心理科学与教育科学相交叉的产物，它的产生是由于心理科学与教育科学发展的需要。这一性质决定了它具有双重任务：
  首先，教育心理学作为心理学科的根本任务在于研究、揭示教育系统中学生学习的性质、特点、类型以及各种学习的过程与条件，同时承担着整个心理学科理论在教育领域中向纵深发展的任务。
  其次，教育心理学作为一门教育学科的根本任务在于研究如何应用学生的学习及其规律去设计教育、改革教育体制、优化教育系统，以提高教育效能、加速人才培养的心理学原则。
  这两个任务一个是理论建设任务，一个是实践指导任务。需要说明的是，这两个方面的任务是彼此统一、互相促进的。
一套卡片：
```

现在 ChatGPT 懂得在制卡的过程中概括内容，避免答案过长了：

![](https://proxy-prod.omnivore-image-cache.app/809x620,sT-mhzhwbbrXYPk5BmfPIaFt5jMRHyqTa9-zAB42rqVU/https://pic1.zhimg.com/v2-55283225adeadd97c54bae12e3796afc_b.jpg)

还可以更好吗？我把 Few-shot 和 Chain-of-Thought 一起应用，得到了以下结果：

![](https://proxy-prod.omnivore-image-cache.app/791x662,sfZcKndmN9_j28Pf7Q4GYzn4p4bFqj69quu9kQjPv2kg/https://pic2.zhimg.com/v2-ac2b8e41e345cf06de17bc162ed7d7f9_b.jpg)

感觉比最初的卡片好多了！不仅搞清楚了「两个任务」，同时也把「作为教育学科」和「作为心理学科」给拆分了出来。当然，这个 Prompt 还可以继续改进，这个任务就交给大家咯。

> 补充说明：经朋友测试，将输入文本的分段全部删去，让所有句子连成一段，对 ChatGPT 生成结果有提升。

![](https://proxy-prod.omnivore-image-cache.app/742x459,sV_U9TQ60QMwPYIofzvUMPHtguj__ZTo9fMlSNcimF90/https://pic2.zhimg.com/v2-8fbaabbe1d0cfaeadd3ea84a2d7f8779_b.jpg)

> 继续补充，如果把最后一个「一套卡片：」从 prompt 中删去，ChatGPT 就会自由发挥，制作多套卡片：

![](https://proxy-prod.omnivore-image-cache.app/807x811,sr_ivuDcIho6ZBAr2cYWU8zQYo_rcZuPtlN8NNlDlBB8/https://pic2.zhimg.com/v2-55b999b25e0ab48ea101ad28ac339bc5_b.jpg)

## 调整输出格式

那你是怎么做到让 ChatGPT 输出表格的？其实很简单，在 Chain-of-Thought 中多加一步，让 ChatGPT 按照指定格式输出即可。或者在 Few-shot 里，把例子改成你想要的输出格式。

```gherkin
请根据我提供的文本，制作一套抽认卡。

在制作抽认卡时，请遵循下述要求：
- 保持抽认卡的简单、清晰，并集中于最重要的信息。
- 确保问题是具体的、不含糊的。
- 使用清晰和简洁的语言。使用简单而直接的语言，使卡片易于阅读和理解。
- 答案应该只包含一个关键的事实/名称/概念/术语。

制作抽认卡时，让我们一步一步来：
第一步，使用简单的中文改写内容，同时保留其原来的意思。
第二步，将内容分成几个小节，每个小节专注于一个要点。
第三步，利用小节来生成多张抽认卡，对于超过 15 个字的小节，先进行拆分和概括，再制作抽认卡。

文本：
衰老细胞的特征是细胞内的水分减少，结果使细胞萎缩，体积变小，细胞代谢的速率减慢。细胞内多种酶的活性降低。细胞核的体积增大，核膜内折，染色质收缩、染色加深。细胞膜通透性改变，使物质运输功能降低。
一套卡片：
| 问题 | 答案 |
|---|---|
|衰老细胞的体积会怎么变化？|变小。|
|衰老细胞的体积变化的具体表现是什么？|细胞萎缩。|
|衰老细胞的体积变化原因是什么？|细胞内的水分减少。|
|衰老细胞内的水分变化对细胞代谢的影响是什么？|细胞代谢的速率减慢。 |
|衰老细胞内的酶活性如何变化？|活性降低。|
|衰老细胞的细胞核体积如何变化？|体积变大。|
|衰老细胞的细胞核的核膜如何变化？|核膜内折。 |
|衰老细胞的细胞核的染色质如何变化？|染色质收缩。|
|衰老细胞的细胞核的染色质变化对细胞核形态的影响是？|染色加深。|
|衰老细胞的物质运输功能如何变化？|物质运输功能降低。|
|衰老细胞的物质运输功能为何变化？|细胞膜通透性改变。|

文本：
  教育心理学是心理科学与教育科学相交叉的产物，它的产生是由于心理科学与教育科学发展的需要。这一性质决定了它具有双重任务：
  首先，教育心理学作为心理学科的根本任务在于研究、揭示教育系统中学生学习的性质、特点、类型以及各种学习的过程与条件，同时承担着整个心理学科理论在教育领域中向纵深发展的任务。
  其次，教育心理学作为一门教育学科的根本任务在于研究如何应用学生的学习及其规律去设计教育、改革教育体制、优化教育系统，以提高教育效能、加速人才培养的心理学原则。
  这两个任务一个是理论建设任务，一个是实践指导任务。需要说明的是，这两个方面的任务是彼此统一、互相促进的。
一套卡片：
```

然后 ChatGPT 就学会了：

![](https://proxy-prod.omnivore-image-cache.app/805x390,s8oQm3og9DW5yZJEsqb2dIWqvPJfGQLFbVOlSyYw6Qhw/https://pic3.zhimg.com/v2-71db6c6a9403349d0f919f3b9a127e3a_b.jpg)

## 导入 Anki

既然 ChatGPT 制卡这么智能，把这些卡片放到 Anki 里，总不能一张一张复制粘贴吧？这该有多蠢。

其实很多人都不知道，Anki 是可以导入 csv 表格文件的。而 ChatGPT 输出的表格是可以直接粘贴到 Excel/WPS 里的！

![](https://proxy-prod.omnivore-image-cache.app/440x1220,siRq_XA_pkF5cfVjFHnMIR5vJDZJdtQBVJpLF1f1huVk/https://pic4.zhimg.com/v2-d2938b140c7dfa407718d37145739ad3_b.jpg)

然后保存为 .csv 格式：

![](https://proxy-prod.omnivore-image-cache.app/1600x896,soXZ4WvO1wFDxdIvThPDhkoFv0-jgoMfqIbXkD8X4EYo/https://pic2.zhimg.com/v2-512e7cdad4069c980c5b2dc141b5d371_b.jpg)

打开 Anki，选择导入：

![](https://proxy-prod.omnivore-image-cache.app/331x161,snOesslRu6v6f6fRs15NHuQ90p3mnj-AvzK_zi82K88M/https://pic2.zhimg.com/v2-8ffe5d2c47b594726d2c5cee2bee4059_b.jpg)

打开刚才保存的 .csv 表格文件，然后选择 Basic（问答题）模板，选好目标牌组，点击导入即可：

![](https://proxy-prod.omnivore-image-cache.app/800x828,sD_sJVph0ZYoptQ8Ro55rynkhnp2Pfn7d16AedjVSfa4/https://pic3.zhimg.com/v2-ea7edce5fbbcc720f6ecc58ccb9cf6ee_b.jpg)

最终效果：

![](https://proxy-prod.omnivore-image-cache.app/825x565,sYAgdlAIbi8e1HEEj-zQGSrkVNCMGpXWNAGIEk_WfIbA/https://pic2.zhimg.com/v2-ca12cc5a1647b62c3a9b743cd7990599_b.jpg)

希望以上内容对你有所帮助。

## 参考资料

Prompt 工程指南：

制卡原则：

Anki 使用教程：

顺便推一下我为 Anki 写的复习算法：



