---
time:
  "{ DATE:YYYY-MM-DD HH:mm:ss }": 
dtype: Area
status: 进行中
cover: 
readtime: 
created: 2023-11-13T16:22
updated: 2023-12-01T12:42
---

## 目标描述



---
### 可行性调查



---
## 项目列表

```dataview
table type,status,UID
from "5-项目夹"   
where contains(dtype, "Project") and contains(area, file.name)
```


## 资料收集

```dataview
table source,date
from ""   
where contains(tags, "输入标签")
sort file.ctime
```

## 笔记