---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-booknote-plugin/
title: Obsidian 插件：BookNote 让你在 Obsidian 中阅读标注 PDF
date: 2023-11-12 22:28:24
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-07-03 16:36  发布

  分享

* * *

sr-annote { all: unset; }

## 概述

支持在 Obsidian 中阅读 PDF，并在上面标注记录在 OB 的笔记文档中。

**插件名片**

*   插件名称：BookNote
*   插件作者：围城
*   插件说明：Obsidian 读书标注软件，适用 PDF，MS Office 等
*   插件项目地址：[点我跳转](https://kknwfe6755.feishu.cn/docs/doccnBfbtETItLHMmbDBGBRdPrh)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-booknote-plugin)

## 效果 & 特性

*   目前支持可以对 pdf、office 等文档进行标注和管理。
*   可以用来管理指定目录下的文档，这个目录可以是库外目录，电脑上的任意路径都可以。
*   点击记录的回链笔记，可以跳转到 对应的文档位置。【前提：你的文档没有做路径移动】

## 准备

1.webview 安装包

2.booknote 插件压缩包

## 安装

下面演示使用**本地服务**如何部署，以 Windows 为例：

1.  安装 webview

因为插件使用 webview 服务，所以需要先安装 webview 环境。

解压到电脑任意目录即可，这里要记住解压的路径目录。

1.  安装 booknote 插件

通过项目地址，手动安装插件，手动安装参考 [Obsidian 社区插件的安装](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6%E7%9A%84%E5%AE%89%E8%A3%85)

## 软件设置

1.  插件设置 注意开启使用本地服务器，其中 webview 路径就是安装步骤 1 中的解压路径。
    
    ![](https://cdn.pkmer.cn/images/e37b4a5143089ca063d491769f9afd36_MD5.png!pkmer)
    
2.  重启 OB
    

## 使用方法

1.  OB 页面按 Ctrl+P
    
    ![](https://cdn.pkmer.cn/images/23ac31100fc97e6574269fcf10d05fb3_MD5.png!pkmer)
    
2.  开启后侧边栏出现 B 图标
    
    ![](https://cdn.pkmer.cn/images/0b471490bc6f2596dccc56e39f29efa0_MD5.png!pkmer)
    
3.  点击即可看到你的书库目录，目前支持显示 pdf，xlsx，docx，pptx 文档显示。
    

**双击**文件即可在 OB 中打开。

![](https://cdn.pkmer.cn/images/a5baae18381c480d57d5c66f4b8f302a_MD5.png!pkmer)

1.  浏览添加注释，高亮段落
    
    ![](https://cdn.pkmer.cn/images/af09733e3b7834b89ee54563cb4d9787_MD5.png!pkmer)
    
2.  回链到 md 文档
    

目前两种方式

*   复制回链，在任意文档手动粘贴。
*   按住 ctrl 点击 复制回链 可以在当前激活的文档中**所在光标处**自动添加回链。

![](https://cdn.pkmer.cn/images/75596842f49a9e9bda5b41d1170078ce_MD5.png!pkmer)

md 文档中的回链信息

![](https://cdn.pkmer.cn/images/53991662833e81b55d082e03f6ed0c41_MD5.png!pkmer)

![](https://cdn.pkmer.cn/images/a295dcf9fab4ca305794b8dc70aaef9e_MD5.png!pkmer)

1.  pdf，office 文档添加 Obsidian 链接
    
    ![](https://cdn.pkmer.cn/images/82c7900a82ea217cdf3497676498ec5c_MD5.png!pkmer)
    
    ![](https://kknwfe6755.feishu.cn/space/api/box/stream/download/asynccode/?code=MDljZTIwOWQ2MzE5MjA3ZjI2YTI5NDNiNWY5NDZmMWZfVHo1Z2tjVkQ3aUJjSGNHTkh5TWVtamxpUEtYYVBnVnFfVG9rZW46Ym94Y25wU0xiRmhPblEyQW8zaXlSQ1gxelFoXzE2NzQ0MDEwNDc6MTY3NDQwNDY0N19WNA)
    

即可实现 pdf 跳转 Ob

1.  可以添加维护，书籍对应文档的 yaml 信息
    
    1.  ctrl+p 开启高级浏览器
        
        ![](https://cdn.pkmer.cn/images/1231d8b4b76bcf36dc4f0774bce24933_MD5.png!pkmer)
        
2.  点击文档，选择编辑
    
    ![](https://cdn.pkmer.cn/images/cc3c8a317d229b9d6cd80e58c7fd828a_MD5.png!pkmer)
    
    ![](https://kknwfe6755.feishu.cn/space/api/box/stream/download/asynccode/?code=YjRiNzAyZmY0ZGE0YmUyYjM2OTczYmY0ODc1MjczYWVfUXpCc2hRVkFXVGh4bGY3RWd6bXE1MEtlcHJ4eGkxUElfVG9rZW46Ym94Y25HUnlxcm54S1ZTSEpXS0UxalphaE1kXzE2NzQ0MDEwNDc6MTY3NDQwNDY0N19WNA)
    
3.  添加字段
    
    ![](https://cdn.pkmer.cn/images/c6958ce45a77aa9b4b77c62618ecf2b3_MD5.png!pkmer)
    
4.  md 文档自动填充 yaml 信息
    

在 ob 库的 booknote 目录 会生成 md 文档并添加 yaml 信息，这个文档跟文件是关联的。

![](https://cdn.pkmer.cn/images/63796daeb61ecf4c96eb186059ac9db6_MD5.png!pkmer)

### 截图标注

目前截图标注只针对 pdf 文档有效，框选后复制回链即可把图片插入 md 文档中

1.  手动截图标注。
2.  自动截图标注

标注的内容格式可以根据设置的模板变量自定义

![](https://cdn.pkmer.cn/images/c0789f3c879f3c5a2dee0ae4436b8e28_MD5.png!pkmer)

目前支持的模板变量有

<table><thead><tr><th>模板变量名称</th><th>解释</th></tr></thead><tbody><tr><td>page</td><td>页码</td></tr><tr><td>url</td><td>回链链接</td></tr><tr><td>content</td><td>选文摘录的内容</td></tr><tr><td>img</td><td>区域摘录的截图</td></tr><tr><td>comment</td><td>注释</td></tr><tr><td>width</td><td>截图宽度</td></tr><tr><td>height</td><td>截图高度</td></tr></tbody></table>

实体笔记 vs 数字笔记 obsidian-booknote-pluginobsidian-douban-pluginobsidian-weread-pluginObsidian 社区插件 Obsidian 社区插件的安装