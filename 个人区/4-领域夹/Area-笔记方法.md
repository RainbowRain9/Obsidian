---
UID: 2023-11-12T22:24:00
dtype: Area
status: 进行中
cover: 
readtime: 
created time: 2023-11-12 HH:mm:ss
updated time: 2023-12-05 HH:mm:ss
created: 2023-11-12T18:00
updated: 2023-12-05T21:06
---

## 目标描述



---
### 可行性调查



---
## 项目列表

```dataview
table without id file.link as 项目名,type as 类别,status as 状态,time as 时间
from ""  
where contains(dtype, "Project") and contains(area, "Area-笔记方法")
```

## 资料收集

```dataview
table without id file.link as 项目名,type as 类别,status as 状态,time as 时间
from ""
where contains(tags, "读书方法")
sort file.ctime
```

## 笔记