---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-weread-plugin/
title: Obsidian 插件：Weread 让 Obsidian 和你的微信阅读联动
date: 2023-11-12 22:26:57
tags:
  - 400兴趣类/Obsidian/Plugin
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
created: 2023-11-12T22:26
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

[OS](https://pkmer.cn/authors/os)

于  2023-09-11 12:10  发布

 

1461

分享

* * *

sr-annote { all: unset; }

## 概述

Obsidian 微信读书插件是一个社区插件，用来同步微信读书中书籍 `元信息`、`高亮标注`，`划线感想`、`书评` 等，并将这些信息转换为 markdown 格式保存到 Obsidian 的文件夹中，初次使用，如果笔记数量较多，更新会比较慢，后面再去更新的时候只会更新 `划线数量` 或者 `笔记数量` 有变化的书籍，一般速度很快。

**插件名片**

*   插件名称：Weread Plugin
*   插件作者：hank zhao
*   插件说明：可以让你的 Obsidian 和微信阅读联动，获取相关阅读标注，笔记信息。
*   插件分类：[’ 第三方工具集成 ’, ’ 编辑工具 ’, ’ 信息收集 ’, ‘obsidian 插件 ’, ‘readme’]
*   项目地址：[点我访问](https://github.com/zhaohongxuan/obsidian-weread-plugin)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-weread-plugin)

## 效果 & 特性

![](https://cdn.pkmer.cn/covers/obsidian-weread-plugin.png!pkmer)

*   同步书籍元数据例如：书籍封面，作者、出版社、ISBN，出版时间等
*   同步微信读书的高亮划线
*   读书笔记分为 `划线笔记`，`页面笔记`， `章节笔记`，`书籍书评`
*   支持微信扫码登录，理论上可以和浏览器一样保持长时间不掉线。
*   校验 Cookie 有效期自动刷新 Cookie
*   自定义笔记生成模板 template
*   文件名支持多种格式设置
*   自定义 FrontMatter，可在头部 yaml 文件中增加自己需要的字段，比如标签，阅读状态等
*   公众号划线和笔记归类同步
*   支持移动端同步，可以在手机和平板上使用本插件
*   支持 Daily Notes, 将当日读书笔记同步至 Daily Notes 中，已经在 [0.4.0](https://github.com/zhaohongxuan/obsidian-weread-plugin/releases/tag/0.4.0) 中支持
*   同步热门划线到笔记中（TBD）

## 模板

微信读书插件支持模板, 模板可用的变量如下

![](https://cdn.pkmer.cn/images/202307102317148.png!pkmer)

默认的模板为

```
---
isbn: {{metaData.isbn}}
category: {{metaData.category}}
---
# 元数据
> [!abstract] {{metaData.title}}
> - ![ {{metaData.title}}|200]({{metaData.cover}})
> - 书名： {{metaData.title}}
> - 作者： {{metaData.author}}
> - 简介： {{metaData.intro}}
> - 出版时间 {{metaData.publishTime}}
> - ISBN： {{metaData.isbn}}
> - 分类： {{metaData.category}}
> - 出版社： {{metaData.publisher}}

# 高亮划线
{% for chapter in chapterHighlights %}
## {{chapter.chapterTitle}}
{% for highlight in chapter.highlights %}
{% if highlight.reviewContent %}{% else %}
- 📌 {{ highlight.markText |trim }} ^{{highlight.chapterUid}}-{{highlight.range}}
    - ⏱ {{highlight.createTime.slice(0, 10)}}{% endif %} {% endfor %}{% endfor %}
# 读书笔记
{% for chapter in bookReview.chapterReviews %}{% if chapter.reviews or chapter.chapterReview %}
## {{chapter.chapterTitle}}
{% if  chapter.chapterReviews %}{% for chapterReview in chapter.chapterReviews %}
### 章节评论 No.{{loop.index}}
- {{chapterReview.content}} ^{{chapterReview.reviewId}}
    - ⏱ {{chapterReview.createTime}} {% endfor%}{%endif %}{% if chapter.reviews %}{%for review in chapter.reviews %}
### 划线评论
- 📌 {{review.abstract |trim }}  ^{{review.reviewId}}
    - 💭 {{review.content}}
    - ⏱ {{review.createTime.slice(0, 10)}}
{% endfor %} {%endif %} {% endif %} {% endfor %}
# 本书评论
{% if bookReview.bookReviews %}{% for bookReview in bookReview.bookReviews %}
## 书评 No.{{loop.index}} {{bookReview.mdContent}} ^{{bookReview.reviewId}}
⏱ {{bookReview.createTime.slice(0, 10)}}
{% endfor%}{% endif %}

```

优化后的模板效果如下

![](https://cdn.pkmer.cn/images/202307102324143.png!pkmer)

主要使用了 [Obsidian 样式 - Callout 样式 #自定义排版](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E5%A4%96%E8%A7%82/css-%E7%89%87%E6%AE%B5/obsidian%E6%A0%B7%E5%BC%8F-callout%E6%A0%B7%E5%BC%8F#%E8%87%AA%E5%AE%9A%E4%B9%89%E6%8E%92%E7%89%88) 的片段即可实现。

模板代码如下：

```
---
name: {{metaData.title}}
cover: '{{metaData.cover}}'
tags: weread
author: {{metaData.author}}
isbn: {{metaData.isbn}}
rating: 
banner: "![[true.jpg]]"
publish: {{metaData.publisher}}
publishyear: "{{metaData.publishTime|truncate(11,False,'')}}"
category: {{metaData.category}}
noteCount: {{metaData.noteCount}}
reviewCount: {{metaData.reviewCount}}
grade:
status: {{metaData.finish}}
readtime:
pagecount: 
pageprogress: 
---

## {{metaData.title}}

> [!bookinfo]+ **《{{metaData.title}}》**
> ![bookcover|200]({{metaData.cover}})
>
| 属性   | 内容                                       |
|- | - | - |
| ISBN   | {{metaData.isbn if metaData.isbn else 'null'}}  |
| 作者   | {{metaData.author}}                         |
| 出版年 | {{metaData.publishTime|truncate(11,False,'')}}   | 
| 出版社 | {{metaData.publisher}}                       |
| 来源   | [{{metaData.title}}](https://weread.qq.com/web/) |
| 分类   | {{metaData.category}}                        |

> [!abstract]- **内容简介**
> 
> 《{{metaData.title}}》
> {{metaData.intro|striptags(true)|trim}}

## 高亮划线
{% for chapter in chapterHighlights -%}
### {{chapter.chapterTitle}}
{% for highlight in chapter.highlights -%}{% if highlight.reviewContent -%}
> [!quote|notitle] 
> {{ highlight.markText |trim }}  
— 创建于 [[{{highlight.createTime.slice(0, 10)}}]]{{highlight.createTime.slice(10, 16)}} ^{{highlight.chapterUid}}-{{highlight.range}}
- {{highlight.reviewContent}}
{% else %}
> [!quote|notitle] 
> {{ highlight.markText |trim }}  
— 创建于 [[{{highlight.createTime.slice(0, 10)}}]]{{highlight.createTime.slice(10, 16)}} ^{{highlight.chapterUid}}-{{highlight.range}}
{% endif %} {%- endfor %}{%- endfor %}
{% for chapter in bookReview.chapterReviews -%}
{% if chapter.reviews or chapter.chapterReview -%}
{%for review in chapter.reviews -%}
> [!quote|notitle] 
> {{review.abstract |trim }} 
— 创建于 [[{{review.createTime.slice(0, 10)}}]]{{review.createTime.slice(10, 16)}} ^{{review.reviewId}}
- {{review.content}}
 {%- endfor %} 
{% if  chapter.chapterReview -%}
### 读书笔记
> [!quote|notitle] 
> {{chapter.chapterReview.content}}{%-endif %}
{% if chapter.reviews %}{%for review in chapter.reviews -%}
 {%- endfor %} {%-endif %} {%- endif %} {%- endfor %}
{% if bookReview.bookReview -%}
### 本书评论
{{bookReview.bookReview.mdContent}} ^{{bookReview.bookReview.reviewId}}
{%- endif %}

```

obsidian-booknote-pluginobsidian-weread-pluginObsidian 社区插件 Callout 样式