---
cssclass: cards
usage: 对dataview表格渲染成卡片视图
banner: https://images.pexels.com/photos/1517355/pexels-photo-1517355.jpeg?auto=compress&cs=tinysrgb
obsidianUIMode: preview
updated: 2022-03-10 23:59
created time: 2023-11-11 HH:mm:ss
updated time: 2023-12-04 HH:mm:ss
---
*所有已读图书，按阅读时间(readtime)从近到远排序*


```dataview
table without id ("![](" + banner + ")") as Cover,  "<progress value=" + pageprogress + " max="+pagecount+"  class='yellow'>" as progress,file.link as Name, author as Author,publish,rating as Rating,readtime
from "" 
where !contains(file.folder, "_Templates")
where contains(file.folder, "2-weread")
where contains(dtype,"book")
where contains(status,"已完成")
sort readtime desc
```



