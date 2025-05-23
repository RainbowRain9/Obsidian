---
url: https://mp.weixin.qq.com/s?__biz=MzI4NjIwOTg3Nw==&mid=2650157279&idx=1&sn=b3a52b37c9db9ffc00c4017d7177ab4f&chksm=f3e2f2e5c4957bf33db7cde28f72c205c8b953e6dc4eed72f76ecb4e479d9c4836bb23fa6d18&mpshare=1&scene=1&srcid=0216PwvjI9gs5GpmFVrnag4s&sharer_sharetime=1645006913349&sharer_shareid=71070e06096b6a2587acedcea2350c21#rd
title: Obsidian 最强插件：quickadd 教程
date: 2023-11-11 01:34:39
tags:
  - 400兴趣类/Obsidian/Plugin/QuickAdd
  - 400兴趣类/Obsidian/Plugin/编辑/dataview
banner:
  - http://mmbiz.qpic.cn/mmbiz_jpg/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2TK6nQy2paNF5hGQuVMLua9bUX2YzlicPM1DWS5bc9cFrNmeDW6dscNA/0?wx_fmt=jpeg
banner_icon: 🔖
state: false
created: 2023-11-11T22:36
updated: 2024-04-13T12:49
---
嗨大家！

今天介绍 Obsidian（一款本地化笔记软件）最强的插件：[[QuickAdd]]。

从我开始用 quickadd 这个插件开始，它就越来越融入到我的日常笔记流程中，而且随着使用的越习惯、越平淡，还开发出了一开始没有想过的用法（虽然就是很简单）。如果现在让我只能留一个第三方插件，毫无疑问，我会选择 quickadd。

QuickAdd，有人称呼它为 “快加”，虽然有点不那么优美，可是也很贴切了。插件的官方介绍是：快速地添加笔记（Notes）或内容（Content）到你的库（Vault）。（P.S. 作者英文水平有限，担心翻译不准确才加上英文原单词，不是为了凑字数，不是！）

如果你的英文水平很好，那么可以去看插件在 github 里的 readme，不仅有视频介绍，还有一些工作流的例子（虽然是国外的），可以说非常有用了。对于高阶用户来说，官方的文档应该会比我的教程更有用。

本文依然延续往期教程风格，适合新手用户。如果你想尝试 QuickAdd，或者正在用 QuickAdd，但是在使用上有疑惑，希望这篇文章能够给你一些参考和启发。

## QuickAdd 的 4 种类型

1.  Capture：捕捉。捕捉输入内容到某个文件。
    
2.  Template：模板。用模板新建文件。
    
3.  multi：多（菜单）。用于把 quickadd 命令做成可选菜单的形式。
    
4.  Macro：宏。执行一系列命令组合。（本篇暂不涉及）
    

我没有按照官方的顺序来列这 4 种类型，而是按照我认为的使用的难易程度排列，或者说这是我认为对于新接触这个插件的用户来说比较容易上手的渐进式的使用过程。

之前在介绍工作流的时候，简单介绍过这个插件，所以基础的怎么创建命令，以及每个设置的释义就不再重复介绍了。本次重点在于这 4 个快加类型的应用，让我们来看看它们能做到什么，以及如何操作。

## 📸 Capture 捕捉

介绍：捕捉你输入的文本，插入到指定的文件。

捕捉，可以捕捉内容到指定文件的指定地方。根据这个特性，我们可以实现一些简单又实用的用法。

### 记录闪念 / 间歇日记

效果演示：

![](https://mmbiz.qpic.cn/mmbiz_gif/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ26avHNXlBlyLPq8gqOcVZTyHmaAf5diaG3Uxmiac5U8E1bicm0ZLkdNWGw/640?wx_fmt=gif)

下面我们就开始吧！添加一个 capture 类型的快加，打开设置。

##### step1: 在 File Name 项，填写上你想要捕捉内容保存到的文件。

比如我们现在是要记闪念日记，那么我要保存到当天的日记笔记里。文件名称支持格式语法，比如 {{DATE}} ，会输出日期，和我们默认的模板日期几乎是一样的，但是有一个重要的不同，快加的 DATE 是大写。

下图是我的快加闪念设置，可以看到我的日记保存目录，以及动态的日记笔记名，这里你可以直接复制日记插件里设置的格式，粘贴进来。

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2utC5Qz1SEdcBTmW89YkU8J8bCGWCBy1z5XtkR89mG6IS9RHdUfMEgQ/640?wx_fmt=png)

这样我每次调用快加: 闪念命令，写入的内容就会插入到当天的日记里。

下面附上快加支持的 format，供参考：

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2Nks8mgWia6tnDaARy3S81C3iaJyvNRWWQ9ZEuo5NLPZiafsMtlZNRHOMg/640?wx_fmt=png)

step2: 指定插入到指定位置（非必要）

在 **Insert after** 项，你可以指定把内容插入到文件的某个位置，比如我想要插入到二级标题 `闪念`下面。下图是我的配置：

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2x65rEBwh8QjDXfLUWPCodJJdnxGdd6j60OMNY30pJwwPzQfyVSEQDw/640?wx_fmt=png)

首先，打开 Insert after 项右边的开关，然后在下方的输入框输入 `## 闪念` 。注意，由于是二级标题，所以井号后面有空格。只有字符一模一样，快加命令才能找到指定行，并且把内容插入到对应的位置。

提示：Insert after 项同样支持格式语法。

上图中可以看到还有一个设置项，**Insert at end of section** 。section 是章节、一段的意思，比如我的二级标题「闪念」，那么这一整个二级标题的范围，都作为一个块。

当该选项不打开时，每次的捕捉内容会插入在二级标题「闪念」的最上方。那么我多次插入日记的内容，呈现出来其实是倒序排列的，后插入的内容显示在最上方。

当打开该选项时，最后插入的内容就会在二级标题「闪念」的末尾位置。

#### step3: 给闪念日记加上时间戳

下图中，有 2 个设置我用红色字体标注了翻译（粗翻，不保证准确），就不再展开讲了，请按需使用。

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2BPeJlic7HwvLLnMqusEAqYAHKNhu8EicCjxlS2C68K1uto52MrX5b1Kg/640?wx_fmt=png)

这里讲一下经常被问到的，给闪念日记加上时间戳。我们在记闪念笔记的时候，往往需要带上时间戳，以便于以后查看。这时候可以使用 **Capture format** 设置项。

1.  打开 Capture format 的开关。
    
2.  在文本框里写格式语法。下面做一下简单的解释。
    

1.  `{{DATE:YYYY-MM-DD HH:mm}}` 就是时间的写法，DATE 语法可以从官方的日记插件设置页找到：
    
    ![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2R1hwdcUZlFwr2DEcPHOHv94YxhBsdib9FDJK3HxgibsHfdlxXVicf3hCw/640?wx_fmt=png)
    
2.  `{{VALUE}}`就是捕捉的内容。
    
3.  最前面有一个 `\n`，这是换行语法，在 md 中不会原样输出，而是会自动换一样，再插入相应的内容。
    
4.  `-`，是列表语法，因为我喜欢使用列表输入内容而已，没有特别的含义，如果你不想要列表，去掉上图事例中的短横杠 `-`就可以了。
    

上面只是一个例子，希望大致能让你明白怎么写 capture format。总结一下，就是非格式语法会原样输出，格式语法会动态输出，你可以自己定需要插入什么时间格式，也可以自己给你的闪念加点花样，比如前面加上 emoji 之类的。

#### 头脑风暴

虽然上面介绍的是插入闪念日记，但这个例子是想介绍捕捉内容到指定位置的这个使用场景。

你可以用这个方法做一系列和插入日记相关的命令，比如：

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2RFeknycZmptTfibGV07gw9dk8Alic7LahUQicGc8O6TUrVCBZ6bCt1uyA/640?wx_fmt=png)

你可以在一个标题下面，用不同的 emoji 区分不同的内容类型（快加设置时 capture format 加上 emoji）。也可以将不同类型的内容插入到不同的标题下（即设置 Insert after 项）。

### 快速添加一个任务

这个很简单，有两种方法：第一种是和上面的设置一样，在 capture format 里，写 `-[]{{VALUE}}`；第二种就是在设置快加命令的时候，勾选 Task 项。

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2hx8d44szQvKbhY4v2T1KVGS49gZsILzF0Stq9n4AUrjLGTxHc8wQuQ/640?wx_fmt=png)

延伸使用：快速添加到看板  

这是一个和看板的联动使用。由于实际上看板里的 Item（一条，但出于习惯后文均称作一列）对应的是 md 语法的二级标题，一个看板卡片对应的是 md 的任务语法 `-[]`，所以我们可以利用这个关系来给看板快速添加卡片。

例如：我有一个「灵感看板」用来收集写作灵感，这个看板里面有一个列是「Inbox」，用来作为灵感的收集箱。现在我想要快速添加一个新灵感到「灵感看板」的「Inbox」。

快速添加到看板的 quickadd 设置是：

1.  **File Name** 项写上「灵感看板」的文件位置
    
2.  打开 **Task** 项的开关
    
3.  打开 **Insert after** 项的开关，并写上 `## Inbox`
    
4.  如果你想要每次新添加的卡片都放在列的最下面，就打开 **Insert at end of section** 项的开关。如果不打开，默认卡片会放在列的最上方。
    

### 玩点好玩的，插入 admonition 的框

从一开始为了不污染 markdown 文件，到实在无法抵抗 Admonition 的高颜值，我终于还是开始使用 Admonition 了。但是，每次都要写那么长的代码块，真的很累啊，而且总是想不起来自己的设定（我为自己的笔记设置了一套 admonition 卡片，每一个都有不同的用途）。就在我为此而烦心的时候，忽然想起了 quickadd，OMG，为什么我没有早点想起来？！希望我不是最后一个知道的。

同样使用 quickadd 的捕捉，打开捕捉内容到当前文件的当前位置的选项开关，然后在 **capture format** 里面粘贴进那一长串 admonition 语法。完美！

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2o4RWF2vXq05ibkbr0C4SkXhW85BXfqjQ5O3GYgRzQE7QSAlJgTRbpKg/640?wx_fmt=png)

注意，我这是为了实现在当前文件的当前位置插入一段 admonition，才使用了 `capture to active file`，如果你想要添加到指定文件的指定位置，请仍然参考前文闪念日记的设置。

### 进阶用法：做问答式笔记

仍然是 **capture format** 这个设置项，我们可以玩点花样。你可以用这节介绍的方法来做问答日记，或者用来写晨间日记，或者为自己做一些简单的心理 / 情绪引导。

先来看一下效果：

![](https://mmbiz.qpic.cn/mmbiz_gif/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2TsckrvxfalViawibY1PiaA5IoyzCP0AO8icDkH9fbZgrZZiavl29HKP2C9Q/640?wx_fmt=gif)

上面演示的 capture format 设置内容如下：

```
### 行为疗法{{DATE:YYYYMMDDHHmm}}
- 你有什么感觉？
- {{VALUE:你有什么感觉？}}
- 现在你脑海中在想什么？
- {{VALUE:现在你脑海中在想什么？}}
- 它真实吗？
- {{VALUE:它真实吗？}}
> 我在思考，不一定意味着这是事实。

```

接下来说说原理：

1.  当使用 `{{VALUE:你有什么感觉？}}` 的时候，弹出的捕捉框会以 “你有什么感觉？” 作为输入提示文字。
    
2.  capture format 支持多个 {{VALUE}}，也就是你可以一次捕捉多个内容。
    

## 📜 Template 模板

介绍：快加文件，即用指定模板新建一个文件。

关于 quickadd 模板类型的用法，我在我的 Obsidian 工作流：模板 + QuickAdd+Dataview 快速创建和自动索引中有写过，而且用法也比较简单，在此就不再复述了。（工作流那篇文章中对每个设置项做了翻译，基本上看完翻译就都懂了）。

简单说下重点：

*   可以指定使用的模板。
    
*   可以指定新文件保存的位置。
    
*   模板文件中支持**格式语法**。
    

对，又是格式语法，我们上面有演示怎么写日期时间的格式语法，现在可以把它用在你的模板文件中，就可以做到自动记录创建时间。

下面是我的提案模板中 yaml 的写法。

```
---
title: {{NAME}}
UID: {{DATE:YYYYMMDDHHmmss}}
aliases: []
tags: []
项目状态: 提案
主题: {{VALUE:主题是什么？}}
date: {{DATE:YYYY-MM-DD HH:mm:ss}}
---

```

*   `{{NAME}}`是文件名的写法
    
*   `{{VALUE:主题是什么？}}`这种写法会作为一个提示输入弹窗，让我录入。
    
*   `{{DATE:YYYY-MM-DD HH:mm:ss}}`在创建文件时会变成当前的年月日时分秒
    

特殊格式语法：在模板中这样写，可以在新建时出现选择框。（该方法为 @简睿提供）

```
来源: {{VALUE:微信读书,纸书,bilibili,网络}}
```

`{{VALUE:值1,值2,值3}}`，在使用快加 Template 类型的命令新建文件时，会作为一个下拉选项让你选择。

![](https://mmbiz.qpic.cn/mmbiz_png/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2thjzVQBD68wicpZPDVOYnXEI1DM4ZvlkriaCnFXgUyQVpJrCJ44CmicoQ/640?wx_fmt=png)

📁multi 多（菜单）

介绍：将已经做好的快加命令做成组合菜单。

如果把创建的一个个快加捕捉命令和快加模板命令比作是文件的话，multi 就是文件夹。创建一个 multi，把单个快加命令拖拽进 multi，就像将文件拖拽进文件夹。

这个拖拽，需要点小技巧，就是往右侧框外拖，不然拖不进去。

![](https://mmbiz.qpic.cn/mmbiz_gif/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ2Dqmn6FvibXhWbndjEIqbbobicC06Xj0LDFXLOPpHphk44ibhURyo3uwfQ/640?wx_fmt=gif)

然后你就可以得到：

![](https://mmbiz.qpic.cn/mmbiz_gif/TDibWgTpJibRXPuvfOJqVYK2DSwSQIqcQ26QRy3IlKlXZufq8KwYg45qj8x0HeVAokibakqpnurjDoZgTQm6O41Pw/640?wx_fmt=gif)

结语

本篇以几个应用场景展开，并没有很全面的介绍 quickadd 的每一个设置，希望这有限的信息能够在你使用 quickadd 的路上助你一臂之力。

如果有用，欢迎留言告诉我，你的反馈，是我最大的动力。

谢谢你看到这里，我们下期见！如果没有了下期，那就祝你，上午好，晚上好，再见！

P.S. 由于博客发布和修改比较方便，文章一般会先发布到博客，后期有所修改也会在博客进行。点击原文链接，可查看博客原文。



