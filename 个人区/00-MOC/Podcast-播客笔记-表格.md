---
banner: https://img0.baidu.com/it/u=1500452460,2031157870&fm=253&fmt=auto&app=138&f=JPEG?w=1111&h=500
obsidianUIMode: preview
updated: 2023-11-13T02:21
created time: 2023-11-11 HH:mm:ss
updated time: 2023-11-13 HH:mm:ss
created: 2023-11-11T20:12
---
*所有播客(podcast)，按观看日期(readtime)从近到远排序*


```dataview
table WITHOUT ID file.link AS "标题",  author as Author,readtime as 观看日期
from "" 
where !contains(file.folder, "_Templates") and !contains(file.folder, "2-weread")
where contains(dtype,"podcast")
sort readtime desc
```



