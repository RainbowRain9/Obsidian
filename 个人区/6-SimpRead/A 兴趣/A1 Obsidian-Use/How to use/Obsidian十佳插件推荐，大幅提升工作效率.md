---
id: 68ac3095-0158-4964-aa4c-58286d0c68d6
url: https://mp.weixin.qq.com/s/c2NI-_t6KGJN5JtH34YpTw
title: |
  Obsidian十佳插件推荐，大幅提升工作效率
author: |
  何琪松
source: 微信公众号
dtype: 插件
tags:
  - 400兴趣类/Obsidian/Plugin
  - 400兴趣类/Obsidian/教程
state: true
date: 2023-12-11 02:55:37
---


# Obsidian十佳插件推荐，大幅提升工作效率
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-c-2-ni-t-6-kgjn-5-jt-h-34-yp-tw-18c5515a6ed)
[Read Original](https://mp.weixin.qq.com/s/c2NI-_t6KGJN5JtH34YpTw)

原创 何琪松  运维来点料 _2023-12-10 17:35_ _发表于广西_ 

**点击下方名片**，设为星标！

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s_yA4Sn1ES408TZpeJIGT7xDQqCesm6DOHkO_IOUmEHU/https://mmbiz.qpic.cn/mmbiz_png/oG8ttZkKgP6kSb7Tx3PpiaCS98BIuZ6voDoqQKibDKCC3F3Tet6icVYGsRjWgAknzL5A71299sXUyfCtIiba2N3iaFg/640?wx_fmt=png&from=appmsg)Obsidian是一款专注于笔记和知识管理的软件，它提供了一个强大而灵活的平台，让用户能够创建、组织和发现信息，它可在Windows、macOS和Linux操作系统上运行。Obsidian采用"freemium"模型，即基本功能免费，高级功能则需要付费订阅。当然，对于普通用户，基本功能已经完全够用了。Obsidian最强大的就是它的插件功能，目前Obsidian插件市场有逾1300款插件，用户完全可以根据自己的需求下载、安装对应的插件来扩展Obsidian的功能，打造完全个性化的笔记本。下面，就介绍十款最常用、好评率TOP的插件：

**1️⃣ admonitions**

功能：在笔记中创建引人注目的标注、提示、警告和其他信息块。

视频加载失败，请刷新页面再试

 刷新 

如视频展示，可以根据需要创建各种醒目的信息块，如提示、进度、注释等，而且信息块还支持嵌套。基本语法：

\`\`\`ad-<关键词>

(可选）title:XXX

<正文内容>  

\`\`\`

admonitions默认的关键词有近30个。不同的关键词会呈现不同的图标和颜色，还可以根据需要进行嵌套。![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sUpdOQ4D4ZWcOPczaiw6RWKfwDhewdX5M8rgrX5xYQlI/https://mmbiz.qpic.cn/mmbiz_png/oG8ttZkKgP7z6enQIbrGia6Gj8Y1jMzZt6LfgVqD99yMNqJ0NYcTiaMzbwEMeVlI5QZPd2KSCertNiafSaYic5noyw/640?wx_fmt=png&from=appmsg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sOA3sWWb-blVbJwGhefnV3DPwhB6Ojbv7kN4QbMJY1jQ/https://mmbiz.qpic.cn/mmbiz_png/oG8ttZkKgP7z6enQIbrGia6Gj8Y1jMzZtuA8uGfW9JrHtnGPwWhbx3u3ib0Hbl24cedm9Izp1ydeJskZ8yQGk7nQ/640?wx_fmt=png&from=appmsg)下载地址：https://github.com/javalent/admonitions

**2️⃣ task-archiver**

功能：把已经完成的任务单独整理、罗列出来，以跟待办任务区分开来。

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/ivan-lednev/obsidian-task-archiver

**3️⃣ commander**

功能：可以在用户界面的不同部分添加命令。![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sTxXwylbQnKHC72MjQXrNiQoM60P9MSOvnJYf2SbqmlY/https://mmbiz.qpic.cn/mmbiz_png/oG8ttZkKgP7z6enQIbrGia6Gj8Y1jMzZtJbOSdgpHGicH57ZNUGKHOxNY0f7YTN5zr5SlabbJ1qnWQkXS6vrb4zQ/640?wx_fmt=png&from=appmsg)例如，上一个“任务归档”的功能，我们可以将对应的命令添加到笔记上方，需要使用时直接点击对应的图标即可。

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/phibr0/obsidian-commander

 **4️⃣ dataview**  

功能：通过简单的命令将笔记/任务的查询结果，按自己的想法进行展示。我平时用得最多的就是跟踪各项工作任务执行情况。Dataview的语法还是有点复杂，这里就简单举几个任务查询的例子：

**重点待办工作的查询：**

```` ```dataview ```` `TASK FROM "工作"` `where (( priority="紧急" and due <= date(today) + dur(7 day))` `or ( priority="重要"  and due <= date(today) + dur(15 day)))` `and !completed and date(today) <= due` `GROUP BY priority` ```` ``` ````

第1行和第7行是头尾的固定格式，用于标识中间的语句是dataview语句。

第2行：从“工作”文件夹中筛选任务TASK  

第3至5行：筛选的条件。!completed and date(today) <= due 表示未完成的未过期任务，同时要求优先级为“紧急”的7天内到期的任务或优先级为“重要”的15天内到期的任务。

第6行：将查询到的符合条件的任务按优先级进行分组。

**超时未完成工作的查询：**

```` ```dataview ```` `TASK FROM "工作"` `where date(today) > due and !completed ` `GROUP BY file.link` `sort created ASC` ```` ``` ````

第3行：!completed表示未完成的任务，而且当前时间超过到期时间

第4行：按任务所属的文件进行分组，并提供链接跳转到对应的文件  

第5行：按任务创建的时间从低到高进行排序

**近期完成重点工作的查询：**

```` ```dataview ```` `TASK FROM "工作" where ( completion >= date(today) - dur(30 day) ) ` `and ( priority="紧急" or priority="重要" ) ` `sort completion DESC` `limit 30` ```` ``` ````

筛选条件：

completion>=date(today)-dur(30 day)：表示完成时间在最近1个月内。

priority="紧急" or priority="重要"：任务优先级是“紧急”或者“重要”

第4行：按任务完成时间从高到低进行排序（最新完成的任务在前面）  

第5行：如果查询结果超过30个，则显示最近完成的30个任务。  

上述查询语句在我的Obsidian笔记中执行结果如视频所示，而且只要有任务新增、变更、结束，dataview基本在10秒内自动更新查询结果。

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/blacksmithgu/obsidian-dataview

**5️⃣ Html-tabs**

功能：让您在笔记中轻松嵌入标签控件。以上个插件dataview的查询结果为例，为了更好地展示上述案例中的查询结果，使用html tabs就可以按标签展示对应的dataview查询结果。

视频加载失败，请刷新页面再试

 刷新 

语法：

```` ```tabs ```` `---tab <label-of-first-tab>` `<content-of-first-tab>` `---tab <label-of-second-tab>` `<content-of-second-tab>` `---tab <label-of-third-tab>` `<content-of-third-tab>` ```` ``` ````

下载地址：https://github.com/ptournet/obsidian-html-tabs

**6️⃣ Highlightr**

为 Obsidian 笔记应用程序带来了简约且美观的突出显示菜单，在您浏览文章时可以把重点段落、喜欢的语句按自己喜欢的样式标注出来。

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/chetachiezikeuzor/Highlightr-Plugin

**7️⃣ Hover Editor**

通过将悬停弹出框转变为功能齐全的编辑器实例来增强“页面预览”功能，不必跳转即可在当前页面编辑。

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/nothingislost/obsidian-hover-editor

**️8️⃣ Local-images-plus**

功能：自动处理Obsidian笔记中的图片，将其统一归档到特定的文件夹下，方便后期管理。以下是官方的功能介绍：

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sYoTkToVKtcPUtuiik39EphIjDIROmhuM2G7BClMUVt8/https://mmbiz.qpic.cn/mmbiz_png/oG8ttZkKgP7wQ8V1WP5aap0wNU1qwTv2ia9xDLycHrzGicb1dnbewPkBUF3UaI2bI5ibc8IEhSsqldt3J1nUxdmpg/640?wx_fmt=png&from=appmsg)

下载地址：https://github.com/Sergei-Korneev/obsidian-local-images-plus

**9️⃣ reminder**

功能：设置任务的提醒功能，在Obsidian界面弹出到期提醒框

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/uphy/obsidian-reminder

**🔟 Task**

功能：强化obsidian的任务功能，可以设置优先级、到期时间、重复任务、完成时间等。

视频加载失败，请刷新页面再试

 刷新 

下载地址：https://github.com/obsidian-tasks-group/obsidian-tasks

如果您无法在网上通过obsidian的社区插件市场直接安装，可以在本公众号的服务“资源分享-Obsidian插件”中进行下载。上文提到的插件仅仅是obsidian插件市场的冰山一角，还有更多更有趣的插件等你发现哦！😜

**\===========** **到** **此** **结** **束** **\===========**

**如果觉得本次分享对你有所帮助的话，希望点击** **“** **在看** **”** **给予鼓励，谢谢！**

_**//往期推荐//**_

_**[Linux系统PRM软件包管理工具](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzU0Njg1ODY3Mw==&mid=2247483977&idx=1&sn=586facf2f66ae5c294c8e430070b5305&chksm=fb567197cc21f8817cf8a5e1fcc4b63a6ed63177a79c8d9513488b866a54555af183c5837b19&scene=21#wechat%5Fredirect)**_

[_**Linux：深入理解 sudo 与 su 之间的区别**_](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzU0Njg1ODY3Mw==&mid=2247484203&idx=1&sn=e118a2294794e5ad8e2a0a7d3be06ffd&chksm=fb5670f5cc21f9e3ba382200247874fa7e8638fa1936503048c12e6ee88f12e31cbdcd8ecb5c&scene=21#wechat%5Fredirect)

[_**OneNote笔记本的完美替代：Obsidian+Omnivore**_](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzU0Njg1ODY3Mw==&mid=2247484224&idx=1&sn=9cee085a5a6eb63c8e5c6aef35018891&chksm=fb56709ecc21f988807ebf033cf5783a9852284dd4f187f5bf485c2482bbcf36e02b1d371373&scene=21#wechat%5Fredirect)

**_[TidyTabs--方便快捷的多标签桌面窗口管理器](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzU0Njg1ODY3Mw==&mid=2247483953&idx=1&sn=00e3fc8c7789e84d385397bd0712aee7&chksm=fb5671efcc21f8f91b143d89db5799b9b532d9f3352876156bc8460fc1088ff7e5a3d001a230&scene=21#wechat%5Fredirect)_**

敬请关注公众号：**_运维来点料_**



