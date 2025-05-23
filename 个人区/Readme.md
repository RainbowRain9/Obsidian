---
created time: 2023-11-11 HH:mm:ss
updated time: 2023-11-26 HH:mm:ss
created: 2023-11-11T20:12
updated: 2023-11-26T14:47
---

## 说明
> 欢迎来到知识管理入门库，本库由Lillian Who 整理。
> - obsidian 使用难易程度：⭐️⭐️
> - 知识管理难易程度：⭐️⭐️
> 

本库最主要的功能为==快速添加各类型知识卡片== 和 ==自动聚合资源列表==，节省了研究obsidian的基础设置和研究如何管理笔记的时间。

让我们从使用场景的需求开始！

## 使用指引：假设你是第一次用obsidian

或许你想用来：
- 记日记：像logsql一样每天从日记开始，或是写[[间歇日记]]。
- 写读书笔记：看了书之后，想整理出读书笔记。并且，想要能直观看到自己已读的书有哪些、在读的书有哪些。
- 写观影笔记，或者只是想在ob里管理自己的观影记录。
- 文章笔记、视频笔记、播客笔记...... 并且希望能分类看到这些记录的列表。
- 记知识、概念笔记

以上需求对应到本库的5种笔记。

![image.png](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700727.png)


### 写日记/间歇日记
有2种方法可以快速开始今天的日记。
![image.png](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700728.png)

memos 是一个第三方插件，和核心插件「日记」配合，能够快速向日记内的指定标题下（当前指定为`## 闪念`标题）添加带格式的内容。使用memos 输入当下的想法（闪念），可以自动向日记中插入带时间戳的笔记，是个开始间歇日记的绝佳工具。

你也可以在面板左侧的工具条点击💡图标，在笔记区打开memos界面。

请自由地在日记里记笔记吧，这点使用上和 logsql 没什么差别。

如果想要每天的日记插入更丰富的笔记格式，比如晨间日记等，请打开 `_Templates/tp/日记模板` ，在文件中自定义内容。

#### 简单管理当日待办
内置了一个简单的待办清单插件「todo list」，它识别所有笔记中的`#todo`标签下面的待办列表，显示在右侧工具栏。这个`#todo`标签是指定的，可以在插件设置面板更换。

![image.png](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700729.png)

### 添加读书笔记
添加读书笔记时，我们可以使用一些插件帮助我们自动拉取图书的元信息，而不用自己一个个抄写。我们只用关心自己做的笔记那一部分，元数据交给插件去处理。

有两种方式拉取图书信息，一个是weread插件，拉取的是微信读书中你的阅读数据（你没读的书不会被拉取）。使用方法见： [[#微信阅读(weread)插件的使用]]

另一个是使用添加豆瓣读书的快捷指令，拉取豆瓣读书中的数据，只要复制豆瓣读书中的图书详情页链接，就可以。

![添加豆瓣读书演示](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700734.gif)

### 添加观影笔记
使用添加豆瓣电影的快捷指令。
![添加豆瓣电影](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700730.gif)
### 输入笔记
`Alt/command + P`，调出命令面板，选择「QcuikAdd：快加文件」，继续选择「输入笔记」。在这里查看详细介绍：[[#^e78d15]] 

📢 操作小提示：按住`Alt/command`键，同时光标悬浮到双链上，可以直接预览内容。

![输入笔记](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700731.gif)

### 概念笔记
`Alt/command + P`，调出命令面板，选择「QcuikAdd：快加文件」，继续选择「概念笔记」。
![添加概念卡](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700736.gif)

添加笔记的操作就简单介绍到这里，下面有详细的更多操作的解释。

各种笔记的聚合数据，请查看这里：[[#数据聚合]]

## 操作速查

### QuickAdd 快加指令

`Alt/command + P`，调出命令面板，我已经为你准备好了最常用的命令（其实最常用的就是`QuickAdd:快加文件`）。- 2023-11-11 20:23 ✍🏻 QuickAdd 

![Pasted image 20230522002951](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700737.png)

#### QuickAdd: 即刻

捕捉输入内容，会把输入内容放置到当前笔记正在编辑的地方，并且加上时间戳。比如：
- 2023-05-22 00:31 ✍🏻 hi`

#### QuickAdd: admonition：

因为admonition代码太长了，记不住，所以把各个类型的标记建立了命令，调用后直接填内容就可以了。


#### QuickAdd: 快加文件 ⭐️⭐️⭐️
快速添加新笔记文件，这个是重点⭐️，下面展开介绍。

![Pasted image 20230523091256](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700738.png)

- ⚡️闪念卡：选择后输入内容，会添加一个新笔记文件到`1-生活`文件夹下面，文件名为当前时间戳，输入框内的内容会作为笔记正文。
- 🧠概念笔记：比如学到的概念。选中后选择笔记保存的文件夹，然后输入主题名。会创建一个新笔记文件在选择的文件夹下，并以输入主题名作为文件名。
	- P.S. 这里运用的是主题词文档管理方法，`obsidian`、`知识管理`、`卡片笔记法`、`星冰乐`、`火锅`、`潮汕火锅`、`火锅酱碟`......等等这些，都是用主题词命名（粗略的理解，类似于英语中的n.名词）
- ✍🏻输入笔记：我们都知道知识管理分为输入和输出，这里的输入指的就是平时观影、阅读、看文章、报纸、视频、听播客时获得的知识。 ^e78d15
	- 选中后选择笔记保存的文件夹，然后输入笔记名。这里最好使用资源本来的名字。比如看的一个视频，视频名字是什么就直接拿来当笔记名，这样比较容易记忆。
- Area：领域笔记，这是P.A.R.A中的概念，指的是我们长期关注的领域。
- Project：项目笔记，也是P.A.R.A中的概念，领域和项目是有联系的，领域的项目的上层，项目属于领域。
- 添加豆瓣和图书卡片就不多说了，复制豆瓣链接进来就可以拉取豆瓣数据，电影卡会被自动放到`3-知识宝箱/J 艺术/电影` 文件夹下。

### 数据聚合
在`00-MOC`文件夹下，放着各种影音视频图书的聚合数据。
![Pasted image 20230522013324](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700739.png)

阅读动态效果展示：
![Pasted image 20230522010516](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700740.png)

在[[00-MOC/home]] 页，放了快速进入四大类型资源的链接：
![Pasted image 20230522010743](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700741.png)
另外，Home 页也展示了阅读动态和观影动态。如需展示视频笔记和博客笔记的表格，可以自行在home页底部用双链语法引入相应笔记。

### 微信阅读(weread)插件的使用
先到插件设置里，扫码登录自己的微信读书账号。
![Pasted image 20230523082135](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700742.png)

配置完成后，点击左侧工具条上的 `weread` 图标，开始拉取微信读书数据。**注意：Weread 插件每次都是全量拉取，没有更新的会自动跳过。全量拉取代表着你无法单独拉取某一本书。**
![Pasted image 20230522013551](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700743.png)

数据拉取完毕，在`2-weread`文件夹找到拉取的文件。
![Pasted image 20230522013801](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700744.png)

⚠️ 不要在这个文件上直接做笔记，因为再次拉取时会被覆盖。如果你要做读书笔记，新建一个文件，或者删掉yaml中的`doc_type`和`bookId`这两个字段（没了这两个字段就不会被覆盖了）。并且把笔记文件放到 `3-知识宝箱` 文件夹下。

### 想要图片网络化
也就是粘贴和拖放进ob的图片，都自动上传到图床，图片去本地化。

利用 `image outo upload plugin` 插件。⚠️ 这个插件要配合 `picgo`软件使用。


电脑安装picgo之后，在设置里设置好自己使用的图床。
![image.png](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700732.png)

测试能够上传图片之后，返回到obsidian中，进行插件设置。

第三方插件列表启用该插件，然后打开插件配置。选择默认上传器和填写picgo server（开箱即用库已经默认填好了，其实你只要安装好picgo 配置上图床就可以了）。
![image.png](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700733.png)


在ob里就能正常使用自动上传图片功能了。

## 知识管理理念
前面你做的笔记中，除了日记，全都是知识笔记。我建议你用主题词为笔记命名。

如果你接受分类法，知识宝箱里已经内置了常用的中图法分类文件夹，创建笔记时你可以选择把它们分门别类。当你的笔记还不多，或者不想用分类法时，把笔记全放到知识宝箱也没有问题。

因为你使用了主题词命名，所以还是能够很好的找到想要的笔记的。

本库建议引入 [[P.R.P.A]] 的方法来管理知识库，在OB中<span style="background:#ffff00">具体操作</span>如下：
1.  创建一个知识笔记，放上可以溯源的链接（书和电影有元数据就可以，网络来源放上链接）
2.  然后记下让自己有启发的知识点（这才是被自己吸收的知识）
3.  然后打开项目文件夹，看看可以关联到哪个项目，也就是可以应用到什么场景。
    1.  当这个项目不存在时，新建它。
    2.  并且项目夹集中管理，这表示所有的生活解决方案我都可以在这里找到。这才是为我所用的工具箱。
    3.  比如：如何读书、如何做笔记、如何找到目标、如何制定计划、如何打造生活管理系统（手帐体系）。
4.  在知识笔记中添加「应用于」模块，引入项目笔记
5.  在项目笔记的「资源」模块添加知识笔记的链接。

具体请参考 [[6-SimpRead/A 兴趣/A1 Obsidian-Use/【视频笔记】打造第二大脑：如何记得所有看过的东西 _ 对 obsidian 知识库的改造灵感：：夜猫日记]]

## 如何自定义

### 如何修改笔记模板？
本库的笔记大多使用模板，模板文件放在 `_Templates/tp`文件夹下。如果想改变模板的内容，请到这个文件夹下找对应的模板文件，然后修改文件内容。

如果不确定某个quickAdd指令使用的是什么模板，可以：
- 打开`⚙设置`，在左侧`第三方插件` 下面找到 `QuickAdd` ，点击进入quickadd的设置面板。
- 然后找到对应的quickadd命令后面的小齿轮，点击进入该命令的设置页，最上方一个选项就是模板的位置和模板文件名。

### 如何修改自动创建的笔记默认存放的位置？
比如你修改了生活文件夹名字，或者你的日记想换一个文件夹保存。打开`设置>核心插件>日记`，修改`新建日记的存放位置`。
![Pasted image 20230522011942](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700745.png)

如果想修改quickAdd 添加的笔记默认存放的位置，打开 `设置>第三方插件>QuickAdd`，找到相应的qa命令设置，有三种放置文件夹的方式。

第一种：创建笔记时询问，手动选择文件夹

![Pasted image 20230522012434](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700746.png)

第二种：指定一个固定文件夹，新建的笔记存放到这个指定的文件夹下
![Pasted image 20230522012845](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700747.png)

第三种：新文件放在当前活跃的文件同目录下。比如我现在在根目录，使用命令创建文件后，新笔记同样放在了根目录。
![Pasted image 20230522013127](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700748.png)

### 想要好看的样式效果？
请到主题设置里，`设置>第三方插件> Style Settings`，里面有很多好玩的效果，比如五彩文件夹之类的。本库默认使用的是 BlueTopaz，里面有多个配色方案可以选择。

![Pasted image 20230522014608](https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202311121700749.png)

## 结束语
本库的介绍就到这里，接下来请享受你的ob旅程吧！

本库本着**最小可用原则**建立，希望能够帮助到刚接触ob，觉得各种设置繁复、难以上手的用户。

本库为新入门用户提供了一个快捷可用的知识管理架构和工作流，更多的个性化操作和美化插件、样式，可以自行根据喜好添加。

你可以继续研究各种ob的按钮功能、快捷键用法、插件、美化样式，愿你用的愉快！


