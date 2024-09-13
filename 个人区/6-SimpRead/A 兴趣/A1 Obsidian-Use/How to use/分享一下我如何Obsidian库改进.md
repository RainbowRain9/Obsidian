---
id: f685af46-ab7a-4f19-8374-47405aec99de
url: https://mp.weixin.qq.com/s/PO2sW4Dq_TglTjCLOWXZ7g
title: |
  分享一下我如何Obsidian库改进
author: |
  赵烈
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/Obsidian/教程/实践
banner: https://source.unsplash.com/900x1600/?
state: true
date: 2024-04-13 11:43:36
---


# 分享一下我如何Obsidian库改进
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-po-2-s-w-4-dq-tgl-tj-clowxz-7-g-18ed58d65c0)
[Read Original](https://mp.weixin.qq.com/s/PO2sW4Dq_TglTjCLOWXZ7g)

![cover_image](https://proxy-prod.omnivore-image-cache.app/0x0,spdaVZ0FtYWVE4Ntfha4HIJLBH6w3-pFcbgeeKFMcPek/https://mmbiz.qpic.cn/mmbiz_jpg/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApGUBk9XlGibZZ17PCGa6C807gRk1p2J3GOpWrgR8sMKMo8Gbg8Csmoibw/0?wx_fmt=jpeg) 

原创  赵烈  赵烈 _2024-03-18 12:40_ _河南_ 

长文预警，多图预警，本文5927个字，8640个字符

目录如下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sN0by3xHicVNDGOCOY-y3E_1cggUDFA1HI8c7yIUygE4/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApiaBqsB9XxibKGcicNqia4F9FRQkwEWSlAooHlibdt3pgv29nJxVROcUATfA/640?wx_fmt=png)

本文前置文章为📌[我理想中的Obsidian库是什么样子呢](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkxNzY0NjQ4Ng==&mid=2247483847&idx=1&sn=9af325e612570a4a7c2b5cb90eeb9dc7&chksm=c1bc3c3ef6cbb528aedf6c2c08259bb22e96fa2919259ced5ec5ef0841232560b6d429caa6f2&scene=21#wechat%5Fredirect)（3月13号的文章）

本次主要是设计了专业领域知识库的结构，精简了很多功能，

本次改进解决了：Obsidian使用过程中的一些不顺畅体验之处……并改进了流程……详细的见后面

本文成形过程：先在flomo（浮墨笔记）中随手记录所思所想,后续在Obsidian中整理,并补充图片、GIF等……这也是多个应用APP联用,充分发挥每个APP的优点,也是工作流中一部分……

## 2 🔥前言

今天分享的是我的一个Obsidian库设计结果,主要是设计思路、效果展示……希望对你有所帮助和启发……

这个在之前的文章说过了,见本文前置文章📌

连续几天一直在琢磨这个事情,并迭代了几个版本

**下面先看看改进的效果**

## 3 🔥功能

### 3.1 🔥快速输入——引导输入

左侧钢笔图标，快速输入

引导输入页数+感想……页数看右侧左上角的提示即可,不用动脑子🧠,所以输入起来没有那么大的压力

我也设置好了快捷键Alt+1，闭着眼睛就可以开始输入——充分减少了输入的阻力

回想我在使用Obsidian最初,对于【文档属性】中各个字段的手动填写,感觉很麻烦,但是为了文档方便dataview插件的检索,不得不做——本次就是降低这个输入压力……

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWgvb_oBnmWWD1x6bmS_N-O4cGAHz2JJjxx-FnSKVQP8/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApIOqvVEJwWficKy3IkJbc7gaicuoYnuhgbbSd4kI4iaMS7YvMYu71OFrow/640?wx_fmt=gif)

### 3.2 🔥输入页码,参考右侧侧边栏的提示

上图中，右侧侧边栏，使用了dataview插件，提示了最新的页码

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,shzGVt3aUDyy0vC9Hz_mJDJa5THr4OJYMe_QfsB0xQDQ/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApeLoRGZyUbmjRLI0NzSk4J4ca4SMdIEMfyY7L4VsREiatkoPq7BVQH7w/640?wx_fmt=png)

### 3.3 当然，对于页码也可以后期快速处理

在这个DB Folder插件创建的视图中，直接处理页数的编号问题和章节——也是对原来文档的处理方法,进行补充【页数】,打造这个体系

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sfkyuv2J1pBLic-uaFaly49TSVi9_Pyd1QY91xrzWs7A/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApynvVqzbuwkIkeXIQhoXHaeYrLbweXTlFGtWZDcK0wPMHPuguicfjnAA/640?wx_fmt=gif)

具体如下图所示

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sEulGZxTEyG86UX5ViTcWQbu8eYVIgauaz5tHsv0DEFc/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzAp5plFpacS4iaaYic8KbwC5MhDRicPP9oSFOacQConZH30ibor0NBtvdhbBw/640?wx_fmt=png)

也会提示重复，下图中，我输入了【P015】,自动弹出来提示——这里是为了防止当我们删除了文档之后，该页码丢失，——后期检查时，可以检查出遗漏页码，（多种方法可以检查遗漏的页码，这里不多讲…….）可以重复利用页码

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,spGZvm0ujW2LFwaEWXxoCoFfRq0Op-X0nmuHgJxg2S0U/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApNXsw6wegNvSsTqYNibl5cSdQibTlU2bsMMajh1cnS96TNRSquplibg7pQ/640?wx_fmt=gif)

### 3.4 🔥提示输入,降低输入难度——点击按钮,跳转到首行,编辑元数据（文档属性这一栏）

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,syDETgpfQ8HuiAOXInS2sunI-41ENM44wsbbdV3ykJ4k/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApxjXFqvHY2WVUic348SnGvoQWichLYiaG6dXeicVqgsO6BnlVX0kmGlk0Eg/640?wx_fmt=png)

🔥链接当天日记

新建的笔记，自动输入当天的日期，文中是\[\[2024-03-18\]\]，如此，；我们在翻开日记时，可以快速看到我在当天创建的文档

🔥提示你修改元数据（文档属性）中字段

点击下面按钮，自动跳转到第一行，

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sS91Tgumm6gRflilGrXusS9HQKbqwhc97SFybkxRUdWY/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzAp9htYxflSHJqYKhasepK7icXxGibvmKtGzr5aMNf6IicP7kMKWZ1JiaPP0A/640?wx_fmt=png)

测试一下

这里我看到按钮中文字太长，给它修改一下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sjBUGyCzaYGYqM4GwOSlY-MkSAGBmPM77pq4u0FLJtWA/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzAp3C88rf1LNRJCeXKZSSO7qWSA90tyfm6GsibZvXiamA8EST0WXaOntrxw/640?wx_fmt=gif)

点击这个蓝色按钮之后，按钮删除+跳转到首行——主要是提示你不要忘记处理一下【文档属性】中的字段，这就是后期使用dataview插件，建立目录索引的关键之处

### 3.5 🔥快速建立索引,合集,汇总同一个主题的文件

设置好每个章节的按钮1-10,目前有10章,可以随意跳转到对应章节,

第5章的文档比较多,使用了【章】【节】【小节】【回】【序号】的结构……保持目录结构的统一

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,spnpdz-L6dkmcANBQoJF990gzcWM7w-OQtMc_msHEmA8/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApv55ZbgP5y1MBSqmvLk5zUb4a7pw5icJwLrYgPp9cKKAx5v2Jo7fPQCg/640?wx_fmt=gif)

有鉴于之前的使用体验，我在这里坚持几项原则：

1. 文件夹管理——我不在从文件夹来管理我的库，而是使用链接🔗 来跳转
2. 标签——我的标签也是次要项，主要是用它来配合插件，自动移动到对应文件夹——一个文件夹中文件太多，也会导致卡顿，主要避免这个，要不然，标签也没必要使用了
3. 主要处理好【文档属性】中字段【章节】、【页数】即可，而【主题】主要是对文档标题的补充

以上都是基于之前的体验，砍去了很多功能，

聚焦在目录的整理上面，

在文章📌[我理想中的Obsidian库是什么样子呢](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzkxNzY0NjQ4Ng==&mid=2247483847&idx=1&sn=9af325e612570a4a7c2b5cb90eeb9dc7&chksm=c1bc3c3ef6cbb528aedf6c2c08259bb22e96fa2919259ced5ec5ef0841232560b6d429caa6f2&scene=21#wechat%5Fredirect)中说过——要建立如下图所示的目录

📌

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s0AURh4to7xg1HvqyDWb_eoFfJdCp63c-E7RjOePId5w/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApVnTauw63icRfERkOdhvkWOQxZHKDeQot15EXVOk29aFswYzacFrJUIQ/640?wx_fmt=png&from=appmsg)

📌

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sZtDSpG0rEWVI3228R3Ps-Zj9AskdZ8N90mS2__BY4Bk/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApd5Lrr0XRibDaE5lXlr96wAkv4vzXX2ejj1PQZa32NV4boVrrzpp6uAA/640?wx_fmt=png&from=appmsg)

以上，基本上实现这个功能，其他的都是次要的，精力主要集中在这里就行了，其他的【白板】、【关系图谱】……都可以忽略了

Obsidian给了我们太多的选择了，你抱着【既要…又要…】的心态，永远是做不好的……

人的精力有限，做你关心的事情即可

### 3.6 🔥整理章节,元数据的【章节】字段

本次重新设计了【文档属性】的字段，实现了自动插入【字段】、删除不需要的字段、字段按照指定排序

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sNOeKKCxQPuqztciTJhLW1ON-DzUGYiVBVPQtLU6wlng/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzAp05mvnUJJNV2FiaFZe43HhhebPzsOvOW7JGRiaoO9WjaZ3tbNZtTBtpvw/640?wx_fmt=png)

删除不需要的字段——这里做过很多尝试……本次设计这个Obsidian库，也是一次梳理过程

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s65t4FY5bVKR8ZUmL_M_mlisG-Xp6OFDhm260GwyRA2A/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApQdP6dYSP9Nnicykc4IQ24gvhT0Cd7dLXXzcsWCSVibE7sEvUacLIjS6Q/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sUY5MraHspr5vqGEgyzpGsXQ1mpLa4RUuv8NwrtKBXmE/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApS02kaPCyt1u2wbLtPC6m6WNcAZy0PYoPpQ9r2avjTKsqMkTjsslElQ/640?wx_fmt=png)

### 3.7 🔥一览全局——DB Folder插件展示章节

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,spnpdz-L6dkmcANBQoJF990gzcWM7w-OQtMc_msHEmA8/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApv55ZbgP5y1MBSqmvLk5zUb4a7pw5icJwLrYgPp9cKKAx5v2Jo7fPQCg/640?wx_fmt=gif)

### 3.8 🔥快速生成章节

对于目录，我做过的第二种尝试

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sRneMGo4ACYnhyAKjbKz21W5Qe4aJSOvFZBcMZw36JTM/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApDCpPkEknZHynKpKrtlfCXNrm9wsCGUrGHUWw159P0IGwK458WLms8w/640?wx_fmt=png)

这种方式的优点是浏览起来更加直观，配合左侧的大纲目录，非常方便，同时dataview插件建立的索引也是自动化的

可以快速制作目录，

这里举例子，对第10章进行细分，适用于章节内容太多的情况，你可以继续往下细分

创建**第10章第0001节**，都会一步步提示,

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sVxA8FpDNDSet2j9AMZ_dtjxRlT7TWZ8BDleDPMRchTw/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApbry1qBRloicbkRY6IF95rqR7LwzyBuDD1icZ5KvFds68ww1bl4nU1vKA/640?wx_fmt=gif)

这里注意一下，

章节内容太多的情况——会导致dataview非常卡顿，我在dataview里面限制了数量50个，使用了limit 50——文档太多就往下拆分,按照【章】【节】【小节】【回】【序号】的结构来拆分——一般到【小节】就足够了,再往下【回】【序号】,再整理时压力太大,（就是章节序号显示的太长了,看着也不方便）——这个【章】【节】【小节】【回】【序号】的结构只是提前预留好余量……

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sn083R7Dup-wlxmOuqPL-t2CJqmyiT51OcN8L7JKaVeI/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApDdx7CuIYU2g0LaBlyGrlrevV90nkheuxxexKBYhiastlogEyzfiaGicTQ/640?wx_fmt=png)

同时呢，为了保持目录的一致性，使用了模板+quickadd创建+dataview代码——结果就是一致美观的

同时，鉴于已经有了10章，内容比较长，就使用了标题，使用左侧的大纲目录，方便随时跳转到对于章节

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sRneMGo4ACYnhyAKjbKz21W5Qe4aJSOvFZBcMZw36JTM/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApDCpPkEknZHynKpKrtlfCXNrm9wsCGUrGHUWw159P0IGwK458WLms8w/640?wx_fmt=png)

### 3.9 🔥整理了主页HomePage

1\. 时钟,

2\. 统计全库的创建文件的数量,

3\. 统计全库的标签🏷️,

4.展示创建的主题,

5\. 名人名言

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sIlkbe5Vta3mowVLUahuBm69GUI9sUgpdfU2swCsZfHA/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApwe6wCshk1KesmEtw6MzrMbQu95JP0g7hE1AqCa1olyhz4nUmMhUeGw/640?wx_fmt=png)

左侧的小房子按钮，就是主页了，点击一下即可打开主页

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sUC5qXugipMi8aF7HOvAr-CdfWQ-6L-YOAOw7KZlT184/https://mmbiz.qpic.cn/mmbiz_gif/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApu1UAXicDM1GBq9PWibRu6xL54moISDk2IqqJ77YgAgAianibICo4qvg4eg/640?wx_fmt=gif)

### 3.10 🔥做了多选改进

制作了多个挂件,

最近创建,——使用dataview替代了Recent插件——插件越少，你的Obsidian库打开时就越丝滑

1. 左侧：番茄时钟，最近创建文件，多彩时钟
2. 右侧：最新页码，临时面板，快捷键-帮助文件
* 番茄时钟——设置一个倒计时
* 最近创建文件——顾名思义了
* 多彩时钟
* 最新页码——创建新文档时提示你页码
* 临时面板——当做草稿，有时候，我们会临时记录东西，但是不想创建文件，它就派上用场了……就是草稿纸
* 快捷键-帮助文件——一个新的Obsidian库，快捷键有时候容易忘记，这里记录一下，忘记了快捷键就看一下吧——使用快捷键有效的提高你的效率![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sIsELo93Luc-EReBeD7aopEuwhqMdZPCP6vM75KYWBmE/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzAp62O5FRSz3wicglTicibx9pn8SrDKic8btib1MviacciaLFrYR4jGxlogNcw4w/640?wx_fmt=png)
1. 左侧：增强的目录，最近创建文件，最近编辑文件
2. 右侧：关系图谱，反向链接🔗 ，出链🔗
* 增强的目录——特别适合长文，主页蓝色椭圆形处，点击这里，就是打开对应等级的标题了
* 最近创建文件——顾名思义了
* 最近编辑文件——顾名思义了
* 关系图谱——这个文档建立了哪些链接🔗
* 反向链接🔗 ——父子关系，本文档的父亲是谁？？？（**父文档引用了本文档📄**）
* 出链🔗——父子关系，本文档的儿子是谁？？？（**子文档被本文档引用了本文档📄**）![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sNJeIlHv2FKUJotdo6LM8k6WBA-83CYikijf1RSeUrKY/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzApBq2UZsSzsX4tOymSwjlz1qwjRfWcWlGSVkrUHSDhFRs8ID4icTZ7Pag/640?wx_fmt=png)

### 3.11 🔥改进了长文的目录文件

同级别展示H1,,H2,H3——对Obsidian自带的大纲进行改进

上图中左上角，这里不多说

### 3.12 🔥删繁去简

* 简化了写作的流程,快捷键Alt+1，即可快速输入，**不需要管它放在哪里，和谁链接🔗 ，先输入再说吧，不需要想那么多**
* 简化了整理环节,——整理【页数】（输入时提示你创建）、【章节】是最需要整理的，而【主题】是对文章的进一步解释和补充，一般，你的文件名称搞好了，主题直接忽略，文件名称就是主题了
* 增强了【主题】的展示,
* 重新梳理了工作流（输入——整理——再次翻阅）,其他的简化
* 增强了文档的状态提示（分数,重要,发布）……

### 3.13 🔥改进了写作和浏览的页面展示——

使用了【工作区布局】——写作是写作的页面,浏览是浏览的页面……

模式1——对应的就是**写作模式**

模式2——就是主页，**浏览模式**使用

模式3——对目录进行调整时使用，检修Obsidian库，**检修模式**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sTknFLm8-XToet2TH9SK85LRIOKULXsvPa2yKrwfRSHY/https://mmbiz.qpic.cn/mmbiz_png/WWgicVfOTsqOwo4l3Mk7XdribSW1Q0bzAp0zFJahN09abs0u2VcKSE6qk6DdMJJyl9y553iacb7crsodomkkX6E9g/640?wx_fmt=png)

### 3.14 🔥持续改进……

下一步重点是，翻阅文档，

哪些是核心、重点、次要……

使用anki插件来解决这个问题

为了有效的管理我的Obsidian库中的文档📄,

针对知识管理,我做过很多尝试,比如,卡片盒笔记法,康奈尔笔记法,子弹笔记法……

针对文件夹📁和标签🏷️的管理,也尝试了PARA分类……

最后,发现都有局限性,

但是,我们在看网络上分享的知识管理方法时,很少有人提及这件事情,

尤其是一个方法的使用场景,对初学者的第一印象就是——这个方法好厉害,我用我也行……

但是,一上手就废……😭😭😭

因为每个人在知识管理方面的需求都是多样性的……

### 4.1 知识管理方法存在局限性

举例子,卡片盒笔记法,在处理原子化卡片时,能够很有效的组织笔记,但是——对于本篇文章之类的长文就不适合了,一旦拆分,文章上下文不连贯,

对于各种知识管理的方法,都仅仅是适合一部分特定需求

所以,我就梳理自己的需求,梳理工作流程,从而定制自己的Obsidian库

### 4.2 优势迁移理论

有一个理论,叫做“优势迁移理论”📌

大概意思就是——用你最熟悉的方法来学习新领域的知识,这样能够最大程度的降低难度,也是比较容易让人上手的方法

在这里我就把我的Obsidian库中,其中关于Obsidian的相关知识拆分出来,新建一个Obsidian库

采用我们每个人最熟悉的方式——实体书的章节和页数,使用这种方式来管理我的知识,

本次主要用Obsidian的相关知识作为测试,算是一个试点吧……

如果可行,就继续改进

如果不行,就寻找其他方式,索性,本次设计的Obsidian库结果还不错,……

1. **本库适用于**：专业学术领域、特点是有条理的知识领域、尤其是适合整理同一个主题下的文件……
2. **本库不适合**：兴趣领域的知识,特点是你对这些知识了解不多、或者没有一个知识体系来支撑,说人话就是——这些知识你对它不好整理,或者知识太过于碎片,或者知识横跨太多领域……用“泛知识”称呼它们比较合适
3. 这种方法和工作流程契合度高,使用起来要顺手
4. 整理笔记要轻松,
5. 大量使用自动化,减少重复性工作的压力
6. 引导式输入,降低心理压力,降低难度
7. 提高效率,

总结,这是一款懒人必备的Obsidian库,让Obsidian用的得心应手,主要针对特定领域、专业性强的领域……

## 6 🔥测试结果

本次测试效果不错,

## 7 🔥优点

一,最重要的是——输入输出都非常顺手,采用了自动化或者引导式的输入,大大降低了难度

二,同时,也是让我最熟悉的方式,采用【章节】【页数】,读过书的,对于实体书应该都非常熟悉

三,使用下来,我的整体感觉——顺畅,顺手,顺心

对于这一点,我在尝试其他的知识管理方法时,总是有一些别扭,不顺畅,主要是方法和对应的使用场景不适合

四,大大的节省了我的精力,

本Obsidian库中,我主要集中于【章节】【页数】这两个,其他的链接🔗、知识图谱都是次要的,

🔥补充一些感想：有时候我也在反思,是不是我们搞得太复杂了,你想想还没有出现计算机时,依靠实体书,世界上那么多大作家都留下来传世名作,……做得多,就一定是对的吗？……

本次改进中主要使用了Obsidian的双向链接🔗、文档属性就是元数据中的【章节】【页数】,其他的就是次要的了,比如白板、思维导图、看板、TODO之类的……基本上都没有怎么涉及……

也许是Obsidian给的可选择性太多了,让人有些迷失,少数的几个功能就足够我们使用了……

我现在坚持几个原则：

【少就是多,只要用的好就行了】、

【够用就好,不必要的可以不使用】、

【坚持不下去的,也许就可以放弃了】,

【怎么省时省力就应该怎么来——哈哈😊,我是懒人】,

【知识管理】看重输入、内化知识、复习、改进……

【Obsidian库一直在迭代,在进化,也是动态的】,

【没有一劳永逸的方法,Obsidian要一直迭代才能满足需求】,

【提升效率,机械的、重复性的,就大胆的用上自动化,同时,思考🤔也是机器替代不了了】、

【知识只有分享出去、输出文章,让知识流动起来,知识才有用——这也是我在公众号输出的原因了】……

我在尝试多种知识管理方法的过程中,发现很多东西在最后都坚持不下去了……有些方法非常耗费精力,

举例子,

卡片盒笔记法中,原子化卡片的方式,采用了编码,

同时,缺点很明显,需要特别注重卡片的原子化,就是一张卡片就是一个无可拆分的知识点,比如,

1. 思考🤔一张卡片篇幅是否太长？
2. 知识点是否有多个呢？
3. 有多个知识点怎么拆分成为更小的卡片？
4. 如何组织起来拆分出来的卡片？
5. 后期如何调用这些卡片……等等多个问题

其次,需要耗费精力来解决编码的问题,需要思考🤔：

1. 这一张卡片都编码到底是多少？
2. 因为编码就是卡片所在的位置,就涉及到需要思考🤔：新卡片到底和旧卡片有没有联系？
3. 有联系就考虑放在旧卡片的前面还是后面的位置,
4. 或者就是对旧卡片的补充,
5. 遇到篇幅太长的,还要继续拆分卡片,这样又是修改卡片的编码……

再次,

1. 遇到篇幅太长的卡片,如何拆分呢？
2. 拆分的卡片的编码仍然需要思考🤔……以上不一而足

我的整体感觉——知识太碎,需要不断的思考🤔编码的问题,需要思考🤔卡片与卡片之间的联系……

这也导致一个问题,写出一张卡片往往很难,难度系数太高,写作花费时间特别长

会出现一个现象：**本末倒置**

比如,

写作时间——5分钟

思考🤔、编码、拆分、合并——30分钟

我认为【写作】要占据大部分时间,其他的【组织笔记】（包括卡片之间的联系、编码、控制篇幅……）要占据小部分时间

我个人觉得,【写作笔记】：【复习笔记】：【组织笔记】=4：3：1——这个投入时间、投入精力的比例

【写作笔记】——是重中之重,只有日复一日的写作、输出、不停的分享……你的知识才会更加丰富

【复习笔记】——是第二重要的事情,人的记忆总是会不断遗忘的,艾宾浩斯记忆曲线能够有效的说明这件事情,相应的anki复习就是有效的增强记忆的方式——这也是我的Obsidian库的下一步的重点工作了📌

有件事情,【松鼠🐿️囤积症】听说过没有,说的就是像小松鼠🐿️一样不停的囤积知识,造成在知识层面的【肥胖症】,就说说吧,知乎中、B站收藏的基本上看也没看,收藏的微信公众号文章,其他的,收藏的其他视频、文字……是不是都落灰了呢？——为什么❓

针对这一现象,本次改进中,我提出【章节】【页数】,就是有效的暴露出来文档📄,——一句话,我只需要看【章节】【页数】,其他的都是次要的……

人的精力有限,不要搞得太多、太复杂,因为只有简单的方法,才能够让你坚持下去,【章节】【页数】已经足够简单了📌  

同时,我在Obsidian中文件夹📁和标签🏷️,不太注重这个,因为这两个太耗费精力,最后反而搞得人疲惫😩……

人都有惰性,俗称的——懒

所以,一种优秀的、且适合你的知识管理的方法,最终都是经历过多种打磨、长时间的磨合下来的结果

尝试那么多方法,即使我没有坚持下去,也是学习到了很多东西,本次的【章节】【页数】——这种模仿实体书的目录,这种知识管理的方法,也是吸收了其他方法的优点,抛弃了糟粕……

## 8 总结

本次Obsidian库进行了大的调整,从知识框架、工作流程、输入方式……等多个方面进行升级和改造

使用了多个插件,进行多插件的联用,并无缝连接,举例子：quickadd插件+dataview插件……

也使用了Admonition进行折叠操作,防止占用大篇幅,进行排版上的优化

大量使用自动化来提升效率,

1. 排版自动化：留白空行,紧凑,标题等级和标题序号,有序列表,无序列表的自动化……
2. 输入自动化
3. 自动化搜索🔍同一主题下文件
4. 文件夹📁自动化移动到指定位置——一个文件夹📁里面有太多文件📄,会导致打开该文件时特别卡顿……提前避免这一现象

精细管理和粗放管理,专注在输入和输出上面☝️

1. 文件夹📁和标签🏷️粗管理,
2. 对章节、页数进行精细化管理

本次彻底解决了生硬、不顺畅的操作体验

## 9 End



