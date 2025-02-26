---
id: 91a705d4-14c8-4153-aae6-323553397efc
url: https://mp.weixin.qq.com/s/ZJy6-fhtj9WlJQ5ndEXfBw
title: |
  这是 Obsidian 中最全的热力图配置教程了（一）
author: |
  vran
source: 微信公众号
dtype: 插件
tags:
  - 400兴趣类/Obsidian/Plugin/编辑
banner: https://source.unsplash.com/900x1600/?
state: true
date: 2024-03-25 10:04:29
created: 2024-03-25T17:33
updated: 2024-04-13T12:49
---


# 这是 Obsidian 中最全的热力图配置教程了（一）
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-z-jy-6-fhtj-9-wl-jq-5-nd-e-xf-bw-18e735a0467)
[Read Original](https://mp.weixin.qq.com/s/ZJy6-fhtj9WlJQ5ndEXfBw)

原创 vran  vran _2024-02-25 18:49_ _上海_ 

历时两个多月，热力图插件 Contribution Graph 终于是上架到了官方插件市场，也是时候出一份更加完整的教程了。

教程分为两部分

* **第一篇是入门篇**，也就是本篇，主要是讲解如何通过界面操作来为笔记、任务生成热力图，也包含一些通过修改生成的代码块内容来个性化热力图的小技巧。
* **第二篇是进阶篇**，主要是讲解如何通过 dataviewJs 来基于自定义的数据生成热力图，这部分涉及到编程，门槛较高，但上限也是最高的。

> 在此我特别邀请你加入我创建的 obsidian 群，与我沟通你的想法或遇到的问题，在公众号内回复 **obsidian 加群** 即可获得加入方式。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sAs86EzxTqTJnADn21qciydC0GuVR3HRnbIS-RGUq8iA/https://mmbiz.qpic.cn/sz_mmbiz_jpg/amNzwarODHiafsYxaNLBCu7HLjPYmprlnhPC443Dk1CWn0OojvoiavSMQrlhzW91mWTAes16hYERaDPZ58yu9z6A/640?wx_fmt=jpeg&from=appmsg)

## 内容大纲

* 这个插件有什么用？
* 如何安装？
* 如何使用？
* 【案例】基于文档来生成热力图
   * 为日记生成热力图
   * 基于阅读时长来生成热力图
   * 基于项目的完成时间来生成热力图
* 【案例】基于任务来生成热力图
   * 统计所有日记中已完成的任务，按日记时间生成热力图
   * 根据任务的完成时间来统计已完成的任务，并生成热力图
   * 基于任务的完成分数来生成热力图
* 样式美化
* 样式美化（隐藏技巧）
* 总结

> 可以先收藏再看，随时按需查阅

## 这个插件有什么用？

Contribution Graph 是 Obsidian 笔记软件的一款热力图插件，它可以基于你的笔记数据来自动的生成热力图，支持 Git 风格热力图、月热力图、日历热力图等多种风格。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHsHxt6MQ2rPqLSWEgj4p7YXQJkzBVRnB7uR_Bu6HDpU/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnEdjksfqKWbcT4soDRlfY6FrNJ36TibJWYicPq0b2aqhmQFfjGQVEzgBg/640?wx_fmt=png&from=appmsg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sICb6IcBfNu9eVAXIcHZnXhTfJIpvxKabD2PvYpGgIPo/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnmprIm6spL7UQDYOGQm4Q6eLxkKibViccricdtAWgrfC0T1AwbbsEEF0aA/640?wx_fmt=png&from=appmsg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,smQ49asnlF6e8ctz5-V29MSO_CZvWHMsMd5R9Buq5Zm4/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnD2XE02y1DBeLicZiaaZDSleCDKqsYNEOEMeQJNWqyOUgAB5QCWgl3Sqg/640?wx_fmt=png&from=appmsg)

在热力图中，每一个单元格代表一天，颜色的深浅是由数据决定的，举几个例子

* 我们可以统计自己每天创建的带 #project 标签的文档来生成热力图，单元格的颜色深浅就是由当天创建的文件数量所决定的，越多越深
* 我们可以统计自己每天完成的任务数量来生成热力图，单元格的颜色深浅是由当天完成的任务数量所决定的
* 如果我们通过日记记录了自己每天的体重，我们也可以为自己生成一份体重热力图，那么单元格的颜色深浅就是由当天的体重值决定的
* 其它的场景，比如**每天喝水的杯数**，**每天阅读的时长**、**每天情绪的分数**等数据也可以用热力图来展示

## 如何安装

> \[!info\] 注意 本插件依赖 `dataview` 插件做数据分析，所以请确保同时安装 `dataview` 插件

目前有三种安装方式，请按需选择

**一、官方插件市场安装**

在社区插件时长中搜索 `contribution` 关键词，然后找到 Contribution Graph 点击安装

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sI055brRz3HtP8BcFZTVD8oNsONhAs67SQHJatdk711Q/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnic0hrJRCvdrYWeMWAnh53z249wqeGxHcq5Vk0ibHaP5Cpob6ZYppyjYQ/640?wx_fmt=png&from=appmsg)

**二、通过 Github 安装**  

下载地址：https://github.com/vran-dev/obsidian-contribution-graph/releases

在 Release 页面选择一个最新的版本，分别下载 `main.js`、`manifest.json`、`styles.css` 三个文件

> \[!TIPS\]
> 
> 1. 首先进入你笔记所在的文件目录中
> 2. 然后在笔记目录中找到 .obsidian 文件夹，进入其中
> 3. 再找到 plugins 目录，如果没有的话就新建一个，进入其中
> 4. 在 plugins 目录下创建一个 contribution-graph 目录
> 5. 最后将 main.js，manifest.json，styles.css 三个文件放进前面创建的 contribution-graph 目录下
> 6. 回到 obsidian 中，刷新已安装插件列表，启用 contribution-graph 即可

**三、通过国内云盘安装**

在公众号回复 `Obsidian 插件` 关键词就能获得插件云盘地址，然后采用与上面一样的步骤进行安装即可。

如果你有任何疑问或建议，也可以通过在公众号内回复 `obsidian 加群` 来加入我的插件群进行沟通和反馈。

## 如何使用

插件安装完成并启用以后，我们创建一个新的笔记，在笔记中点击右键就能看到 `新建热力图` 的菜单

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sZaLxKJo1Urt4NZxJ60mui8WIQTUYXyoxpE4TIbpdJGk/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnrKRzlZdS7ZibX5UR3kaeRttuYbg9PDZO249If6gclAsJaUL9X0yCW4A/640?wx_fmt=png&from=appmsg)

点击该按钮就会弹出一个配置页面  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sQ5UEHkd3D3QJKA6C0LokB7Wk7hns31E4UaF7cUbRtWI/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnTonB5HA2Q0A5rwUmennfb1IAWp1NjrI6iaHkYbOrpkvghpKDaESOAhg/640?wx_fmt=png&from=appmsg)

这里会出现很多选项，但是请不用害怕，因为即使你什么都不填也能创建出来热力图。

每个配置项的作用我列在了表格里，记得划线收藏，便于随时查阅

| 选项                                                                                                                   | 说明                                                                                                              |
| -------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------- |
| 标题                                                                                                                   | 热力图的标题，会在热力图上方显示，支持配置居左、居中、居右，也支持配置字体大小                                                                         |
| 图表类型                                                                                                                 | 热力图的风格，支持 Git 风格、月追踪视图、日历视图等，可以参考前文的图片                                                                          |
| 日期范围                                                                                                                 | 热力图是由某个时间段内的数据生成的，**日期范围**就表示某个时间内，支持配置最近几天、固定日期、最近几个整月、最近几个整年等                                                 |
| | **最近几天**：从今天开始倒推 n 天，比如今天是 2/25 号，那么最近 25 天就表示 2/1 \~ 2/25 这个时间段                                                   |                                                                                                                 |
| | **固定日期**：填写一个固定的开始日期和固定的截止日期                                                                                       |                                                                                                                 |
| | **最近几个整月**：根据填写的值，系统会自动生成一个开始日期是**月初**，结束日期是**月末**的时间段，比如今天是 1/25 号，如果填写 1 个整月，那么时间段就是 1/1\~1/31                   |                                                                                                                 |
| | **最近几个整年**：根据填写的值，系统会自动生成一个开始日期是**年初**，结束日期是**年末**的时间段，假如今天是 2024/1/25 号，如果填写 1 个整年，那么时间段就是 2024/1/1 \~ 2024/12/31 |                                                                                                                 |
| 来源                                                                                                                   | 代表数据来源，目前支持文档、所有任务、指定文档中的任务 3 个选项                                                                               |
| | **文档**：文档即 obsidian 中的笔记文件                                                                                         |                                                                                                                 |
| | **所有任务**：整个 obsidian 库的 task                                                                                       |                                                                                                                 |
| | **指定文档中的任务**：某些文档中的 task                                                                                           |                                                                                                                 |
| 来源值                                                                                                                  | 值的填写采用dataview的语法规则，比如 #project 表示查询带有 project 标签的文档、"2023 复盘" 表示查询 2023 复盘 目录下的文档（记得带双引号），还支持并且和或的关系组合，可以参考文档。 |
| 日期字段                                                                                                                 | 决定数据会落在哪个单元格上，支持文件创建时间、文件修改时间、自定义属性、文件名等方式                                                                      |
| 日期格式                                                                                                                 | 这是为了让系统识别出来你的**日期字段**的格式，通常来说默认的自动识别就足够了                                                                        |
| 打分属性                                                                                                                 | 该值决定了单元格的颜色深浅，默认情况下是对应日期的笔记（或任务）总数量，你也可以指定为笔记的属性，比如 noteCount。也可以是任务的内联属性，该属性的值最好是一个数字                          |

## 案例：基于文档来生成热力图

* 一、为日记生成热力图
* 二、基于阅读时长来生成图表
* 三、基于项目的完成时间生成热力图

### 一、为日记生成热力图

**目标**：希望通过热力图能看到最近 1 年内，哪天写了日记，哪天没写

**已知**

* 可能同一天创建几天的日记，然后补上内容
* 日记都保存在 `journal` 目录下

**实现**

1. 【可选】填写标题日记
2. 日期范围选择 `最近几天`，值填写 365
3. 来源选择 `文档`，值填写 `"journal"` 表示统计 journal 目录下的笔记
4. 日期字段选择 `文件名称`

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHQqrSQRuUW82amzNbDOKnVb38hJQ_vOe8GWaH6FfIWg/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln4QntqHAbkNtDttTSLXy8CrGS7qY9mTCGZh62hlUgNbxLkFn6gMlxFA/640?wx_fmt=png&from=appmsg)

最终的效果

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,suMr6AyqSSLKL_zGXB-cQJZH_X-t4RoyKDgeBxUZ4RkI/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnorputK5iaZDkpC4VCeuiaOkvFCfl12CjoOunT7YKWDvPabUMJKZ5sdfA/640?wx_fmt=png&from=appmsg)

点击单元格就能看到对应的日记数据

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sYDSRzllmAwtMqKKyb_GTgsUKpRfK71MOEp-yAXTLZgE/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnCicViajeTGmfvBs25JMQkwqR7BSiaI7VA403yvVD61AkXkPlhTnHS4dcA/640?wx_fmt=png&from=appmsg)

### 二、基于阅读时长来生成热力图

**目标**

* 基于日记中记录的阅读时长来生成热力图
* 按 20 分钟为一个等级对单元格颜色进行区分，比如 0\~20 为浅绿、21\~40 为绿色，40\~60 为深绿等

**已知**

* 日记笔记中有一个 `阅读时长` 的属性，该属性值是一个数字，单位是分钟
* 我们会每天手动记录自己的阅读时长

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sQiXdXifuj4FjBwQv69wXhy430wpAvUsq9-utiWroxl0/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnXm4eNTWN5EhefNddiclR2agebGAhibR1xwwbiafTIGJRj65eOfRshaTiaQ/640?wx_fmt=png&from=appmsg)

**实现**

1. 【可选】填写标题：阅读热力图
2. 日期范围选择 `最近几天`，值填写 365
3. 来源选择 `文档`，值填写 `"journal"` 表示统计 journal 目录下的笔记
4. 日期字段选择 `文件名称`
5. 打分属性填写 `阅读时长`

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sE8dE0A0RPvXvPuV7bY1tu9QmTsmIysQBkj9_ZzPSuP0/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln9iackUGpvZIGJAcLjsbdAGfabNuDxlP5XNbha326MIfRtnSPhZ84pMw/640?wx_fmt=png&from=appmsg)

在 **样式设置/单元格样式规则** 中设置颜色规则

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sqGqhVNvcp24sVZ8RZ0koWn1MgFP6m5GkEYIlmkqCE28/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnxvm42niaiayEmem2WwfItd9mDvSlcqGDkAkaBg0EmGzrze6Q6THwdsGg/640?wx_fmt=png&from=appmsg)

最终效果

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,soWU2FcmVPc03uJLJ_8xqU39Lugr1304MFtUoXsE4ccI/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnWDUSOb6RsKOx9ib2el6lhRUyKaBGxicLwrKPUBibLvO4db1a5uR0iaYicFw/640?wx_fmt=png&from=appmsg)

### 三、基于项目的完成时间生成热力图

**目标**

* 基于项目笔记的完成时间来生成一个月追踪视图的热力图

**已知**

* 一个文档代表一个项目
* 每个项目文档都有 `doneTime` 属性，代表完成时间
* 每个项目文档都有 `#project` 标签
* `doneTime` 是一个标准的日期格式

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s80bsd6uEXTOUPTsFeEBnDzWM3hgTudYmZTr6fdWkgOU/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln8K5LtEkdesaclV5Ddia8kUPylMEbkwicnzh8ibTEIqZHaIKPjrnicNQacA/640?wx_fmt=png&from=appmsg)

**实现**

1. 【可选】填写标题：项目热力图
2. 视图类型选择**月追踪视图**
3. 日期范围选择 `最近几天`，值填写 365
4. 来源选择 `文档`，值填写 `#project` 表示统计有 #project 标签的笔记
5. 日期字段选择 `指定文档属性`，值填写 **doneTime**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,smxdZusqBq1gTTcfugmywJ78MQEDgm8pZRp2VZwjP1Qo/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlncLbrf2RVTjwK8NT3q1glpbN35IiaKeLZIxoYQbFqtCOXs0ghxibkfVVQ/640?wx_fmt=png&from=appmsg)

效果如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s1m7aklqN3HZtLySNI0gyZdzho3MFcDA8uBHkQCoT6jA/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln1ZvVhJxlSDIkKnCxOaATO7MS4WWQO9ibR8TVeib4gV5BrGMvveOb6CFw/640?wx_fmt=png&from=appmsg)

同样的，点击单元格就能查看到关联的笔记数据，点击标题还能跳转到对应的页面中

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sl_K3fy2gDEHck9YGgh_7InEtE76y_8UO1NSmt7DSLFc/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln0W6uCaaRbp8op2OtWnhe4Asdm465cXbwSFj4rm1RAu7utsq8m4g10g/640?wx_fmt=png&from=appmsg)

## 案例：基于任务来生成热力图

统计任务数据来生成热力图要复杂一些，不过复杂程度也就是额外的 1 分钟。

任务里引入了一个内联属性的概念，它是由 dataview 框架定义的，目的是为了实现更加多样化的任务检索能力，内敛属性由中括号（\[\]) 包起来，属性的名称通过双冒号（::）分隔，比如

* \[分数::80\] 表示属性名为 `分数`，属性值为 `80`
* \[阅读时间::30\] 表示属性名为 `阅读时间`，属性值为 `30`

在任务中结合内联属性，我们可以基于 dataview 实现进度查询、分数统计、时间筛选等，比如

* \[x\] 完成一次 30 分钟的锻炼 \[进度::80\] \[completion:: 2024-02-24\]
* \[ \] 每天 8 杯水喝水 \[杯数::6\]

了解完内联属性后，我们就可以放心的进入案例演示环节了

### 统计所有日记中已完成的任务，按日记时间生成热力图

**目标**：希望通过热力图展示自己每天的任务完成数

**已知**

* 以日记为核心工作流
* 所有的日记都在 journal 目录下，并且都有 #journal 标签
* 每天都会在日记里创建和完成任务

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,smlcbF03yGHVmQc8_acrDWc1Uals3uxq3sElCE-MDkLw/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnD1Betu2S2k26wCwP0ycEREhRMlgX9qkPibVhDaicqr4hWn14lN2XQUVQ/640?wx_fmt=png&from=appmsg)

**实现**

1. 日期范围选择 `最近几天`，值填写 365
2. 来源选择 `指定文档中的任务`，值填写 `#journal and "journal"` 表示统计 journal 目录下带有 journal 标签的文件内的任务
3. 筛选一下状态，我们这里选择 `已完成（包含子任务）`
4. 日期字段选择 `文件名称`

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s8e-yxV6XIyiWvkFE_YhbWn-D3LGhrJy4-RrQyad_Wm0/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnQlGwd3EcMx8KvHFYHPdxbfXxnzk7eONuibeWnPDzYykHy9mZRqmiasBw/640?wx_fmt=png&from=appmsg)

最终效果如下，点击单元格能展示出来关联的任务数据，再次点击就能跳转到任务所在笔记位置。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,se9JZxdG3FYLImCSP4c2FN08Bso0clt-X5-LPkXCYiAo/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln7zENpbbD99pba3Lw5ib4XjeeEBAKC6zUexYzSDt2TFjngWTicnU7OxcA/640?wx_fmt=png&from=appmsg)

### 根据任务的完成时间来统计已完成的任务，并生成热力图（配合 tasks 插件）

**目标**：根据任务的完成时间来生成热力图

**已知**

* 任务的数据可能保存在任意笔记中，没有规律

**实现**

1. 日期范围选择 `最近几天`，值填写 365
2. 来源选择`所有任务`
3. 筛选一下状态，我们这里选择 `已完成（包含子任务）`
4. 日期字段选择 `指定任务属性`，属性的值填写 `completion`

> dataview 针对 tasks 插件的 语法做了特殊的处理，将其转换成了 completion 属性名

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sSdvRY-gcJQnp0m11_iDn8cTwIQ8hPOCxflzHbm7DP18/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnvkGoVHEEB8lBUqFeSHx0ALRWX0WZv58Fib9aQOHOeAvM1hNDyAQhKLA/640?wx_fmt=png&from=appmsg)

最终效果如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,se9JZxdG3FYLImCSP4c2FN08Bso0clt-X5-LPkXCYiAo/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprln7zENpbbD99pba3Lw5ib4XjeeEBAKC6zUexYzSDt2TFjngWTicnU7OxcA/640?wx_fmt=png&from=appmsg)

### 基于任务的完成分数来生成热力图

**目标**：根据任务的完成时间和分数来生成热力图

**已知**

* 任务的数据可能保存在任意笔记中，没有规律
* 每个已完成的任务都会记录一个分数的内联属性， 如下

**实现**

1. 日期范围选择 `最近几天`，值填写 365
2. 来源选择`所有任务`
3. 筛选一下状态，我们这里选择 `已完成（包含子任务）`
4. 日期字段选择 `指定任务属性`，属性的值填写 `completion`
5. 打分属性选择 `任务属性`，值填写 `分数`

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sPvfELct9ZbW1bkndtNIoy9rKjsMJVuNlfFcxDUySAOE/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnnYZRgb1zic7hcjdibIFHqlDVzzqITw3rWSfOFfsclRiaQLaGn8sMt1IAw/640?wx_fmt=png&from=appmsg)

最终效果如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sEX97hRVmaq-h5D39DznjWpyhQ5SpB32n876Vc3qe3WY/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnhcxeQ5BvN5ibr7qhkmCjziaJqtKnS4QNsvmJpaBtYzL642bgwRpF1deg/640?wx_fmt=png&from=appmsg)

## 样式美化

Contribution Graph 提供了非常丰富的样式自定义功能，包括背景色彩的自定义、单元格的样式自定义、标题字体大小等。

直接在面板中的 `样式设置` 就能看到配置项

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sEAuI6S30FE7TGOdybDsIj-tulBz1CY1_K_DlpIF-Vkc/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnsI4tQibHjZWU716ggfBcRLIAvGePDTSuBpEfSUWk6qqS52o1r8BfmwQ/640?wx_fmt=png&from=appmsg)

| 配置项      | 说明                                           |
| -------- | -------------------------------------------- |
| 标题字体大小   | 如题                                           |
| 充满屏幕     | 让热力图的单元格自动拉长，从而铺满整个笔记内容区的宽度，默认是未选中           |
| 每周开始于    | 只对 Git 风格和日历风格的热力图生效，默认情况下，中文是从周一开始、英语是从周日开始 |
| 背景颜色     | 如题                                           |
| 启用阴影     | 为背景增加阴影效果，使得整体看起来更加立体一些                      |
| 显示单元格指示器 | 右下角标记单元格颜色区间的指示器，默认是显示的                      |
| 单元格形状    | 热力图内每个单元格默认都是圆角，可以改为方块或原型                    |
| 单元格最小宽度  | 如题                                           |
| 单元格最小高度  | 如题                                           |
| 主题       | 内置的多套单元格样式规则，一键即可切换                          |
| 单元格样式规则  | 自定义单元格的颜色规则，比如针对不同数量的数据来生成不同深浅颜色的单元格         |

### 单元格样式演示

下面的图案展示了圆角、方块、圆形单元格的区别

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sp5Y52pXGKUBPJctzyuOjyEqcDWna22JVNZNthAMGIx4/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnOyfK5ZricQsEqtkpGiaib5OHoXLmkzaKB1A7EHqmSiax11LmlfDwRQJmrw/640?wx_fmt=png&from=appmsg)

### 主题演示

默认配置了多种主题，主题和视图搭配效果如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sFrv8C4-BxamG4jsmfw4s67OdrlljKSAYMKUS0OaKvVs/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnbOAPZEZ45zYBWw8wysboPgABzyHkbv5lzZLg2tjrZpzauicuL2ibQlSQ/640?wx_fmt=png&from=appmsg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sPmS5-P1ti14M7fEBcxwz_k0S7CatmH6LGL8j3i3du4w/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnqoHuPjMAkRt4SpcFOb27leu6dq0BVICVicCkrGOCk0t2iaiaGiaStGDmCg/640?wx_fmt=png&from=appmsg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sOPf26zuY4DNsl8hls5nza96hZcMoGWALJAR9qfoIqbA/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnoGDEoXqUarLgXsmkUwB4d3hwJP2V3do6lDd181KMnZRSC3kS7hyfPA/640?wx_fmt=png&from=appmsg)

### 单元格样式规则

单元格样式规则决定了最终单元格的样式，你不仅仅是可以为单元格配置颜色，还可以配置 Emoji.

配置 emoji 的时候，可以把颜色的透明度设置到最低，这样效果会更好

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sEk5JJvSjhzNOSandoGl7FEIqni52Oy45wq8Py--V4LA/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnEdqggC0cRLh9CJibQO9qBGLhM8XwShJFZ6AGfPhZpnu6jPZ95jibzvDQ/640?wx_fmt=png&from=appmsg)

效果如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s2c5tMVufDrJyrjqsqhwEqogHtHobE6mjD04nr9AskjY/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnk05GErPpLB9PjsojVxS0saNcvcFwFy6QSLkw0NoKzMWNiaDnicgQXibKQ/640?wx_fmt=png&from=appmsg)

## 样式美化（隐藏技巧）

最后这里再给大家透露几个隐藏的小技巧，这些功能是没有在界面上体现的，但是却能让你定义出一个独一无二的热力图出来。

首先我们得知道，当点击保存的时候实际上是在笔记中插入了一个代码块，里面包含了热力图的规则内容，内容大概如下

![](https://proxy-prod.omnivore-image-cache.app/0x0,s3bwWLy4jNyl3KCvHCgNKUJ36GcltCwfQ7tCwvCC79ys/https://mmbiz.qpic.cn/mmbiz_svg/fFgUJknhibCztnwlhZ92lybI4saD4iaNRc6MwT8douItMiapq0BqYIMHWhiagtkH6pUVMiaUUUw7ibrfHonxSxX32EFlR73VjA7zWG/640?wx_fmt=svg&from=appmsg)`title: Emoji
graphType: default
dateRangeValue: 365
dateRangeType: LATEST_DAYS
startOfWeek: 1
showCellRuleIndicators: true
titleStyle:
  textAlign: center
  fontSize: 15px
  fontWeight: normal
dataSource:
  type: PAGE
  value: ""
  dateField:
    type: PAGE_PROPERTY
    value: createTime
fillTheScreen: true
enableMainContainerShadow: false
mainContainerStyle:
  backgroundColor: "#ffffff00"
cellStyle:
  minWidth: 12px
  minHeight: 12px
  borderRadius: 50%
`

这其中有三个内容是和样式有关的，分别是

* titleStyle 决定了标题的样式，包括字体大小、颜色等
* mainContainerStyle 决定了热力图背景样式，包括背景颜色、阴影等
* cellStyle 决定了单元格的样式，包括单元格的大小、颜色、圆角等

在这三个内容下我们可以定义任意合法的 css 属性，但是要将中横线分隔的规则改为驼峰命名，比如 font-size 就要用 fontSize 来定义

比如下面的代码我改了背景样式、单元格样式

* 修改了背景颜色
* 给背景添加了圆角边框
* 给单元格添加了圆角边框

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sZc_-whngS3OxRiCOLUR6_pfpTdy63B9Q2Vbe_QDbzYU/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnAQP0jUW1JP5iam3aNeh23S7NCj4Dcg29fsV56qegO953jZhnB0mabSQ/640?wx_fmt=png&from=appmsg)

效果如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,skiKG64wXLiqkXZpxOpGiReeGSMwP7H-bng-5imjP-lQ/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnTHBLZicaAGoPL8gx077WAcdd3VzJA7ZicT6yG4m8d9hnPgjwichcvfMDw/640?wx_fmt=png&from=appmsg)

当然我们也可以添加渐变效果，一切取决于你的想象和你对 css 的熟悉程度

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s-O6OpAluVY8bVTfmZv9hpx40s4yztSyvk1-_Yji9lGk/https://mmbiz.qpic.cn/sz_mmbiz_png/amNzwarODHiafsYxaNLBCu7HLjPYmprlnB7HzY8qqFDyicvFNt7KGUYIMEPRY6ia3ZiaJLgbia129J3fQBr71zObrdA/640?wx_fmt=png&from=appmsg)

怎么样？学废了吗？

## 最后

这就是 Obsidian 热力图插件的一篇图文教程了，下面一篇我会介绍更加强大但是门槛也更高的 dataviewJs 集成教程，几乎可以实现你能想象到的所有场景，包括

* 统计笔记的文字数量来生成热力图，而不再是笔记的创建数量
* 自定义单元格点击行为，实现更加有创意的交互
* 自定义浮动提示内容，实现更加个性化的文案
* ...

既然都看到这里了，那我就再次邀请你加群，只需要在公众号回复 `obsidian 加群` 即可获得加入方式了。

拜拜，下期再见！

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s3UHvVWFnfsVmMNCUS-BX1syghJv6FqeiOvV97KXCzwM/https://mmbiz.qpic.cn/sz_mmbiz_jpg/amNzwarODHiafsYxaNLBCu7HLjPYmprlnIKrPRO2hVwj07LVQNTpOpvmmbIriajYmtvibjTfoUD5H7O6WciaQY3pRw/640?wx_fmt=jpeg&from=appmsg)

![](https://proxy-prod.omnivore-image-cache.app/0x0,sztHen2zKglbooc8jnRanh8F2QK9kejIH_eS7fuz0zAU/data:image/svg+xml,%3Csvg xmlns=\"http://www.w3.org/2000/svg\" width=\"24\" height=\"24\" viewBox=\"0 0 24 24\" fill=\"none\"%3E%0A%3Cpath d=\"M12.8974 15.5585L14.9719 13.484L16.2447 14.7568L12.3519 18.6497C12.1566 18.8449 11.84 18.8449 11.6448 18.6497L7.75195 14.7568L9.02475 13.484L11.0974 15.5567L11.1 4.99976L12.9 5.0002L12.8974 15.5585Z\" fill=\"black\" opacity=\"0.3\"/%3E%0A%3C/svg%3E) 继续滑动看下一个 



