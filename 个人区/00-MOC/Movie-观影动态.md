---
cssclass: cards
created time: 2023-11-11 HH:mm:ss
updated time: 2023-11-13 HH:mm:ss
created: 2023-11-11T20:12
updated: 2023-11-13T02:21
---
## 最近观看
*最近看完的4部电影*
```dataview
table without id "![](" + banner + ")" as Cover, file.link as Name, viewtime as 观影时间,grade as 评分
from "J 艺术"  
where !contains(file.folder, "_Templates")
where contains(dtype, "movie")
where contains(status, "已完成")
where startswith(cover, "http")
sort viewtime desc
limit 4
```

## 进行中

```dataview
table without id "![](" + banner + ")" as Cover, file.link as Name, year as Year,rating as Rating,grade
from "J 艺术"    
where !contains(file.folder, "_Templates")
where contains(dtype, "movie")
where contains(status, "进行中")
where startswith(cover, "http")
sort viewtime desc
```
## 心愿单
```dataview
table without id "![](" + banner + ")" as Cover, file.link as Name, year as Year,rating as Rating
from "J 艺术"    
where !contains(file.folder, "_Templates")
where contains(dtype, "movie")
where contains(status, "未开始")
where startswith(cover, "http")
sort file.ctime desc
```

