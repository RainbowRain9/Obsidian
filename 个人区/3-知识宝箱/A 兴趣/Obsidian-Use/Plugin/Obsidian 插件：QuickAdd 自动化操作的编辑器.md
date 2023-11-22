---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/quickadd/
title: Obsidian 插件：QuickAdd 自动化操作的编辑器
date: 2023-11-13 00:03:04
tags:
  - 400兴趣类/笔记软件/Obsidian/Plugin/QuickAdd
host: pkmer.cn
source: Pkmer
type: 插件
banner: "/img/pkmer-avatar.png"
banner_icon: 🔖
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

**插件名片**

*   插件名称：QuickAdd
*   插件版本：0.23.0
*   插件作者：Christian B. B. Houmann
*   插件说明：组合 Obsidian 里所有操作，低阶使操作可视化自动化，高阶使用可编写脚本实现万物互联
*   插件项目地址：[点我跳转](https://github.com/chhoumann/quickadd)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?quickadd)

## 社区使用技巧

*   [Quickadd 结合 CSS 实现挖空复习](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E4%BD%BF%E7%94%A8%E6%8A%80%E5%B7%A7/mon/quickadd%E7%BB%93%E5%90%88css%E5%AE%9E%E7%8E%B0%E6%8C%96%E7%A9%BA%E5%A4%8D%E4%B9%A0)

## 参考资料

*   [Obsidian 最强插件：QuickAdd](https://sspai.com/post/69375#!)：新手友好的轻量级 Quickadd 教程
*   [Capture: Add journal entry | QuickAdd (obsidian.guide)](https://quickadd.obsidian.guide/docs/Examples/Capture_AddJournalEntry)：Quickadd 官方出品的文档，提供了多个示例，包括和 Zotero 的联动

## 基本使用

![](https://cdn.pkmer.cn/images/20230513092941.png!pkmer)

1.  设置界面有个输入框，输入命令的名称，在调用时方便使用。
2.  在设置界面点击 `Template` 指定类型的 Quickadd 命令，类型在下述核心概念阐述。
3.  点击 `Add Choice` 添加该类型的命令，按照弹出界面进行配置，确定后这时候这个命令就会添加到界面里。
4.  点击闪电图标激活命令，点击设置图标设置命令
5.  除了 Macro 之外需要点击 `Manage Macros` 单独的一系列配置，其他命令就可以使用了
6.  `Ctrl P` 快捷键弹出命令窗口，输入命令名就可运行 Quickadd 了

Quickadd 的使用需要明白四个核心概念：

1.  模板 Template：直接调用模板创建新的笔记，也可以利用 inline script 实现格式化模板
2.  捕获 Capture：快速添加可格式化内容到当前笔记或添加可格式化内容到具体笔记的具体位置
3.  组合命令 Macro：obsidian 命令，编辑器命令，用户脚本，已有的 Template 或 Capture
4.  Multi：类似于文件夹的功能将上述内容进行管理

### template

大多数模板功能都分为两个部分：模板定义文件和模板设置文件。前者类似于一篇笔记，里面是一些占位符：

![](https://cdn.pkmer.cn/images/20230513091421.png!pkmer)

那些双括号和代码块就是占位符，当调用模板文件时，会根据设置的规则自动进行填充，或者弹出输入框手动填充。自动填充的应用场景包括：自动获取网页上的数据，结合多个脚本从上一个脚本中获取数据，根据应用场景自动生成对应场景的模板等。高度自定义上手难度较高，需要一些 Javascript 编程经验。

后者是一些设置项，类似于这样：

![](https://cdn.pkmer.cn/images/20230513091234.png!pkmer)

除了高度自定义的形式，Quickadd 还提供了一些常见的功能以图形界面展示，方便无编程经验的朋友使用。包括重命名笔记，在新的标签页打开，自动聚焦到新标签页等。

和 Quickadd 的模板功能很像的一个插件是 [templater-obsidian](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/templater/templater-obsidian)，这个插件使用 `eta` 模板引擎生成模板，同样可编程高度自定义。差别在于 templater 提供更多模板的定制选项，更适合新手用户，二者并无冲突，模板的定义甚至可同时使用。

### Capture

通过已有规则以指定格式快速添加内容到指定笔记。其设置选项如下：

![](https://cdn.pkmer.cn/images/20230513092635.png!pkmer)

能实现的功能包括但不限于弹出窗口，捕获内容到任意笔记的任意块级内容前后。对于未创建的笔记也能使用。这个功能适用于笔记级别的添加操作，在当前文件下按规则自动添加内容的情况下，和 [obsidian-latex-suite](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-latex-suite) 插件是行级别的自动补全有点区别，后者体验更好。

### Macro

Quickadd 最强大的地方就是这个 Macro 了，它能把一系列的命令组合起来，形成一个处理流程。这些命令包括自定义的脚本，而本地软件的自定义脚本，能够通过系统命令，调用包括 Python，Rust 等其他语言写的脚本。

### 组合命令

轻量级使用可以组合常用操作，比如下面这个我最常用的：

![](https://cdn.pkmer.cn/images/20230513100818.png!pkmer)

一般来说拆分窗口是为了打开另外一个笔记，如果没有 Quickadd 我需要手动完成：

1.  快捷键拆分窗口到右侧
2.  鼠标点击或者快捷键聚焦到右侧
3.  执行命令或者快捷键打开快速切换
4.  选择对应的笔记打开

有了 Quickadd 组合整个流程，我只需要按了快捷键后就可直接到第四步，体验大大提升，一个快捷键就组合了多个快捷键才能实现的操作。除此之外，创建笔记后自动调用模板，在文件树显示笔记后自动聚焦到当前笔记等，都是很实用的功能，它让 Obsidian 里的所有操作都能**尽可能符合你自己的习惯**。

### 脚本增强

高阶使用就需要使用脚本了，大大拓宽了应用场景和操作上限：

![](https://cdn.pkmer.cn/images/20230513101852.png!pkmer)

这是我写的一个小脚本：

```
const child_process = require('child_process')
const basePath = app.vault.adapter.basePath.replaceAll("\\","/")
const filePath = app.workspace.activeLeaf.view.file.path
const line = app.workspace.activeLeaf.view.editor.getCursor().line

module.exports = async (params) => {
  //console.log(basePath)
  const options = ["terminal", "css", "script", "vim", "vscode"]
  const action = await params.quickAddApi.suggester(options,options)
  //console.log(action)
  if(action === options[0]){
    await child_process.exec(`wt -d ${basePath}`)
  }else if(action === options[1]){
    await child_process.exec(`code ${basePath}\\.obsidian\\snippets`)
  }else if(action === options[2]){
    await child_process.exec(`code ${basePath}\\Config`)
  }else if(action === options[3]){
    await child_process.exec(`gvim "${basePath}/${filePath}"`)
  }else if(action === options[4]){
    await child_process.exec(`code -g "${basePath}/${filePath}:${line}" `)
  }
}

```

这个脚本能快速通过 `Vscode`，`Vim` 打开我的脚本，CSS 文件夹，方便编辑和调试，这在补足 Obsidian 功能时非常好使，正则替换，全局替换，git 管理笔记这些使用场景，能显著提升幸福感。经 Quickadd 组合也就一个快捷键的事。

## 插件联动

除此之外，通过 Obsidian API 可以联动多个插件，[Macro: Change properties in your daily notes (requires MetaEdit)](https://quickadd.obsidian.guide/docs/Examples/Macro_ChangePropertyInDailyNotes) 联动的是 MetaEdit 插件，

## 第三方在线服务联动

得益于能写脚本，[Capture: Fetch Tasks From Todoist](https://quickadd.obsidian.guide/docs/Examples/Capture_FetchTasksFromTodoist) 能够从 Todoist 这款软件中通过 API 的方式获取任务，更新到 Obsidian 中。常见的使用场景包括获取天气，豆瓣读书信息，电影信息，Readwise 收集等。

## 第三方本地服务联动

第三方服务联动如果没提供 API 是很难获取到数据的，而本地服务则可以直接对数据存储进行操作。比如直接读取 Zotero 数据库，Sioyek 数据库获取书籍和笔记信息。

## AI 增强

继续进阶使用便是 AI 功能了，通过调用 ChatGPT 实现比 [obsidian-textgenerator-plugin](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-textgenerator-plugin) 这样做好的 AI 更加细腻的控制，定制化更强，难度理所当然更大一点。开发者也提供了一些友好的操作，[AI Assistant for Obsidian](https://bagerbach.com/blog/obsidian-ai#actionable-takeaways) 则比较详细的描述了如何使用 Quickadd 的 AI 辅助功能，包括：

*   自动生成 MOC
*   总结
*   文本转换
*   闪卡创建
*   提示
*   链式提示：即包含提问上下文的提示
*   配合 Readwise 总结书籍内容
*   Youtube 视频总结

## 其他技巧

### 全局打开

由于 Obsidian 的机制，需要打开 Obsidian 才能执行 Quickadd 命令，于是乎社区想了很多办法：

1.  配合插件 [Global Hotkeys](https://github.com/mjessome/obsidian-global-hotkeys)
2.   配合 [AutoHotkey](https://www.autohotkey.com/) 脚本，进一步自动化打开 Obsidian 和发送指定按键
3.  [obsidian-advanced-uri](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-advanced-uri) 及其它启动器软件
    1.  AutoHotkey：此版本相较于纯 Autohotkey 更简单
    2.  utools
    3.  Alfred
    4.  Raycast

注：这里只有 utools 是全平台的，AutoHotkey 是 Windows 独占的开源软件，Alfred，Raycast 是 Mac 独占商业软件。

## 视频教程

*   【【从零开始学 OB】—— QuickAdd (上) 助力提升笔记效率】

*   【【从零开始学 OB】—— QuickAdd (下) 助力提升笔记效率】

Quickadd 结合 CSS 实现挖空复习 buttonsobsidian-advanced-uriobsidian-homepageobsidian-latex-suiteobsidian-textgenerator-pluginObsidian 社区插件 quickaddtemplater-obsidian