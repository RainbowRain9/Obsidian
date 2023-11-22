---
UID: 2023-11-12T22:24:00
dtype: Area
status: 进行中
cover: 
readtime:
---

## 目标描述



---
### 可行性调查



---
## 项目列表

```dataview
table type,status,UID
from ""  
where contains(dtype, "Project") and contains(area, "Area-笔记方法")
```

## 资料收集

```dataview
table source,date
from ""
where contains(tags, "读书方法")
sort file.ctime
```

## 笔记