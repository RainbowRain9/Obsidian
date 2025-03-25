---
description: 
title: 5 个 Obsidian 命名方法，告别杂乱笔记，提高效率 200%！
url: https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247487019&idx=1&sn=a0bc44b531728708d075fd2413b525aa&chksm=ea12b42767ed42f1763a33cb858029e2f512a508855ac996ea066367889d30aab2e8f4f36c54&mpshare=1&scene=1&srcid=0310hfnAxjrf2kDa5uyurGhh&sharer_shareinfo=354675cd75e89e993f14bcc76c5afe75&sharer_shareinfo_first=354675cd75e89e993f14bcc76c5afe75#rd
author:
  - "[[赫点茶]]"
banner: https://mmbiz.qpic.cn/mmbiz_jpg/98WuqUtT9HqP2Luned1eQorIDGj62Ze6K2lRVeJUMWUMa244frXdUwSh2K0pl04GdqDbDNlqCJFEbMLFMRfwqQ/0?wx_fmt=jpeg
source: 微信公众平台
dtype: 微信
tags: 
state: false
created: 2025-03-14T09:37
updated: 2025-03-14T09:37
---

原创 *2025年03月09日 21:16*

嗨，朋友们！如果你也在探索**如何用 Obsidian 提升效率、管理知识**，那你来对地方了！🎯 我会持续分享**数字笔记、效率工具、信息管理**相关的干货，帮你把 Obsidian 玩出花！**记得关注 + 星标**，不错过任何实用技巧哦！💡

  

有时候，我会回头翻看自己在 Obsidian 里创建的文件，但总会遇到一个尴尬的问题——**这是谁创建的文件？时间是什么时候？**特别是整理日记、会议记录或者灵感笔记时，文件名要么是“未命名.md”，要么是乱七八糟的标题，过几天自己都不记得内容是啥了。

后来，我折腾了一下**Templater**插件，总算找到一个让我满意的文件命名方法：**让文件自动带上日期**，再也不用手动输入了。

好啦，我先在文章开头通过以下这篇图片进行个全文的总结：

  

![图片](https://mmbiz.qpic.cn/mmbiz_png/98WuqUtT9HqP2Luned1eQorIDGj62Ze65B4uCM4fOQSIhjjA3y1SoUBOzldqb4dpY6kMc8VRRLoeOf22P6GHhg/640?wx_fmt=png&from=appmsg&tp=webp&wxfrom=5&wx_lazy=1&wx_co=1)

  

### 为什么要让文件名自动带日期？

一开始我也觉得，文件名随便起不就行了吗？但是，当 Obsidian 里的文件越来越多，检索起来就变成了一件麻烦事。比如：

✅ 你写了一篇随笔，过一段时间想翻出来看，但文件名只是“想法.md”，根本不知道是哪天写的。

✅ 你每天写日记，手动输入日期很麻烦，时间一长总会有忘记的那一天。

✅ 你有一些会议记录，时间是重要信息，最好直接体现在文件名里。

所以，我最终决定——**让 Obsidian 在创建文件时，自动在文件名里加入日期**。

### 如何自动添加日期？

其实方法很简单，只需要**Templater**插件的一个小技巧，就能搞定，很简单。

**1️⃣ 安装 Templater 插件**

我们可以在 Obsidian 插件市场里搜索**Templater**，安装并启用。

**2️⃣ 设置默认模板**

然后在 Templater 的 Templates Folder 里指定一个模板文件夹，比如 Templates，然后新建一个 .md 文件，比如 file\_name\_template.md，在里面写入：

```
<% tp.date.now("YYYY-MM-DD") %>
```

**3️⃣ 应用模板**

每次新建文件时，我们需要手动或自动应用这个模板，文件名就会自动带上当前日期，比如 2025-03-03.md。

### 分享我的一些常用的Templater 语法<sup><span>[1]</span></sup>

前提说明，以下是 Template 模版大多源自官方操作手册的衍生版模版，大家可以根据文章底部参考链接，自行探索，改进优化成适合自己的模版文件。

**📌 1. 自动插入当前日期和时间**

**💡 作用：适用于日记、会议记录、待办事项等场景，让每个新建的文件都带上时间信息。**

```
<% tp.date.now("YYYY-MM-DD") %>  // 2025-03-03
<% tp.date.now("YYYY-MM-DD HH:mm") %>  // 2025-03-03 14:30
<% tp.date.now("dddd, MMMM Do YYYY") %>  // Monday, March 3rd 2025
```

**📌 2. 自动填充文件名**

**💡 作用：在文件内容中自动插入文件名，比如创建文档时自动添加标题。**

```
<% tp.file.title %>
```

📌**示例**：如果文件名是 Obsidian技巧.md，那么 tp.file.title 会自动填充**Obsidian技巧**。

**📌 3. 自动生成文件名**

**💡 作用：新建文件时，自动按照指定格式命名，比如创建时间+自定义前缀。**

```
<% tp.file.rename(tp.date.now("YYYY-MM-DD") + " - " + tp.prompt("请输入标题")) %>
```

📌**示例**：如果输入 “会议记录”，则文件名变成 2025-03-03 - 会议记录.md。

**📌 4. 生成动态时间戳**

**💡 作用：适用于日记、日志记录、任务管理等场景，每次调用都能生成当前时间戳。**

```
🕒 创建时间：<% tp.date.now("YYYY-MM-DD HH:mm:ss") %>
```

📌**示例**：🕒 创建时间：2025-03-03 14:45:22

**📌 5. 让文件自动归类到某个文件夹**

**💡 作用：创建不同类型的文件时，自动归档到特定目录，保持笔记的结构清晰。**

```
<% tp.file.move("日记/" + tp.file.title) %>
```

📌**示例**：如果文件名是 2025-03-03.md，这个命令会自动把它移动到 日记/2025-03-03.md 目录下。

**📌 6. 生成 TODO 任务列表**

**💡 作用：快速创建待办事项，适用于 GTD 工作流。**

```
- [ ] 任务：<% tp.file.title %>
- [ ] 任务 1
- [ ] 任务 2
```

📌**示例**：如果文件名是 会议记录.md，模板会生成：

```
- [ ] 任务：会议记录
- [ ] 任务 1
- [ ] 任务 2
```

**📌 7. 动态插入一段 Markdown 代码片段**

**💡 作用：在不同笔记里复用相同的 Markdown 模板。**

```
<% tp.include("Templates/我的常用模板") %>
```

📌**示例**：如果 Templates/我的常用模板.md 里有：

```
## 会议记录  
- 会议主题：
- 参会人员：
- 会议内容：
```

调用 tp.include("Templates/我的常用模板") 后，会直接在新文件里插入这段内容。

**📌 8. 自动生成 UUID（唯一标识符）**

**💡 作用：用于创建独立 ID，适合数据库类笔记。**

```
<% tp.user.uuid() %>
```

📌**示例**：每次执行都会生成一个独特的 ID，如 4f6d4e77-88a3-4f2a-b17c-4e9e5c4a17d3。

**📌 9. 计算日期（未来/过去的日期）**

**💡 作用：适用于任务计划、回顾系统、提醒等。**

```
📅 一周后：<% tp.date.now("YYYY-MM-DD", 7) %>
📅 三天前：<% tp.date.now("YYYY-MM-DD", -3) %>
```

📌**示例**：

```
📅 一周后：2025-03-10
📅 三天前：2025-02-28
```

**📌 10. 生成随机数（适用于编号、实验数据等）**

**💡 作用：自动生成随机编号或数值。**

```
随机数：<% tp.user.random_number(100, 999) %>
```

📌**示例**：

```
随机数：426
```

### 使用后的真实感受

自从用了这个方法，我的 Obsidian 文件管理变得清爽了很多。**日记、任务、会议记录**，都能按照时间顺序自动排列，找起来一目了然。再也不会出现“这是什么时候写的？”的疑问了。

**当然，如果你想更进一步，还可以自定义文件命名格式，比如加上小时、分钟，或者在前面加个分类前缀，甚至可以让 Obsidian 自动填充文件内容。**这个 Templater 插件，真的玩起来比想象中更有趣，感兴趣的小伙伴可以尝试安装这个插件使用一下！

如果你也是 Obsidian 用户，强烈推荐试试这个方法，绝对能帮你省下不少整理文件的时间！

你是怎么管理 Obsidian 里的文件名的？有没有更好的自动化方法？欢迎留言交流！

📌**如果你喜欢这样的 Obsidian 玩法，记得点个“关注”，不定期分享更多 Obsidian 的使用技巧！**😊

  

**更多推荐：**

- [Obsidian 里最值得安装的插件？Templater 让我告别手动笔记，效率狂飙！](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486999&idx=1&sn=0c0a04f64be4dd8cc325fb2943e57fa3&scene=21#wechat_redirect)
- [Dataview——让我从“笔记黑洞”里逃出来的 Obsidian 神器](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486990&idx=1&sn=9e9a06297e8533d1b33ccfd34cd27da2&scene=21#wechat_redirect)
- [为什么你的笔记总是乱糟糟？试试这个方法，彻底告别信息混乱！](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486984&idx=1&sn=51232deb29cb0a2ed81fac0daa972217&scene=21#wechat_redirect)
- [为什么 Obsidian 让我戒掉了碎片化记录？](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486972&idx=1&sn=e61477c9f8628c7f534fc2183d87e2d3&scene=21#wechat_redirect)
- [Trilium Notes：一款被低估的强大笔记工具](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486968&idx=1&sn=789596f381d0bc49896a8f2e764cb310&scene=21#wechat_redirect)

- [Obsidian Tasks 插件：这可能是最适合懒人的任务管理方式](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486964&idx=1&sn=557964926878ef9dfbf92d5cee36122c&scene=21#wechat_redirect)
- [Dataview——让我从“笔记黑洞”里逃出来的 Obsidian 神器](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486990&idx=1&sn=9e9a06297e8533d1b33ccfd34cd27da2&scene=21#wechat_redirect)
- [Obsidian 高效指南：我常用的插件与实用技巧](https://mp.weixin.qq.com/s?__biz=MzI3NzcwOTY4MQ==&mid=2247486952&idx=1&sn=500776eb21b2876697bd9d59c1db05bc&scene=21#wechat_redirect)

参考资料

\[1\]

帮助手册:*https://silentvoid13.github.io/Templater/introduction.html。*

  

预览时标签不可点

提升效率5

Obsidian9

暂无留言

已无更多数据

  写留言:

继续滑动看下一个

赫点茶

向上滑动看下一个

[知道了](https://mp.weixin.qq.com/)

 微信扫一扫  
使用小程序