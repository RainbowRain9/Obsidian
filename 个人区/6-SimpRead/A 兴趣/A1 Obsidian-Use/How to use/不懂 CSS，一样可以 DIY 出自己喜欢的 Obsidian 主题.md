---
url: https://mp.weixin.qq.com/s?__biz=Mzg5Njk3MDUyMQ==&mid=2247487451&idx=1&sn=915e9fe3e5746ab2be1cf55df6103fae&chksm=c079b5adf70e3cbba868744630d1a3aedd562e80e3d13dcf93e4d6d12d09e0ef8354dbffa9c2&scene=21#wechat_redirect
title: 不懂 CSS，一样可以 DIY 出自己喜欢的 Obsidian 主题
date: 2023-11-12 00:18:22
tags:
  - 400兴趣类/Obsidian/教程/美化
banner:
  - https://mmbiz.qpic.cn/mmbiz_jpg/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5106SiaxmvqibhFSmPfrXrAVJ4faaYLGyycp0KvDwc4f67sf66kJm2nWg/0?wx_fmt=jpeg
banner_icon: 🔖
state: true
dtype: 教程
created: 2023-11-12T00:18
updated: 2024-04-13T12:49
---
大家好，我是来自 1037 号森林的 BCS！

为了能收到我的推文更新，请点击上方蓝字『维客笔记』**关注**并**星标**⭐哈

## 01 引言

美的东西谁不喜欢呢？！

emmm，对于 Ob 我更崇尚那种简约美，清爽舒心就行~

毕竟 Obsidian 是一个笔记软件，最主要的还是用来沉淀知识的

如果你像我一样整 (cai) 天(guai)捯饬插件和主题那就有点儿得不偿失了

插一条：看到 ob 官方论坛的展示，Ob V0.16 版本貌似自带主题非常好看了，到时估计直接用默认主题即可（仅猜测）

废话不说了，直接进入正题！

## 02 方案

以下方案，均是以 minimal 主题为例讨论的，其它主题应该也类似吧~

为啥是 minimal？ 两个字：**简约**啊🤣

### 要用到的工具有哪些？

*   Obsidian 本体
    
*   style settings 插件
    
*   minimal Theme settings 插件
    
*   snippets（CSS 代码片段） 『咱不是说，不用 CSS 吗？emmm，貌似说的是**不懂 CSS**，咱可以用现成的啊，就与用别人做好的插件一样，虽然不懂，但只要会使用即可，毕竟写 CSS / 插件不是咱们的主业』
    

`P.S.以上需要用的插件已上架Ob插件商店，检索下载安装即可，当然也可在文末获取（我会说我还分享了CSS代码片段了吗）`

以下站在 Ob 新手的角度，详细讲讲~

所谓的主题就简单理解为外观吧

比如：背景颜色 / 字体 / 字号 / 表格格式 / 标签样式......

### Ob 本体

*   点击设置
    
*   找到【外观】，见下图
    

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5c9ubksb0p3lhYIzCdjBldgrtPY0RtLWhhwEKK9jFQSnHkhkw8yox4Q/640?wx_fmt=png)

*   基础颜色可根据自己的喜好选择浅 / 暗，我个人目前比较喜欢浅色主题
    
*   然后点击【管理】进入主题商店，挑一款自己喜欢主题，我就用 minimal 了吧，当然 Blue Topaz 主题也是十分推荐的，对国人比较友好
    
*   主题安装之后，你便拥有了每个主题开发者默认设置的主题样式，虽然已经很精美了，但是总有个别点你不喜欢
    

再说一遍，我是以 minimal 主题为例修改的

#### **字体**

依然是在 Ob 的外观窗口，如下

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5MmdMz5IMEV4TqvFhv5M2T4AQea1SDL5nC0Y49X9fib9kVZQ4k83SfiaA/640?wx_fmt=png)

*   从上图我们可以看到界面 / 正文 / 代码字体，我们只需点击右侧的管理然后检索你系统上安装的字体名称，即可应用此字体。
    
*   上图中虽然每一项我都有很多字体，但真正生效的只有最前面的一种哈，也就是说，我的界面和正文字体都是思源宋体 CN；代码字体是 Inconsolata
    
*   代码字体下面还有两个选项，字体大小和快速调整字体大小，这个根据你自己需要设置即可
    
*   要强调的一点是，你安装了 minimal Theme settings 插件之后，在选项里要将 Editor Font 中的内容删除，不然上述的设置是无效的，见下图
    
    ![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5tvaiaiaCsmic5EiasEIQtoQtp2TsyVcJpU5xUkAcPgyicLqEyzgRgLPwG3Q/640?wx_fmt=png)
    

### style settings 插件

也许你想将笔记中的各级标题和正文字体设置为不同的字体！没问题，也简单，见下图

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z59QDlHjgH9G4ibepvjJpyicQlfpSF5ib5C2HZ8srqskoiakBuHyicDhWbRUQ/640?wx_fmt=png)

style settings 插件选项窗口

*   打开 style settings 插件选项窗口
    
*   找到 Minimal---headings，在 4 处输入你需要的字体名称即可
    
*   当然除了可以设置字体外，你还可以设置各级标题的字号 / 颜色 / 字重（字体的粗细程度）
    

关于字体的设置就全部说完了，但 Style Settings 的内容还多着呢

仔细看一下 Style Settings 插件的全貌

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5e7xcI98jvT3RGpKFgVPYdTyyGdsM9wdIGuasRo2yUmAXTiabKAQjYFg/640?wx_fmt=png)

除了 mimal 主题的设置选项外，还包含其它插件的样式设置

emmm，我们这里还是看 minimal 吧，见下图，几乎你想设置的项目它都给了，你只需动动鼠标就行了，根本不需要懂 CSS

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5CV4bCuhBPzsic8D2JkTOfuQOHTbicpxSfkT7XibkNica3iceWxJ6zoY8mJA/640?wx_fmt=png)

此时，你可能想说，如果可以边调节边预览效果就好了😕

这个必须可啊

在笔记窗口，ctrl+P，在弹出窗口输入 style，选择下图的命令

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z556cNEUtqHlDK31wV8iaiaKAMKGa4lCibW2Mw9cMsU5Gf3WMzSPic1Csiang/640?wx_fmt=png)

此时，你的笔记面板和 style settings 窗口就能一起并排显示了，见下图

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5eBuPKKiaIqoXJwRbicPFsKfSclExib5XtGwuzTVfw4spIfiaYl0VqZ9TEQ/640?wx_fmt=png)

左边是笔记窗口，右边是 style settings 窗口

竟然暴露了开箱即用库 2.0 版本🤣  2.0 版本将可以进行很规范的学术论文写作了，可以导出为 word 且依然可用 zotero 对插入的参考文献进行批量管理 / 样式调整

### minimal Theme settings 插件

看名称也知道这个是 minimal 主题专用的插件

也可对主题的诸多元素进行调节

*   第一大项是 color scheme，就是开发者内置了几套配色方案，我个人比较喜欢 Nord 风格
    

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5wtWAgnMKKR97CzJw3nKv3XTqcHKwtGYs87HiasN7P9Jibo3yNl8WNJQQ/640?wx_fmt=png)

还有就是可以调节不同界面的对比度，这些都是看个人喜好吧

*   第二大项也是一些主题元素的设置
    
    ![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5TxTjgiaIJAwHFickPNXjcib695ckvQp3tUDvMqvZFIrOUXx7iaRVgzL4iaw/640?wx_fmt=png)
    
    比如可以设置彩色标题，使用迷你版状态栏，隐藏界面键间的边界线等等等
    
*   Layout 的设置，你还需要额外安装一个插件 contextual 插件
    

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5jkswHJr3YiakUPQIUA9mPAUWUrxsB5ADr1YU5VANSXv42uTfuHH4iaLQ/640?wx_fmt=png)

我没这些需求，就懒得安装了

*   Tables 这一项都是可以设置一下，毕竟大多数人都会用到 Dataview 嘛
    

### 代码片段

虽然上面几个已经能 DIY 很多东西了，但还是不能够啊

比如，我想给文件夹前面加一个图标（我知道 icon folder 插件可以做到，但是 bug 太多，不建议使用）

你看我的开箱即用库中文件夹前面的图标就是利用代码片段搞定的

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z55qkjxGFeHAHGaJzCIAOoQNFia0NmS2G1ZddYp1RLo5iaU1L5oB0w6fxQ/640?wx_fmt=png)

怎么搞定？

打开 Ob 设置 --- 外观 ---CSS 代码片段，见下图

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z57PLbnuAI3xTBicBMnGLs5XsKrzB6kzX5iaZT8xVW6OFylgqS4P7TOb2w/640?wx_fmt=png)

*   此 CSS 代码片段请在文末获取
    
*   拿到之后，用记事本打开，要把里面每个文件夹的名称更改为你自己的文件夹名称，图标也可以自定义，见下图
    

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5ZJ2Q3wmBic7AJxKoNqUl7sBQogwgVBaRVavvpWf0SJaht1Is1k6musA/640?wx_fmt=png)

*   更改完之后保存，将其放入 Valut/.Obsidian/snippets 文件夹中
    
*   再次打开 Ob 设置 --- 外观 ---CSS 代码片段，刷新一下，启用上述的代码片段
    

当然你还可能还需要别的代码片段，直接去 Ob 中英文论坛里去淘哈

## 03 写在最后

你可能还要像把 dataview 的表格风变成卡片风，见下面的动图

![](https://mmbiz.qpic.cn/mmbiz_gif/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5X0cMZ4NKEuE0YZkia00KiaZ2SY2ib1smS8JWLjOcdYTqJRkOmwd8hFUCA/640?wx_fmt=gif)

来自 minimal 主题开发者的演示图

很简单，在笔记最前面（Yaml 区）加上这个`cssClasses: cards`，如下图所示

![](https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWRyiaZyv3LTGJ1y16FJ3E7Z5ttHiaCeh7eibIShWyG1SGnPsKAicUAKVtlIlmMyRPO4JowhpcdkJibQicMQ/640?wx_fmt=png)

前提是你用 minimal 主题，用别的主题我没试过（大概率是没有，不过倒是可以找找代码片段）

插件以及代码片段还有更多 minimal 主题设置教程，请关注**维客笔记**微信公众号，后台聊天窗口回复 **20221011**

如果喜欢，给个**赞赏**也是可以的哈😋  

感谢关注 / 点赞 / 分享

_A better you, A bigger world!_