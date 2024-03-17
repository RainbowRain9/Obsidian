---
url: https://github.com/reuseman/flashcards-obsidian/wiki
title: "[[Obsidian-Anki的用法]]"
date: 2023-11-10 12:54:28
tags:
  - 400兴趣类/电脑软件/Obsidian/Plugin/同步/Anki
banner:
  - https://opengraph.githubassets.com/a1fe4171eb88711478981cb73a84cdc0cb4409a7186eaf24d7e64f743defd854/reuseman/flashcards-obsidian
banner_icon: 🔖
state: true
time: ""
---

- ## [目录](#table-of-contents)
  
  *   [要求](#requirements)
  *   [写卡片](#write-cards)
    *   [#card 标签](#-card-hashtag)
    *   [内联样式 ：：](#inline-style-with---)
        *   [反向](#reverse)
    *   [完形填空](#cloze)
    *   [以 #card 间隔的主题标签为间距](#spaced-with-card-spaced-hashtag)
  *   [在 Anki 上生成卡片](#generate-cards-on-anki)
    *   [插入](#insert)
    *   [更新](#update)
    *   [删除](#delete)
  *   [特征](#features)
    *   [情境感知模式](#con[[text]]-aware-mode)
    *   [甲板](#deck)
        *   [基于文件夹的套牌名称](#folder-based-deck-name)
    *   [标签](#tags)
    *   [图像](#images)
    *   [代码突出显示支持](#code-highlight-support)
    *   [源支持](#source-support)
    *   [LaTeX 支持](#latex-support)
  *   [故障 排除](#troubleshooting)
  *   [定制](#customization)
- ## [要求](#requirements)
  
  首先，Anki 和 [AnkiConnect](https://ankiweb.net/shared/info/2055492159) 应该正确运行和配置，如此[处](https://github.com/reuseman/flashcards-obsidian/#how-to-install)所述。
- ## [写卡片](#write-cards)
  
  目前，主题标签是定义它们的方式。它可以在设置中自定义，但默认是 . 这里有一个示例文件（[预览](https://github.com/reuseman/flashcards-obsidian/blob/main/docs/demo.md) | [降价](https://raw.githubusercontent.com/reuseman/flashcards-obsidian/main/docs/demo.md)）。`#card`
- ### [#card 标签](#card-hashtag)
  
  要将一行或标题标记为卡片的**正面**，只需在它后面写一个 **#card** 标签即可。在新行上写出卡片**的背面**。记住要把东西隔开！
  
  ```
  # This could be a title
  
  ## This is the front #card    
  This is the back of the card.
  
  This line will not be part of it, because there is an empty line above.
  
  ### This is a normal and reversed card #card-reverse
  Which means that two cards will be generated on Anki.
  
  ### Also revers #card/reverse
  But this time it uses Obsidian hierarchical tags.
  
  ### This could be another question #card
  But this time without the heading.
  
  ## This is another way to define the front
  #card 
  This style is usefull to avoid the hashtags when referencing in Obsidian
  
  
  ```
- ### [内联样式 ：：](#inline-style-with-)
  
  ```
  # This could be a title
  
  All of these works:
  My question::My answer
  My question:: My answer
  My question ::My Answer
  My question :: My answer
  
  You can even use it in lists:
  - My question:: My answer
  
  ```
- #### [反向](#reverse)
  
  要创建具有内联样式的反转卡，只需使用 .`:::`
  
  ```
  All of these works:
  My question:::My answer
  My question::: My answer
  My question :::My Answer
  My question ::: My answer
  
  ```
- ### [完形填空](#cloze)
  
  ```
  This is a way to define a ==cloze== by using the Obsidian highlight syntax in order to avoid making notes dirty.
  The alternative is this type of {cloze} that is totally equal to {1:cloze}. With the number you can specify the order {2:later cloze}.
  
  
  ```
- ### [以 #card 间隔的主题标签为间距](#spaced-with-card-spaced-hashtag)
  
  ```
  This could be a beautifull quote that you want to see once in a while #card-spaced
  
  ```
  
  或者，您可以考虑使用黑曜石分层标签的替代方法。`#card/spaced`
- ## [在 Anki 上生成卡片](#generate-cards-on-anki)
  
  1.  在 Obsidian 中，打开包含抽认卡的文件
  2.  然后要插入 / 更新 / 删除，只需在黑曜石中运行命令并执行命令`Ctrl+p``Flashcards: generate for the current file`
- ### [插入](#insert)
  
  写下卡片，然后运行上面的命令。插入操作将在 Anki 上添加卡片。而在黑曜石中，它会添加一个 ID 来跟踪它们。
- ### [更新](#update)
  
  只需在黑曜石中编辑卡片，然后运行上面的命令即可。  
  **注意：确保在要更新时关闭 Anki 的 BROWSE（浏览）窗口。**不幸的是，这是一个我无法控制的错误，但它是与我正在使用的 Anki API 相关的问题。
- ### [删除](#delete)
  
  在黑曜石中删除卡片的内容，但不删除 ID。该插件将处理它。例如
  
  ```
  ## This is the front of the card to delete #card    
  This is the back of the card to delete.
  ^1607361487244
  
  ```
  
  这是你应该留下的：
- ## [特征](#features)
- ### [情境感知模式](#context-aware-mode)
  
  为了理解笔记，他们应该谈论一个特定的主题，所以如果你有两个 1 级的标题（# 标题），你可能应该有两个关于这些主题的笔记。此外，注释本身是用树状结构书写的，然后以图形方式连接。基于此假设，上下文感知模式在卡片**的前面**创建上下文。其中上下文是树结构中标题的轮廓。演示显示正在运行。这可以帮助您：
  
  *   **在复习过程中**，因为前面将**是独一无二的**，这有助于记忆找到正确的答案。如果正面重复多张牌，就不可能记住后面的内容，这纯粹是随机性的。
  *   **在写作过程中**，因为您可以按照相同的结构为不同的主题写作，并且卡片将永远**是唯一的**。所以你不必过多考虑写作本身。
  
  **例：**
  
  ```
  # Computer Science
  
  ## Languages #card
  Stuff
  
  ### OOP #card
  Stuff
  
  #### C++ #card
  Stuff
  
  #### Java #card
  Answer
  
  ### Functional
  Stuff
  
  ```
  
  **为 Java 标题生成的卡片**
  
  *   开启🟢情境感知模式
  
  ```
  Front: Computer Science > Languages > OOP > Java
  Back: Answer
  
  
  ```
  
  *   关闭🔴情境感知模式
- ### [甲板](#deck)
  
  要定义牌应该在 Anki 中的哪一副牌中，请在[前面写下](https://publish.obsidian.md/help/Advanced+topics/YAML+front+matter)牌组的名称。您甚至可以使用两个冒号 . 如果您想在生成卡牌后更改卡组，只需更改卡组名称即可。`My Deck Name::Sub deck`
  
  ```
  ---
  cards-deck: My Deck Name
  ---
  
  ## This is the front #card    
  This is the back of the card.
  
  ```
- #### [基于文件夹的套牌名称](#folder-based-deck-name)
  
  这应该在设置中启用。. 它能够自动将卡片创建到遵循音符所在位置的分层路径的牌组中。 例如，如果路径中有一个文件，则卡片将在名为 的牌组中生成。`Default: On``food/italian/cavatelli.md``food::italian`
### 标签
  card-last-interval:: -1
  card-repeats:: 1
  card-ease-factor:: 2.5
  card-next-schedule:: 2023-11-11T16:00:00.000Z
  card-last-reviewed:: 2023-11-11T05:48:29.377Z
  card-last-score:: 1
  
  要定义应该在 Anki 中使用的标签，有两种方法。
  
  *   全局标签：采用以 开头的任何行之后指定的所有标签。要将它们隐藏在预览中，只需将它们放在黑曜石[的正面即可](https://publish.obsidian.md/help/Advanced+topics/YAML+front+matter)。`tags:`
  *   本地标签：获取 #card 标签之后的标签。
  
  ```
  ---
  tags: global-tag1, global-tag2
  ---
  
  ## This is the front #card #my-local-tag
  This is the back of the card.
  
  ```
  
  全局标签甚至可以这样定义：
  
  ```
  tags: global-tag1, #global-tag2, [[global-tag3]]
  
  ```
  
  或不带逗号：
  
  ```
  tags: global-tag1 #global-tag2 [[global-tag3]]
  
  ```
### 图像
  
  要添加图像，只需正常[嵌入](https://publish.obsidian.md/help/How+to/Embed+files)它们即可。
- ### [代码突出显示支持](#code-highlight-support)
  
  这应该在设置中启用。`Default: Off`
- ### [源支持](#source-support)
  
  这应该在设置中启用。  
  请注意，无论何时启用，除非切换回，否则无法更新以前在没有源支持的情况下创建的卡。我的建议是坚持使用一种模式。`Default: Off`
- ### [LaTeX 支持](#latex-support)
  
  只需使用 Obsidian 语法编写 latex 代码：
  
  ```
  This is an example
  $3+4$
  $$50+2$$
  
  ```
- ## [故障 排除](#troubleshooting)
  
  如果您在 Anki 的配置步骤中遇到一些问题，请打开 Anki annd ，粘贴以下内容：`Tools -> Add-ons -> AnkiConnect -> Config`
  
  ```
  {
    "apiKey": null,
    "apiLogPath": null,
    "webBindAddress": "127.0.0.1",
    "webBindPort": 8765,
    "webCorsOrigin": "http://localhost",
    "webCorsOriginList": [
        "http://localhost",
        "app://obsidian.md"
    ]
  }
  
  
  ```
- ## [定制](#customization)
  
  要为抽认卡添加彩色标签，您可以在 中使用它。它不是直接添加到插件中，以免弄乱您的样式😊。`obsidian.css`
  
  ```
  .tag {
  color: var(--text-normal);
  background-color: var(--text-accent);
  border: none;
  font-size: 11px;
  padding: 1px 8px;
  text-align: center;
  text-decoration: none;
  margin: 0px 0px;
  cursor: pointer;
  border-radius: 14px;
  display: inline;
  vertical-align: middle;
  }
  
  .tag:hover {
  color: var(--text-normal);
  background-color: var(--text-accent-hover);
  }
  
  .tag[href="#card"] {
  background-color: #821515;
  }
  
  .tag[href="#card-reverse"] {
  background-color: #821515;
  }
  
  ```