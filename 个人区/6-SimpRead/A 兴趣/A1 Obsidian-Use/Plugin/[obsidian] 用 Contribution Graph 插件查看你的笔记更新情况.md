---
id: dae8de23-d663-4c23-821a-2d906e45a631
url: https://mp.weixin.qq.com/s/v5MJMoBl-DI98ULXuXJd-A
title: |
  [obsidian] 用 Contribution Graph 插件查看你的笔记更新情况
author: |
  黑炭
source: 微信公众号
dtype: 插件
tags:
  - 400兴趣类/Obsidian/Plugin
state: true
date: 2024-03-19 01:08:27
---


# [obsidian] 用 Contribution Graph 插件查看你的笔记更新情况
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-v-5-mj-mo-bl-di-98-ul-xu-x-jd-a-18e52891b16)
[Read Original](https://mp.weixin.qq.com/s/v5MJMoBl-DI98ULXuXJd-A)

原创  黑炭  黑炭的生信笔记 _2024-03-14 11:47_ _广东_ 

> 某人评语：这是一些社畜的证据  

"

天街小雨润如酥，草色遥看近却无  

——韩愈

"

### ****昨天心血来潮，想知道自己每天都写了啥笔记，所以折腾了这个插件**

### 一，安装obsidian

嗯，很简单，官网下就行，注意配置一下插件市场（略）

### 二，安装插件的步骤和报错

这个插件是Contribution Graph，但是我第一次安装完成后并没有正常启动，并提示我缺少 Dataview 插件，所以大家安装的时候可以两个插件都装上。  
安装完成之后，据说 Ctrl+P 会多出来一个 Contribution 开头的命令，但是我没找到，所以我直接从第三方插件那里对这个命令设置了快捷键。  

### 三，基础设置

基础设置很简单，我习惯的是类git，这个作者已经将其封装成交互式界面了，大家自行体验即可，放张我的主界面效果。  

obsidian可以设置白板，把这个链接过去就好了

打开软件自动跳转主界面可以用 Homepage 插件来设置。

过段时间把obsidian架到服务器上，看看能不能实现多人协作编辑。（我实在是太欣赏markdown这个语法格式来做简单的笔记了）  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s9WFCdT_hbv6sv-z3_j30v8_57F_npsqPdkuUyXwxrjU/https://mmbiz.qpic.cn/sz_mmbiz_png/2Cf7YqCIPozj7SHA6PPEbw6LfcO18cLQdMjvTKHLyufeCj8fohCMToVSscnMCbYibUiaeY0ToEic1dSBWB30DHANA/640?wx_fmt=png&from=appmsg)

附上代码

![](https://proxy-prod.omnivore-image-cache.app/0x0,sQFEznaCGBWF_z61F8B7JGRvb_4Xt-68CGlKlrAFAPs0/https://mmbiz.qpic.cn/mmbiz_svg/LIND77SSexicdoG9hWEDBtd6ZhYx5ojnPSyibQG971eTibgGibevjeENerN1QSDflff6BoEmpGsiceXguhDwq5icsQ0rGMTUELxfVz/640?wx_fmt=svg&from=appmsg)
`title: 修改贡献
graphType: default
dateRangeValue: 180
dateRangeType: LATEST_DAYS
startOfWeek: 1
showCellRuleIndicators: true
titleStyle:
  textAlign: center
  fontSize: 15px
  fontWeight: normal
dataSource:
  type: PAGE
  value: ""
  dateField:
    type: FILE_MTIME
fillTheScreen: false
enableMainContainerShadow: false
cellStyle:
  minWidth: 17px
  minHeight: 17px
mainContainerStyle:
  backgroundColor: "#554d4d3b"
cellStyleRules:
  - id: Halloween_a
    color: "#fdd577"
    min: 1
    max: 2
  - id: Halloween_b
    color: "#faaa53"
    min: 2
    max: 3
  - id: Halloween_c
    color: "#f07c44"
    min: 3
    max: 5
  - id: Halloween_d
    color: "#d94e49"
    min: 5
    max: 9999`

![](https://proxy-prod.omnivore-image-cache.app/0x0,sQFEznaCGBWF_z61F8B7JGRvb_4Xt-68CGlKlrAFAPs0/https://mmbiz.qpic.cn/mmbiz_svg/LIND77SSexicdoG9hWEDBtd6ZhYx5ojnPSyibQG971eTibgGibevjeENerN1QSDflff6BoEmpGsiceXguhDwq5icsQ0rGMTUELxfVz/640?wx_fmt=svg&from=appmsg)`title: 创建贡献
graphType: default
dateRangeValue: 180
dateRangeType: LATEST_DAYS
startOfWeek: 1
showCellRuleIndicators: true
titleStyle:
  textAlign: center
  fontSize: 15px
  fontWeight: normal
dataSource:
  type: PAGE
  value: ""
  dateField: {}
fillTheScreen: false
enableMainContainerShadow: false
cellStyle:
  minWidth: 17px
  minHeight: 17px
mainContainerStyle:
  backgroundColor: "#000000ff"
  boxShadow: rgba(0, 0, 0, 0.16) 0px 1px 4px
cellStyleRules:
  - id: default_b
    color: "#9be9a8"
    min: 1
    max: 2
  - id: default_c
    color: "#40c463"
    min: 2
    max: 5
  - id: default_d
    color: "#30a14e"
    min: 5
    max: 10
  - id: default_e
    color: "#216e39"
    min: 10
    max: 999`

![](https://proxy-prod.omnivore-image-cache.app/0x0,sztHen2zKglbooc8jnRanh8F2QK9kejIH_eS7fuz0zAU/data:image/svg+xml,%3Csvg xmlns=\"http://www.w3.org/2000/svg\" width=\"24\" height=\"24\" viewBox=\"0 0 24 24\" fill=\"none\"%3E%0A%3Cpath d=\"M12.8974 15.5585L14.9719 13.484L16.2447 14.7568L12.3519 18.6497C12.1566 18.8449 11.84 18.8449 11.6448 18.6497L7.75195 14.7568L9.02475 13.484L11.0974 15.5567L11.1 4.99976L12.9 5.0002L12.8974 15.5585Z\" fill=\"black\" opacity=\"0.3\"/%3E%0A%3C/svg%3E) 继续滑动看下一个 



