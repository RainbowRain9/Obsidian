---
created: "2022-04-26 23:19"
updated: "2022-04-26 23:19"
---

> [!flex]
> 
> > [!cards|banner]- ![](https://s2.loli.net/2022/09/15/m3HxdcZsOeb16MA.png)
> > ```dataview
> table without id "![](" + banner + ")" as Cover, file.link as Name, year as Year,rating as Rating
> from "J 艺术"
> where !contains(file.folder, "_Templates")
> where contains(dtype, "movie")
> where startswith(cover, "http")
> where !contains(status, "已完成")
> sort rating desc
> >```
> 
> 
> > [!cards|banner]-  ![IMG_1769.PNG](https://s2.loli.net/2022/09/15/OY3ERQsy7e1Ccvx.png)
> > ```dataview
> table without id "![](" + banner + ")" as Cover, file.link as Name, year as Year,rating as Rating
> from "J 艺术"  
> where !contains(file.folder, "_Templates")
> where contains(dtype, "movie")
> where startswith(cover, "http")
> sort rating desc
> >```
> 

> [!flex]
> 
> > [!cards|banner]- ![](https://s2.loli.net/2022/09/15/QOwcdoKamp2FXYC.png)
> > ```dataview
> table without id "![](" + banner + ")" as Cover, file.link as Name, year as Year,rating as Rating
> from "J 艺术"  
> where !contains(file.folder, "_Templates")
> where contains(dtype, "movie")
> where startswith(cover, "http")
> where viewtime != null and (date(now)-date(viewtime)) <=dur(30 days)
> sort rating desc
> >```
> 
> 
> > [!cards|banner]-  ![](https://s2.loli.net/2022/09/15/2iS1BHvxXUOtAof.png)
> > ```dataview
> table without id "![](" + banner + ")" as Cover, file.link as Name, year as Year,rating as Rating,grade
> from "J 艺术"    
> where !contains(file.folder, "_Templates")
> where contains(dtype, "movie")
> where grade != null 
> where startswith(cover, "http")
> sort grade desc
> >```
> 
