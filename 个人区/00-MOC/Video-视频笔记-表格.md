---
banner: https://images.pexels.com/photos/13883889/pexels-photo-13883889.jpeg?auto=compress&cs=tinysrgb&w=800
obsidianUIMode: preview
updated: 2022-03-10 23:59
created time: 2023-11-11 HH:mm:ss
updated time: 2023-11-13 HH:mm:ss
---
*所有Video，按观看日期(readtime)从近到远排序*


```dataview
table WITHOUT ID file.link AS "标题",  author as Author,readtime as 观看日期
from "" 
where !contains(file.folder, "_Templates") and !contains(file.folder, "2-weread")
where contains(dtype,"video")
sort readtime desc
```



