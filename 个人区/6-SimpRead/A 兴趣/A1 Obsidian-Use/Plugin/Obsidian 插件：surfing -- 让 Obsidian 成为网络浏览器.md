---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/surfing/
title: Obsidian 插件：surfing -- 让 Obsidian 成为网络浏览器
date: 2023-11-13 00:45:52
tags:
  - 400兴趣类/电脑软件/Obsidian/Plugin
host: pkmer.cn
source: Pkmer
banner: 
banner_icon: 🔖
dtype: 插件
state: false
time: ""
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

**插件名片**

*   插件名称：Surfing
*   插件作者：Boninall
*   插件说明：obsidian 的网络浏览器插件, 允许你在 Obsidian v1.0 的标签页中浏览任意网页
*   插件分类：体验增强
*   插件项目地址：[点我访问](https://github.com/quorafind/obsidian-surfing)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?surfing)

## 简介

这是一款 Obsidian 插件，允许你在 Obsidian v1.0 的标签页中浏览任意网址。

这个插件的核心功能—— webview 是借鉴 [obsidian-custom-frames](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-custom-frames) 插件而实现的。

![](https://cdn.pkmer.cn/images/202307111753244.png!pkmer)

## 功能介绍

## 使用方法

### 点击笔记中的链接

安装插件后不需要什么设置，surfing 插件已经接管了 Obsidain 点开链接的默认行为，点击链接就会自动在 ob 中打开。

![](https://cdn.pkmer.cn/images/202307111751168.png!pkmer)

### tab 页中显示一个类似浏览器的地址栏

开启这个选项 就可以新建 tab 页中 直接可以出现 surfing 搜索页。

![](https://cdn.pkmer.cn/images/202307111749453.png!pkmer)

### 利用浏览器书签在 Obsidain 中打开网站

插件注册了一个 Obsidain uri 协议，该协议允许你使用 `obsidian://web-open?url=<url>` 的网址在 Obsidian 中打开 Web-broswer

。其中 `<url>` 指网页地址链接。配合浏览器的 bookmarklets 特性可以实现点击浏览器的一个书签，就可以调用 ob 内打开当前浏览器网址。

surfing 设置中 点击按钮复制书签代码

![](https://cdn.pkmer.cn/images/202307111733178.png!pkmer)

在浏览器中新建一个书签 url 里粘贴这个代码就可以了。

![](https://cdn.pkmer.cn/images/202307111747830.gif!pkmer)

## 高级技巧

对于中文用户，你可能希望复制的高亮链接是可以直接显示原文，这种情况下，你可以应用下述的 Quickadd 脚本：

```
selObj = window.getSelection();
text = selObj.toString();
text = await decodeURIComponent(text)
this.quickAddApi.utility.setClipboard(text);

return text;

```

然后粘贴取代原来的文本内容即可。

obsidian-custom-framesObsidian 社区插件 surfing