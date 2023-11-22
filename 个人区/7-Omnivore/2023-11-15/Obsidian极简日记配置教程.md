---
id: 113a86a5-2b9f-41a4-9c8c-a88913f57886
omnivore_error: There was an error parsing the front matter template. See console for details.
---

# Obsidian极简日记配置教程
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-biz-mzg-5-njk-3-md-uy-mq-3-d-3-d-chksm--18bd2ffe66c)
[Read Original](https://mp.weixin.qq.com/s?__biz=Mzg5Njk3MDUyMQ%3D%3D&chksm=c079b58cf70e3c9a6f86ec99c5067c5188d9c353ad2572bf92e0b3fddaee55659b27aba9ba0f&cur_album_id=2918666965630566403&idx=1&mid=2247487482&scene=178&sn=76a4bbff9a9e36b4565b731d51917448)

原创 维客笔记  维客笔记 _2023-01-29 21:36_ _发表于_ 

欢迎点击上方蓝字⌈维客笔记⌋"关注并星标⭐，不错过每一篇推送！

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s1Apb9gzPVdKRQ_Yok_Iw0BJIZnWqOKxlefrpSv4mgsI/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9c4I1HK2EwTw9AQNicuhXQr8udiaVQYHbDro3jTgd96fibib5w16m34ngOHw/640?wx_fmt=png)

大家好，我是来自1037号森林的BCS！

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sP1BuRGarYnZTSce6H3C4QcbXk2vlGKu6vwatsxdJoUM/https://mmbiz.qpic.cn/mmbiz_jpg/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cTH6YAtBVaI3FtBlobS1NqxNtveXkmNaesicu9iaVWDBrSdUZcPBVPibUQ/640?wx_fmt=jpeg)

\[随手拍，今日的1037号森林，上午我来的时候，人还是很少的\]

## 01 写在前面

新年快乐！

年前分享了我用Ob写极简日记的演示视频（🍟[2023，用Obsidian写极简日记！（多维表格）](http://mp.weixin.qq.com/s?%5F%5Fbiz=MzU4MzgxNjczMA==&mid=2247486661&idx=1&sn=452238a13b2ed8521daaacaf0fba4d6b&chksm=fda20fb0cad586a6bcb809219d4fa7463f40bf97e50b3f4a6d3cd14cd3c314e4a9b10237da27&scene=21#wechat%5Fredirect)），很开心有一些小伙伴对此方案感兴趣，今天维客就详细分享一下配置教程\~

祝大家玩得愉快并有所收获！

## 02 效果预览

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sbBQiIjphXi1U7YJirQ86S-nZP31-HWpoAdnVxM2ByYw/https://mmbiz.qpic.cn/mmbiz_gif/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9ciaUUgtdBpvib7LcckgGXRTP6d2r47e98PKCzvo2M55AmqPcJ2rJlSexw/640?wx_fmt=gif)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sC0RjgfpGB3uzPCIROZBrIFVYOFmL6v9adg3VRn8BEYQ/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9c6CBJ5LqQP9GCoOOnTSeF00Hy7YdQgpWL0ZMDsh3Ta9iciaBTQLqGRHTA/640?wx_fmt=png)

## 03 配置教程

### 3.1 准备工作

* Obsidian软件
* db folder插件

> 插件和软件可在文末获取哈😋
> 
> 若对db folder插件不熟悉，可以看一下我之前分享教程（有视频）🍟https://www.bilibili.com/read/cv19518130

### 3.2 详细配置

以下配置，我在新版的开箱即用库中完成，新库稍后会在github上更新\~

* 新建一条笔记，包含以下字段（具体字段，可以根据自己的实际需要随意定制哈），笔记名称设置为YYYY-MM-DD（例如今天的日期：2023-01-29）

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sI83Iy-TndFqDz04Bhxsf7aVCTD96dODhDQZyC5ssmdk/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cQJy4H0mMYTJHSJuFcOZl9CfwFIfUNIpSjxyc3we0VrmHsbNaUwDIXA/640?wx_fmt=png)

> 上图是我的日记模板
> 
> * 要事：记录1\~3条
> * 反思：记录1\~2条
> * 随想：这个完全随意，你也可以直接用memos记录
> * 标签：这个是为前面的随想字段而设计的，方便日后筛选
> * 其它的字段真的随意，记不记以及怎么记都在于你自己

* 将新建的笔记丢进你用来存放日记的文件夹（注意此方案**无需**使用日记插件，与日记插件没有任何关系）
* 选中日记文件夹然后右键，然后选择**创建新数据库**，见下图

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sg_GIRe1VUI0nfz-cgh5BPwbXv_o6lgC_bd-4vqFLBvU/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9c8z5Ol0n7pjHSic0QEXARFIow9JbibG5NMiaADrFx7quLfRDfSD9H12DFw/640?wx_fmt=png)

* 在创建新数据库之后，得到下图（与目标图貌似差得有点远），可以给此database命个名，比如日记Database

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sTpWCwPCu6bhE6SxX_ATfvC6QoaFdtPV4QcUoFPG2hJA/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9clVxnNgdWCyOic8UzoXKM148Mnrp7Jm9M786aE05UicYREypHHrNpldIQ/640?wx_fmt=png)

* 接下来，我们先删除或者隐藏不需要的列，如下图所示，单击列标题，在弹出窗口中选择单击Delete或者Hide

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sKfUsjDC0X6Y_EvZ7AaLEZq46MK2KXcZUAskysC0RktE/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9c4UA6WbE74QnRPtn0K7FFn3m5gdnnc71dsNajmN2Nib4CFhGK7nrrx2w/640?wx_fmt=png)

经过一通操作之后，得到下图

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sN9OtCrj-krj2kk6YODs7NDYESXh5EHdKiBVDYYf-eao/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cMNibdNmcwEO0hJzWa2VuUw92zZnb0FfPw1DFSLppBnkAImsvY7GKOlA/640?wx_fmt=png)

* 现在，我们需要将自定义的字段添加到多维表格中，单击上图中箭头所指的`+`,会弹出如下图中的窗口

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sRdssbzeVDJvFoWhYmpYfVyMhkapV1ZmW0sxO__xWbdM/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cDx6jqXhRbtgK03413QRFpo3CsS2eHBVfAmrRwwkA8HLlZforPvu9Mw/640?wx_fmt=png)

按照1，2，3，4的顺序依次操作哈

> 2是我们自定义的字段；3是设置字段的属性（比如对于`反思`字段，其属性就是文本；对于`标签`字段，其属性就是标签）；4是确认添加。

比如我现在添加了`反思`字段，如下图所示

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sqX8tLZkCHexShP2DTVp4RrB_zll9wTzTmHN8_h_62ps/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cRYH56UhTWLtVrsWlL8JqvlXgSqhZqWss2lJWaCL1mYNibmAN8PaHrCQ/640?wx_fmt=png)

注意到上图中的`反思`二字右上角有个`*`了吗，这表示此字段是inline field，也就是dataview的行内查询标记，我不太喜欢这种，我希望直接读取YAML中的`反思`字段，此时可以单击`反思`二字→settings，然后弹出下图，取消勾选inline field即可（另外勾选一下wrap content，方便看到一个单元格中的所有内容）

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,shwelnfng_FsUw8kDQ9_m5cph0wu62lh7KYlu9EBL4Vw/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cYficwR7BlDibpAKcFlBq125feQXfiaMx6UjCOEtk455y7VQKZDSr0WHjg/640?wx_fmt=png)

然后，我们将其它字段也添加到表格中，最后如下图所示（支持拖动列排序哈）

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s53194d7aFCp3hCMceU4MhJLF5f4bVfQTBSAi7I6-hVw/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cq9I1ogNgXBY9c5N5rMR6cvl60keaId98JB4Vanx5zNicvGROTVNjiakg/640?wx_fmt=png)

* 貌似上图与之前的模板不太一样，多了日期和图片列，这就需要我们自己添加笔记中不存在的字段

同样是单击列标题最右端的`+`，然后在弹出的窗口中输入日期并选择属性，如下图所示

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sE-5MVGvZnjW_UW6BZuVeSZSUm0fUUKaKgiwhcKxaVq8/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cuibgAiaicYxbVHOxrtOlTCF2NO8BMolydkZtDlZcugeCksr8OhLn6Ep3A/640?wx_fmt=png)

然后同样方法添加图片列，属性选择文本即可

* 还有一个问题，如何创建下图中的1月，2月...的筛选按钮呢？

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sLn2eaW8iHwXWLKl9NU_klaK4lMpjd4ip6cuftRXCQE8/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cnDQSFf6eARYGvIHPoicL4PD3UeCE5ZjYUqbwIP3CiapsFDKEGiacsbKyg/640?wx_fmt=png)

单击下图中的按钮

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,spzZxadwiYW3mHEwuYxOxieQuWxNS-bbvMCAtfYh2UlY/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cYXVPswumalrkI4EtT7uzNWhk9vvdWTGdXw6YGseCdIdCSstia1ia53Sg/640?wx_fmt=png)

在弹出的窗口中选择Add group，如下图所示

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,s3ZYe-xppzc1b-niMjIBRyRBGTx5AQECaopfoMcSfhKI/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cyPaDsTd3m3P6JHjz6s1xkIuj5Dfb4gyK87cbgFMjFtGYwEkTdlKfVw/640?wx_fmt=png)

下图以12月为例设置

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sALrWIw9Yyy8xi8YlH1UqVfm5k_0Kcg4tQmuSiu5RdDw/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cb1ZaOaQltJK8ptfsM9eNejHkEPMWpMZ4JJozgE1SsiasqErVPGoERmg/640?wx_fmt=png)

然后再回到database页面，12月就被添加上去了，如下图所示![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sgZRAUPZ5caxbyxE0rhb9F3LV_7U7pMu8UCQZKp_XpcU/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cPobibMrjt18nVjdcpRGtx9DhDlxx9XfiaaTiaBs93B6e2GZuyXg4Mutmg/640?wx_fmt=png)

* 另外注意下图中的按钮用于控制是否开启筛选

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,spwTa_ilxOi0YX_FZYS2tLl2GJyqFf1p2b4IzmsenSrw/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9cVBuBhTu3qOQM2uktXgR2MCKVrRwujFRAfUTS3CR1N1rhMiby04xfA0A/640?wx_fmt=png)

## 04 几个问题

1. 如何在单元格中添加无序列表

在单元格中按`[维客笔记,微信公众号]`这种格式输入即可实现无序列表，注意是英文逗号

1. 如何插入图片

以此格式`![[图片名称]]`即可插入图片

1. 日期是如何选择的？

添加日期列，并将其属性设置为日期即可选择日期

---

**每一次点赞/分享/赞赏，都是我前行的动力😋**  

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sK6xkf4sWAZat2s2Ern8P3KlYjtnTvuCjHolRXnKox0E/https://mmbiz.qpic.cn/mmbiz_png/PR2BLDgtAWTiaqlVWdvNtLgmQsrlDlF9c99zqmuaQbEfTVEedJawRCm4ibPFhUMfX0Xg5pKPu2vhAKoDjb9PCECw/640?wx_fmt=png)

**_A better you, A bigger world!_**

---

****如需视频版教程，可在后台吱我一声，有空录一下（录好之后链接会挂在后台）**



