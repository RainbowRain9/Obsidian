---
cssclass: "cards"
---
## 最近读完
*30天内读完的书*
```dataview
table without id ("![](" + banner + ")") as Cover,  "<progress value=" + pageprogress + " max="+pagecount+"  class='yellow'>" as progress,file.link as Name, author as Author,grade as Grade,readtime
from "3-知识宝箱"  
where !contains(file.folder, "_Templates") and !contains(file.folder, "2-weread")
where contains(dtype, "book")
where contains(status, "已完成")
where readtime != null and (date(today)-date(readtime)) <=dur(30 days)
sort readtime desc
```

## 进行中

```dataview
table without id ("![](" + banner + ")") as Cover,  "<progress value=" + pageprogress + " max="+pagecount+"  class='yellow'>" as progress,file.link as Name, author as Author,rating as Rating,readtime
from "3-知识宝箱"
where !contains(file.folder, "_Templates") and !contains(file.folder, "2-weread")
where contains(dtype, "book")
where contains(status, "进行中")
sort readtime desc,file.ctime desc
```


## 心愿单

```dataview
table without id ("![](" + banner + ")") as Cover,  "<progress value=" + pageprogress + " max="+pagecount+"  class='yellow'>" as progress,file.link as Name, author as Author
from "3-知识宝箱"
where !contains(file.folder, "_Templates") and !contains(file.folder, "2-weread")
where contains(dtype, "book")
where contains(status, "未开始")
sort file.ctime desc
```
