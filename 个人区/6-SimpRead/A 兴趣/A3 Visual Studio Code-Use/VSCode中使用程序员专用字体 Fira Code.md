---
id: 399f2dd4-746e-427b-b3a2-f44ba95e97db
url: https://mp.weixin.qq.com/s/qMJWYjOa_U3GmeynU497Cw
title: |
  VSCode中使用程序员专用字体 Fira Code
author: |
  大卫老师
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/VSCode
state: true
date: 2024-03-16 19:42:15
created: 2024-03-16T19:42
updated: 2025-02-27T12:56
---


# VSCode中使用程序员专用字体 Fira Code
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-q-mjw-yj-oa-u-3-gmeyn-u-497-cw-18e4711bffc)
[Read Original](https://mp.weixin.qq.com/s/qMJWYjOa_U3GmeynU497Cw)

 大卫老师  大前端百科 _2021-08-24 16:49_ 

## **简介**

推荐一款号称程序员的字体 Fira Code，Fira 是 Mozilla 主推的字体系列，Fira Code 是基于 Fira Mono 等宽字体的一个扩展，主要特点是加入了编程连字特性（ligatures）。Fira Code 就是利用这个特性对编程中的常用符号进行优化，比如把输入的「!=」直接显示成「≠」或者把「>=」变成「≥ 」等等，以此来提高代码的可读性。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s3j9VN5jfIyUJ4i8Ez69DWzYVRYAw9ardbw0QhakegEc/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzIniah3TicHianTzTntl72AONG2XiavF5PTwhraMyaZRBx2cZql6W8OPEr2gvg/640?wx_fmt=png)

## **Github地址**

https://github.com/tonsky/FiraCode

## **安装步骤**

### **下载**

前往 Fira Code 字体的 GitHub 地址，ReadMe文件中找到"**Download & Install**"，主要有 6 个 .ttf 字体文件。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,skTtr2yNhPzFgby2doSl0AHUFOtPX18ZUk8QDuasr_zg/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzIniaE8iavzoEMFBsficS3zzSBzzXYUbtVqHrQWdmCuHwEIwM30h49c764Dfw/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sX-EvDtgWnLe0WdLfkvM-ymSWjAEGbxHb3d4h_ExIsJA/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzIniaj0AfUKUQgFOLeg1lC6ZIiabE9zrK7JdF80gJOcZDkCLz3KchW7c37Cg/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/321x0,svWqiplhRIbAPp7tyNgtPlnj3Ecyk9G4jgctaeNYSqTc/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzIniat8NrNADkg7bPfI3EC337jrAfKiaNqHOygIQmWibet4H9ufdBSmVia7VQA/640?wx_fmt=png)

### **安装**

安装刚刚下载的 6 个字体文件：选择文件后点击鼠标右键，点击安装即可安装字体。然后就可以在Control Panel-》Fonts里看到刚才安装的字体了。

![图片](https://proxy-prod.omnivore-image-cache.app/645x0,sw9xvq_BWmdEdAVfJc5qnoi55TFZyfhAaOZRlM50RBcw/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzIniayiaVp7dPfpX4cQXVFI3gZEqwbFtian2JDcyRtnoLE3icWu8NZSCjmlC7g/640?wx_fmt=png)

打开 VS Code，如果在安装字体之前已经打开了，**一定要重启**VS Code，否则识别不到新字体。

打开菜单File > Preferences > Settings，然后打开 **settings.json** 文件，找到 editor.fontFamily字段，然后再把 Fira Code 添加到第一个，并且加上 "editor.fontLigatures": true 。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,shBa6FJ_GFxnA-Wb1Ix5GZNOP8SygKZQJYq7pn_nfsHE/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzIniahb0JIIYkicVrHrgUxObTPHEH4kUMBHLzT7Dj8Wjfdd3yQs5myKUHhzA/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s0hHE2mK8xcYDhHG49i0fRdkAkrm1oou8Q4Jb9331U_4/https://mmbiz.qpic.cn/mmbiz_png/KfVMnzBU3EblzvtRuNDXjs8fSLHuzInialTzUviaRMSqicTyuq4wJeiaGgRd6y0qsEOibhMuQXETxVfFEicInO2sP2pQ/640?wx_fmt=png)

"editor.fontFamily": "'Fira Code', Menlo, Monaco, 'Courier New', monospace",

"editor.fontLigatures": true, //这个控制是否启用字体连字，true 启用，false 不启用，这里选择启用。

## **查看效果**

字体不知道怎么回事，看的我头好晕啊，眼睛疼！是我还不适应吗？难道我是一个假程序员吗？

![](https://proxy-prod.omnivore-image-cache.app/0x0,sztHen2zKglbooc8jnRanh8F2QK9kejIH_eS7fuz0zAU/data:image/svg+xml,%3Csvg xmlns=\"http://www.w3.org/2000/svg\" width=\"24\" height=\"24\" viewBox=\"0 0 24 24\" fill=\"none\"%3E%0A%3Cpath d=\"M12.8974 15.5585L14.9719 13.484L16.2447 14.7568L12.3519 18.6497C12.1566 18.8449 11.84 18.8449 11.6448 18.6497L7.75195 14.7568L9.02475 13.484L11.0974 15.5567L11.1 4.99976L12.9 5.0002L12.8974 15.5585Z\" fill=\"black\" opacity=\"0.3\"/%3E%0A%3C/svg%3E) 继续滑动看下一个 



