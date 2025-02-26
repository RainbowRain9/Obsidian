---
id: 1362d93d-650e-41af-9f16-1971e148632c
url: https://mp.weixin.qq.com/s/t3yGplHyus2qFUoCNrWM7A
title: |
  Obsidian新手全面入门11-失败了如何思考解决问题，即templater插件使用失败!!!
author: |
  秦吉峰
dtype: 教程
state: false
date: 2023-12-05 11:17:11
tags:
  - 400兴趣类/Obsidian/教程/实践
  - 400兴趣类/Obsidian/Plugin/Templater
created: 2023-12-05T14:28
updated: 2024-04-13T12:49
---


# Obsidian新手全面入门11-失败了如何思考解决问题，即templater插件使用失败!!!
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-t-3-y-gpl-hyus-2-q-f-uo-c-nr-wm-7-a-18c37fa8dd6)
[Read Original](https://mp.weixin.qq.com/s/t3yGplHyus2qFUoCNrWM7A)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sgtDOdQTvUa-L3sLZ5H-8QG1q-NLYS-qR2ccTZRIF4vs/https://mmbiz.qpic.cn/mmbiz_png/MjrkNy7Zz9vaSL7QyN9SH9nhxf13poUiadqnZ9yu4YNG7IkOicc2ibvof08QYoaFmPgh9LZdzic9kFPSsicOw89pr6A/640?wx_fmt=png)

**上期回顾**

**1个目标**：尝试templater（进阶模板）插件  

**3个步骤**：约好时间，直接视频会议演示，30分钟内。

**设定7限：**下周日前完成。

结果这个目标失败了，高估了自己。

下面我用“空雨伞”的思考模型了分析一下

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sf3GTZTt1ce997B67T9ObpUem1DKbCARoemaGK8sZ3Yo/https://mmbiz.qpic.cn/mmbiz_png/MjrkNy7Zz9vaSL7QyN9SH9nhxf13poUiarW9drW8qtISKQuWpxPKZbu516ib5jBXhvVVHsPKVkP83fV9gDJtq2lA/640?wx_fmt=png)

“空雨伞”的思考模型分析与解决问题  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sDreBvc5dQbIsNyyLc5khwXQvIvX8wBo8lJ0WV9SENwk/https://mmbiz.qpic.cn/sz_mmbiz_jpg/MjrkNy7Zz9t6uLTjWZE1r0Pe7oKCO1hwAR2kcnnpiatP5pPibSEs0iazDJaewZlVlvOibQiaaoEibam6oHSUn0BqD4ibA/640?wx_fmt=jpeg)  

空 = 环境，就是不会改变的事实状况。

雨 = 我们对「空」所做出的观察，也就是环境的状况，或可能面临的变化。

伞 = 因「雨」而做出的决策，也就是解决「雨」的方法，事件最后的结果。 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,skrQWemcSprRPKiCTWq3hYC5wS71Fcl8x5k1O7YX_Kg0/https://mmbiz.qpic.cn/mmbiz_png/MjrkNy7Zz9vaSL7QyN9SH9nhxf13poUiaJJc7JNUwPPibYQJdJT15T9x9VLXOZNcs4InPdK9c0vhqTFF3VEwW3ibA/640?wx_fmt=png)

空：事实  

templater插件是什么都很模糊

尝试在哔哩哔哩找答案，发现看的都会，一做就废。  

折腾的时间不多，大概在1个小时  

会简单的语言比如<%空格tp.date.new("YYYY-MM-DD")空格%>

故意标注出来怕忘记打空格报错。

其它如：

> ---  
> create time : <% createTime %>  
> modification date: <% modificationDate %>  
> ---
> 
> << [[<% before_date %>]] | [[<% after_date %>]] >>
> 
> #### 重点关注  
> -  ==早上 7 件事==  
>    - [ ] 花点时间回顾和反思
> 
> <%*  
> // 将文件移动到/Daily/目录下，并命名为titleName  
> await tp.file.move("/Daily/" + titleName)  
> // 运行后光标到运行后文件中  
> tp.file.cursor()  
> -%>
> 
> https://zhuanlan.zhihu.com/p/611448942?utm_id=0

结果就是报错，原因出在哪里还不知道。![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sDVw4e5MLoNL0N6qxdr3I682xijNRw8DRJFCxKXlwYp0/https://mmbiz.qpic.cn/mmbiz_png/MjrkNy7Zz9vaSL7QyN9SH9nhxf13poUiaIREZNkBwwT41JH8PmVCeIJcwVRAoAVdpKInqRJOPxBiblm2ibaia9t4jw/640?wx_fmt=png)

雨：什么原因  

> templater是一种template语言，能够让你插入变量结果和函数结果到你的笔记中。也能让你执行Javascript来操作那些变量和函数。使用Templater，你能够生成功能强大的模板来自动化日常任务。
> 
> https://zhuanlan.zhihu.com/p/611448942?utm\_id=0

一种自动化语言。网上找资源比较分散。  

投入时间比较少。  

对新手目前阶段用处不大，因为没有太多的需要用到。  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sh-1UrsWRbKm8xQU1Hp5qZ0sjVmnTgf-TfHgTepVINVQ/https://mmbiz.qpic.cn/mmbiz_png/MjrkNy7Zz9vaSL7QyN9SH9nhxf13poUiam7YUB76yI32wCl1IPRwvUHC1FoD4Q4AwYcpz2SlG5RNUXZeHFztCvA/640?wx_fmt=png)

伞：接下去怎么做

有样学样，模范着做一遍。新手的自己就怕中途放弃。很多小伙伴碰到问题就放弃。

先把简单的语言学会，比如日记自动化。光标自动化等。

归类总结嵌套模式下用tempaler  

改进到适合自己的。  

不要报错了，找到原因。  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sVfV_jm94fF601aamgTacGFPldV8KI9DAeZKUNc0lEGc/https://mmbiz.qpic.cn/sz_mmbiz_jpg/MjrkNy7Zz9t6uLTjWZE1r0Pe7oKCO1hwmpHL3oibnYAhIjAATQod1OmPwOpDX6F8iarrSYj7lIX2U3WibqBHomK0A/640?wx_fmt=jpeg&from=appmsg)



