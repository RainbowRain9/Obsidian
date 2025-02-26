---
id: 7de6958b-c306-43b7-b8b3-d6c380835ea8
url: https://mp.weixin.qq.com/s/TvzRFZL8cjDg1ujU3pqo0A
title: |
  精细管理Obsidian的CSS文件，让您的样式文件更智能更易用
author: |
  小坤哒
source: 微信公众号
dtype: 插件
tags:
  - 400兴趣类/Obsidian/教程/美化
banner: https://source.unsplash.com/900x1600/?
state: false
date: 2024-04-05 12:34:36
created: 2024-04-06T21:19
updated: 2024-04-13T12:49
---


# 精细管理Obsidian的CSS文件，让您的样式文件更智能更易用
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-tvz-rfzl-8-cj-dg-1-uj-u-3-pqo-0-a-18eac89696d)
[Read Original](https://mp.weixin.qq.com/s/TvzRFZL8cjDg1ujU3pqo0A)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWPtCJjDwK9YGUzX0qtvfla1pcEeErKZbChGxZKs0NB4/https://mmbiz.qpic.cn/mmbiz_gif/iaZZS5ScMsTF502MW8ekGJp2P2ete17ccbt1NmPMzRANicTb11RSWryA2T1p8J4KWFtKmiaic6tWqvMtSOVFletFmg/640?wx_fmt=gif&from=appmsg)

**✿ 编辑 | 排版 | 制图 | 测试 | 发表**

**✿ ✍未经允许，谢绝转载！**

**✿ 来源：Kuzens**

> 最近分享了一些有趣的关于obsidian的片段,可能在说明如何使用CSS片段的方法上有点简单,今天就让小编好好的做一期关于obsidian的CSS文件的教程,让你不会css也可以轻松在obsidian中使用CSS文件.  

### 1\. 背景模糊片段

正常情况下,我们的obsidian是以下的界面  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,ssV9A5BNzoti1FuImfCLZxfszxmvbuLVaqW-MAkcD1cE/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTKEiaUH91JIYes4Co6ueqrU5AibpQL06a6AFfaTuHj4JCjXz66TRZJoBQ/640?wx_fmt=png&from=appmsg)

添加背景模糊片段obsidian便会进行模糊

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s0MzF1ThG8nE7DFw2MGSBVNDpki8Dx8sDHUPCDxOgHqA/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTnkrgvnndLAE56a2M7ZyVXZKF4YaSKWBJKuVPI5X2P7Cvgu5NwozDOg/640?wx_fmt=png&from=appmsg)

背景模糊片段CSS字段  

![](https://proxy-prod.omnivore-image-cache.app/0x0,sXdDVAEq0F0WPivdzMP96r5yNDrK7HXbt0SN4bSB1Wl8/https://mmbiz.qpic.cn/mmbiz_svg/7SPO0mRJt6BtwT88Lb0bqtibNNDPCndmOdvQiccibicyibyW2shYf1MoS5qvvV2NicCCm22syvlK7IcEK8WbT1VEmicrAlcrOyQmKfy/640?wx_fmt=svg&from=appmsg)`body {
  filter: blur(5px); /* 背景图片模糊度 */
}
`

### 2\. 建立一个css文件(以mac为例)

桌面右键新建一个TXT文本文件(需要第三方软件)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s3-LxJAybgE1prZI72XnM4Kcr1j4ttjM_rs8Dg_Ue5Gg/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTtXZv4dQZe5iaA5ZxqyatbpjItWDJ3AjFlHic5JeYqIoLKPA4Zxr0kgdg/640?wx_fmt=png&from=appmsg)

如果你没有第三方软件还有有以下俩种方式  

第一种方式:从文本编辑创建:在启动台找到文本编辑

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sDm9mr59rsnn9XSxzXr87S-9We_cr7rXlPen7lxw6jK4/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTHMrpTCPiaacdfuHm1XKWYhic7Vc5jibvfJOkuQ0ib9AZqjpM4ibaibdUic9ew/640?wx_fmt=png&from=appmsg)

点击新建文稿  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svLic4lRc01sk9ufg-z8mPAwSnn99SItbZbVSKWM8Cxw/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTF48LqpCDOiaypYrcRbe8iceryn1CJL4rP8YlLrRyr9J2IB9Nz3JiaEwqg/640?wx_fmt=png&from=appmsg)

随便写点什么将其保存到桌面上

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s7UsGKJaQXEhloKYbrhXvPwece4odUHy-ljSZbHZTBLc/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTCkXlqFibk8jtMp4Mgy8sD15A5libfjkRqLzQA3e3Cu0hdCjctFZwoKrQ/640?wx_fmt=png&from=appmsg)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sJwZf1gdADyJSC8cD0vABp8Dc3u9o9jA21RwOiRL7fXU/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTD9zsBIKePGxtQv7urnv3QN55uAvyib5KhquEicJnIThNDpwS2KX0wuog/640?wx_fmt=png&from=appmsg)  

在桌面上找到新建的文件将其改为后缀名为css的文件  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s4J-SXrYIfiJ87Z0HnwAd_bzfBLMerKhmh0AHkE8mqSE/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTyxV8ecqssGGCNV1axI3icWeGY9Bn8IDcGdYNgWRvBTOW3CblvN6cYLw/640?wx_fmt=png&from=appmsg)

打开文件将其内容全部删除,将新的CSS文件复制进去

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sPnQdbpB9TYA5tY_NYmweDF-d1HrvWcFVD_nIzpu2E9s/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTb8mQYXicObsu6bIQHeu8KCzCJamGV4syht9GkwbFjEzcZicBYDBCKe5Q/640?wx_fmt=png&from=appmsg)

如果你觉得麻烦,第二种方式通过终端建立TXT文件

打开终端运行这段代码

![](https://proxy-prod.omnivore-image-cache.app/0x0,sXdDVAEq0F0WPivdzMP96r5yNDrK7HXbt0SN4bSB1Wl8/https://mmbiz.qpic.cn/mmbiz_svg/7SPO0mRJt6BtwT88Lb0bqtibNNDPCndmOdvQiccibicyibyW2shYf1MoS5qvvV2NicCCm22syvlK7IcEK8WbT1VEmicrAlcrOyQmKfy/640?wx_fmt=svg&from=appmsg)`touch file.txt
`

你的Mac就会在当前目录下建立一个txt文件

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sWQEL_DYQ2yDgDinpW3lmj86PfQw8LQP8Vql6XM4kCAU/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTG8FwicyZxDw1uWBlGM6ZpFU6WnWSld06VM0wU549xTl5z5icPG15E3rQ/640?wx_fmt=png&from=appmsg)

将其后缀名改为css即可变成css文件

### 3\. 配置CSS文件(以背景模糊代码片段为例)

复制背景模糊代码片段(代码片段在上文)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,stWHoFy0o2VdVbtRb5kfZ3s9_a5DBP-sU7zfLpjqxYyA/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jT0iaAVeVrekmhUYTzicWKGGqJ0udK7AMTvDjQrTziaibeYB5YR5P1clgReQ/640?wx_fmt=png&from=appmsg)

粘贴到刚才创建的css文件(记得保存)  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sEf1cgJUbOTaZiGIkziHdZmGTbIXrFzdav5FZ-s-DNNs/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTibmmSJOTYk4UaSqSs4BUJJcTmmEqCDTtrdwYD213WpaBMcYLrUfbKUA/640?wx_fmt=png&from=appmsg)

找到你仓库下的snippets文件夹,将刚才的css文件放进去(**该文件夹为隐藏文件需要将隐藏文件显示**)  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sqpFTsDR6D35WJZZkuvdPo7hj-iThRLmjSt554nZCtxU/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jThPqLlpECXtoyt3mJt9IkUJpSsftBh3jmHLFA5fIOic8Ytib0bjRaRqUw/640?wx_fmt=png&from=appmsg)

回到obsidian软件中在设置中将其打开即可  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sGf9vB6D-ika1qfr_WKGd-Ck4FSNkyNWx2iO8lArSsOg/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTdkzicfkjuFbW6K467SstBpxgmESaSsnT5tLR6t6vRDEaZPfzpgibT6cw/640?wx_fmt=png&from=appmsg)

### 4\. 管理obsidian中css文件的插件:MySnippets

在obsidian中安装插件:MySnippets

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sztobJ1TlaOWOIMtSF43GkeNOLAqhqkrzTIJWZQsF8c8/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTtjkjCo77JQWiayQQ8Vpy2q0vw7kW5JOB2Q1sW0N8ibolibOYBicKE8DMQA/640?wx_fmt=png&from=appmsg)

回到obsidian的工作界面右下角点击这个图标  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sTir957ZtsBN6nVQJlcHZ6aRCCP3SQYrnAKxn4TKDEn8/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jToictvVckibF6zRjxufgd8xVsXZTr2LGgpoYfibM0Oy8QPvkpEQkATVuicA/640?wx_fmt=png&from=appmsg)

你就可以看到你所有的css片段点击片段右边的按钮,你就可以方便的打开关闭该css片段点击文件夹,可以快速的打开存放css片段的文件夹  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,svVpDqm2QPWIh_U5qFfTHS-3Iti4-k2Oy-OrHKcY6Cy4/https://mmbiz.qpic.cn/mmbiz_png/iaZZS5ScMsTEYrApqsNC3JfP0sZ32K7jTUIy1Ufe82T4PAygONEWXkJfUh31MOx8rXiakW7ibuu3ULre6iap10nXqg/640?wx_fmt=png&from=appmsg)

**相关推荐**

* [探秘Obsidian图片技巧：打造炫酷笔记墙，让你的笔记更生动！](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzAxMTI5ODkwNA==&mid=2247500842&idx=1&sn=0ab0520fed9767d8d4aabb868fa71534&chksm=9b41b51dac363c0bc34a1bac68cacd82674ea57804069c3e31fadd298219e702cfe22ee4ba7a&scene=21#wechat%5Fredirect)
* [个性化打造，Obsidian背景美化，让工作空间焕然一新](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzAxMTI5ODkwNA==&mid=2247500939&idx=1&sn=13c4d92396b9652642ce871e29a269f8&chksm=9b41b5bcac363caa5e410739626179e0651d0b28611cf8386a13a75d49d6ebdf9564e9299619&scene=21#wechat%5Fredirect)
* [Obsidian交流群](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzAxMTI5ODkwNA==&mid=2247500780&idx=2&sn=b655c99678d617cd60616ff75912aac6&chksm=9b41b2dbac363bcdffcd34119212f29100319883f22cf3b140f16bb6e845f6b3d7470b8eab16&scene=21#wechat%5Fredirect)

**您的在看/赞赏/分享,** **是对小编最大的鼓励**



