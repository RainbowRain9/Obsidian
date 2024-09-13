---
cssclass: cards
created time: 2023-11-11 HH:mm:ss
updated time: 2023-11-13 HH:mm:ss
---

全部已看电影。进行中的电影在 [[Movie-观影动态]]

```dataview
table without id "![](" + cover + ")" as Cover, file.link as Name, viewtime as 观影时间,grade as 评分
from "J 艺术"  
where !contains(file.folder, "88-Template")
where contains(dtype, "movie")
where contains(status, "已完成")
where startswith(cover, "http")
sort viewtime desc
limit 4
```