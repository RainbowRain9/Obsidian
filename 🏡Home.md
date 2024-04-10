---
banner: https://raw.githubusercontent.com/RainbowRain9/PicGo/master/202403261729468.jpg
dg-home: true
dg-publish: true
obsidianUIMode: preview
banner_lock: true
---
```dataviewjs
// 把下面的日期改成你自己开始用的那天
let total = moment().diff(moment("2023-11-12"), "days")
let totalDays = "您已使用 Obsidian "+total+" 天，"
let nofold = '!"_global/templates" AND !"网络摘录" AND !"PeriodicNote/晨间日记"'
let allFiles = dv.pages(nofold).file
let totalMd = "共创建 "+ allFiles.length+" 篇笔记"
let totalTag = allFiles.etags.distinct().length+" 个标签"
let totalTask = allFiles.tasks.length+"个待办。 "
dv.paragraph(
    "<summary>" + totalDays + totalMd + "、" + totalTag + "、" + totalTask + "</summary>"
)
```
```contributionWidget
id: 00f577ad-4359-4a8d-ba7c-7cd56ed38673
type: ref
refId: 4068a975-ca4b-4567-ba6c-689e982eb8b8

```
```contributionWidget
id: 9875deed-8ab6-448b-b6e5-6ea01398e0d9
type: ref
refId: 6b2d0abf-dc71-4b0b-9f36-7882b4c60a1c

```

```contributionWidget
id: 6cf18b8c-8c5d-477e-82d9-dd66d941b494
type: ref
refId: 65363fc0-3b78-497e-9566-ecef98957d6d

```


```contributionGraph
title: 创建贡献
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
  backgroundColor: "#00000000"
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
    max: 999
```



