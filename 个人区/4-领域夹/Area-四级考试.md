---
time: 2023-12-03 21:41:31
dtype: Area
status: 进行中
cover: 
readtime:
---

## 目标描述



---
### 可行性调查
#### 多少分及格
- 及格分：425
- 写作/翻译：125
- 听力：150
- 阅读：150


---
## 项目列表

```dataview
table without id file.link as 项目名,type as 类别,status as 状态,time as 时间
from ""   
where contains(dtype, "Project") and contains(area, "Area-四级考试")
```


## 资料收集

```dataview
table source,date
from ""   
where contains(tags, "输入标签")
sort file.ctime
```

## 笔记