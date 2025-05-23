---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E4%BD%BF%E7%94%A8%E6%8A%80%E5%B7%A7/templater%E5%AE%9E%E7%8E%B0%E5%85%B3%E9%94%AE%E8%AF%8D%E8%87%AA%E5%8A%A8%E5%8C%96%E5%A5%97%E7%94%A8%E6%A8%A1%E6%9D%BF/
title: Templater 实现关键词自动化套用模板
date: 2023-11-13 00:00:23
tags:
  - 400兴趣类/Obsidian/Plugin/Templater
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: false
created: 2023-11-13T00:00
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 使用技巧

* * *

sr-annote { all: unset; }

## 功能概述

大家好我是铅笔小明（PencilMing)，今天给大家分享一个我在 obsidian 经常使用的一套自动化方案，这个功能我是从油管主播 Pamela Wang 的 ob 库里学到的，它可以让你在笔记中新建双链后，点击双链自动跳出选择套用的模板，还可以进一步选择要把笔记移动到指定文件夹。

比较直观的功能入下方 gif 所示：

![](https://cdn.pkmer.cn/images/249707380-0f3acb4a-251a-44a2-b15b-b7d243659104.gif)

目前这个功能只需要一个插件：Templater。进行前先确保已经安装了 Templater 插件。

我觉得也不需要一步步带着大家做，我会把代码和库都分享出来，方便大家下载直接修改使用。这里我只要去分析代码部分的修改代表的意义就可以方便大家去 DIY 对于自己独有的功能。

## 配置步骤

首先在选项里的文件与链接中指定一个新建笔记的存放位置，我这里就设置为 “00 - 临时” 这样我新建一个笔记，笔记就会自动移动到这个文件夹。

![](https://cdn.pkmer.cn/images/202306292310572.png!pkmer)

然后把 getTitleSnippet.js 复制到库内的文件夹。我这里是复制到 templater 下的 script 里。

然后向下继续设置，把 script 文件夹设置到对应的文件夹。这样可以读取到我们复制过来的 js 脚本功能。

![](https://cdn.pkmer.cn/images/202306292310861.png!pkmer)

我们先建立一个模板文件我命名为 “01 自动选择模板”，这个可以随意命名，只要后面和 templater 里设置的对应上就行。

这个模板里写入对应的 tp 语法。（会在最后分享）

![](https://cdn.pkmer.cn/images/202306292310219.png!pkmer)

最上面的代码是调取我们之前复制的 getTitleSnippet.js 这个功能。这个脚本的功能是获取文件名中 “-” 前的文字来贡下方的判断做选择。这个自动选择模板的功能是直接在写笔记的时候在 “-” 前写入关键词来让 ob 帮你判断这个笔记套用哪个模板，这样就不需要自己选择，可以设立多个关键词来对应同一个模板，比如我这里就设置了 “人物” 和“人”两个关键词，这样当我输入 `[[人物-张山]]` 或者 `[[人-李四]]`。然后点击双链创建新笔记的话就会自动套用对应的人物模板。再建立一个手动选择模板。如图所示。

![](https://cdn.pkmer.cn/images/202306292311698.png!pkmer)

手动选择模板的功能是为了当没有在笔记中写入 “-” 和特定的关键词时新建笔记会自动弹出一些模板供你选择出你希望这个笔记用到的模板。方便快速调用。

最后建一个模板算一个补充功能，可以帮助你把模板分类。比如在手动选择模板的时候你想只出现三个大领域的选项 “工作”“生活”“其他” 然后在每一个领域点进去以后再有对应的一些模板选项。

我这里建的是 “选择学习相关模板”

![](https://cdn.pkmer.cn/images/202306292311445.png!pkmer)

这个模板在自动选择模板中也出现过，也就是说如果我输入 `[[学习-学点东西]]` 然后点击双链建立新的笔记，那么它就会弹出几个学习模板选项供我选择。这样可能对模板多的人不会显得很杂乱。

接下来看一下 tp 的模板里需要如何设置和一些设置的具体功能

大部分设置我是喜欢放在 yaml 区，这样预览模式的时候看不到。先看一下需要选择路径的模板设置。这种模板适用于主文件夹里还有一些子文件夹，会涉及到路径的选择语法。

![](https://cdn.pkmer.cn/images/202306292312832.png!pkmer)

最上面的部分是调用 js 脚本来改笔记的名字，去掉 “-” 和之前的内容。下面部分就是路径选择的脚本功能。第二个类型就是不需要选择路径，只需要放到特定的文件夹就行。

![](https://cdn.pkmer.cn/images/202306292312568.png!pkmer)

这里就取消了选择语句，只要填入路径即可。

在 Templater 设置中。先打开 Enable Folder Templates，这个功能是自动让加入到某个文件夹中的笔记套用对应的模板。现在这个设置就是让所有新建的模板先过一遍自动选择模板。

![](https://cdn.pkmer.cn/images/202306292312135.png!pkmer)

![](https://cdn.pkmer.cn/images/202306292312175.png!pkmer)

设置结束以后，就可以正常使用这个功能了。我会放出这个功能的事例库，和用到的脚本。大家可以自行选择下载。

功能库 [下载链接](https://pan.baidu.com/s/1NTe_m8SI1sZHASyAD-xtPw?pwd=1c84) 提取码: 1c84

Obsidian 使用技巧 Templater 实现关键词自动化套用模板 Obsidian 社区插件 templater-obsidian