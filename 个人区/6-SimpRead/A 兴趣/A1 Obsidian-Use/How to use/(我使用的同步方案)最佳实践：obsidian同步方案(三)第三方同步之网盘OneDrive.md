---
id: 6d4af581-4b47-4bae-bbe6-73b8b4465e7a
state: true
dtype: 教程
tags:
  - 400兴趣类/Obsidian/教程/同步
---

# (我使用的同步方案)最佳实践：obsidian同步方案(三)第三方同步之网盘OneDrive
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-mp-weixin-qq-com-s-x-u-fx-c-0-cev-7-we-ai-mvm-ugk-na-18bd62d48e4)
[Read Original](https://mp.weixin.qq.com/s/xUFxC0cev7WEAiMVMUgkNA)

原创 蹦跶的咖啡豆  蹦跶的咖啡豆 _2023-09-26 09:00_ _发表于湖南_ 

收录于合集

## 🙆‍♂️🙇‍♀️关注，星标，防走失💇‍♀️💆‍♂️

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**1 缘起**

这是系列文章 **《Obsidian同步方案系列教程-咖啡豆版》**，给各位新手宝宝和老鸟们做个参考，下面是已经发布的，后续会更新更多，请关注收藏。  

1. [**最佳实践：obsidian同步方案(一)官方同步详解**](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484477&idx=1&sn=94468ff3189d609c23ec6f2751c78025&chksm=c35977a5f42efeb3cbdea3d7c8870f8d422cec7aa077466eddad8d1edbc3ad41376897cc1d5c&scene=21#wechat%5Fredirect)
2. [**最佳实践：obsidian同步方案(二)第三方同步-多机同步 syncthing**](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484604&idx=1&sn=8d352587edd01d0fb81c488a8e523528&chksm=c3597724f42efe324b685661cf93a338e6f9f8a8741fa826cc9b8f78264e4dd5d4266c1011c4&scene=21#wechat%5Fredirect)
3. **最佳实践：obsidian同步方案(三)第三方同步之网盘OneDrive （咖啡豆使用方法）**

完整的方案会比较多，建议大家**关注本公众号**，咖啡豆会把所有方案详细讲解一遍。后续更新和重构，或者遇到文字描述不理解的地方，也可以来咖啡豆群，参与免费的直播会议。**加群方法在文末**

**本文大纲一览表：**

* 1 缘起
* 2 效果演示
* 3 移动端配置方法

   * 3.1 安装 Remotely Save 插件
   * 3.2 对 OneDrive 进行授权

* 4 对 Remotely Save 进行适当的设置

   * 4.1 自动运行时间
   * 4.2 启动后第 N 秒运行一次
   * 4.3 同步配置文件夹（实验性）

* 5 电脑端 OneDrive 配置方法

   * 5.1 直接保存在 OneDrive 文件中(简单)
   * 5.2 独立保存然后通过GoodSync等软件同步到OneDrive(推荐)

* 6 技巧1: iOS、iPad设备库提速

   * 6.1 把库新建在本机用来提速

* 7 技巧2: 避免冲突移动端的库和PC库名称要一致
* 8 技巧3: OneDrive长时间不同步(常见)
* 9 技巧4: OneDrive 某个时间点卡住不动(常见)
* 10 技巧5：发现某个文件报错无法同步

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**2 效果演示**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHbOc4EMI2nmH-EIdjOZc9eXEcF0-DyZ4FM46Uff69Ow/https://mmbiz.qpic.cn/sz_mmbiz_png/R6mqSUPzxKNBdFrbEhutWiatZxqg2ibZXtWlLGnjiaJ78cZqDZjMt4ygNdl6UVia51jU2miaA0xzTnYGZYQqjTzzwsw/640)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sYm4J4f9JWbkUbEzJEZ-GW0CqkgoNo0pfvdwTg68lkWY/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpz4OUDLBribrILlOSjaggLBd7RugkG6PU9f5mSXcQN0cC5oyWMAicYrKwQwZEEJ2Yq2X5rPO8Fg1og/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**3 移动端配置方法**

## **3.1 安装 Remotely Save 插件**

插件安装：

**插件安装方法**

1. **打开 obsidian → 设置 ⚙️ → 第三方插件 → 社区插件市场，搜索关键字安装**
2. **注意：你需要关闭第三方插件的** **安全模式** **，才能安装社区插件，建议关闭。**

### **3.2 对 OneDrive 进行授权**

1. 打开 **Remotely Save** 插件
2. 选择服务 “**OneDrive（个人服务）**”
3. 在 OneDrive（个人服务） 选项卡下面， 选择“**鉴权**”。(期间不要关闭obsidian)
4. 在弹出的鉴权页面，点击链接，跳转到网页上，**登录** OneDrive 个人版即可。
5. 等待鉴权结束后，会有个按钮，点击后会跳回到插件界面，显示已经鉴权了。
6. 在 Remotely Save 可点击 “**检查可否链接”** 进行检查。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHbOc4EMI2nmH-EIdjOZc9eXEcF0-DyZ4FM46Uff69Ow/https://mmbiz.qpic.cn/sz_mmbiz_png/R6mqSUPzxKNBdFrbEhutWiatZxqg2ibZXtWlLGnjiaJ78cZqDZjMt4ygNdl6UVia51jU2miaA0xzTnYGZYQqjTzzwsw/640)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sUnXZQd2xiomxD8dLct3-3xOxOOMmt1Ph9VrzHEi1xgU/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpz4OUDLBribrILlOSjaggLBaTlUAMfQnz0FlFrMtDmwjbbtAzwtefdXibl0EH0vgxUfBFE7da0MtAg/640?wx_fmt=png)

**手机端鉴权** 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHbOc4EMI2nmH-EIdjOZc9eXEcF0-DyZ4FM46Uff69Ow/https://mmbiz.qpic.cn/sz_mmbiz_png/R6mqSUPzxKNBdFrbEhutWiatZxqg2ibZXtWlLGnjiaJ78cZqDZjMt4ygNdl6UVia51jU2miaA0xzTnYGZYQqjTzzwsw/640)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sjEJeJzH33A7XuIJurUca6yUFJut8Ez8aYwQ3VVPdIyA/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpz4OUDLBribrILlOSjaggLBlrOxC5YNo4gVRR0OElrZTKUZ6UaibfbuGp3RicACicCwJCK76wkCDoz2Q/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**4 对 Remotely Save 进行适当设置**

## **4.1 自动运行时间**

这里可以设置一下，同步的时间，注意是在obsidian打开的情况运行，而不是后台运行。根据自己的需要设置。

### 4.2 启动后第 N 秒运行一次

可以可以设置一下，我设置的是 30秒，仅作参考。

### 4.3 同步配置文件夹（实验性）

这个**需要打开**，否则不会同步 `.obsidian` 配置文件夹。这个也是很多朋友使用 Remotely Save 之后发现配置同步不了的缘故。

其他的配置，**建议不要修改**，默认即可。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHbOc4EMI2nmH-EIdjOZc9eXEcF0-DyZ4FM46Uff69Ow/https://mmbiz.qpic.cn/sz_mmbiz_png/R6mqSUPzxKNBdFrbEhutWiatZxqg2ibZXtWlLGnjiaJ78cZqDZjMt4ygNdl6UVia51jU2miaA0xzTnYGZYQqjTzzwsw/640)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sICx-JSoeQUuzs4__5W2tmMqZQf2HY4IqNyRTZJHsv9o/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpz4OUDLBribrILlOSjaggLBUpe4xPtRgAQ71X15N6tAErM9WOfw0xoDFFGQsZkria95ybZSbWsHYmg/640?wx_fmt=png)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**5 电脑端 OneDrive 配置方法**

## 5.1 直接保存在 OneDrive 文件中(简单)

这里要特别的注意，如果你把库文件保存在 OneDrive 文件夹中，那么强烈推荐这样操作一次，避免一些奇怪的问题。

在 OneDrive 文件夹中，Obsidian库文件上，右键菜单选择 “**始终(A）保留在此设备上**”

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sHbOc4EMI2nmH-EIdjOZc9eXEcF0-DyZ4FM46Uff69Ow/https://mmbiz.qpic.cn/sz_mmbiz_png/R6mqSUPzxKNBdFrbEhutWiatZxqg2ibZXtWlLGnjiaJ78cZqDZjMt4ygNdl6UVia51jU2miaA0xzTnYGZYQqjTzzwsw/640)

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sZ8_Y5O8-AMQYwt6TYSJilAnsMvYEUCFcwqn0i1WgVik/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegpz4OUDLBribrILlOSjaggLB7FsaoML2Bw8AB9QtExEibQuI5UxEW0ngLrc280WBT3SaJa8hOIdL1sQ/640?wx_fmt=png)

因为一些网盘会保存链接，而不是文件本体，只有当你使用的时候才会下载完整的文件。所以为了避免一些奇怪的文件。这里配置一下，当然其他的网盘也有同样的问题，可以参考类似的操作方法。

### 5.2 独立保存然后通过GoodSync等软件同步到OneDrive(推荐)

我本人使用的这种方法，先将 Obsidian 库保存在本机，然后在 OneDrive 中新建同名文件。最后通过 GoodSync 或者类似的软件，双向同步这两个文件夹📂。

为什么要这么操作？

* **减少出错的记录。**
* **多一份备份进行隔离。**
* **避免网络出错的时候，可以正常的访问 Obsidian 库。**

**推荐有一定动手能力的这样操作**。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**6 技巧1: iOS、iPad设备库提速**

## 6.1 把库新建在本机用来提速

因为苹果设备的封闭，所以有些操作很麻烦。在这里，我们要注意一点，为了提高苹果设备的库打开速度，我们需要在新建库的时候，把库新建在本机。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**7 技巧2: 避免冲突移动端的库和PC库名称要一致**

另外，要注意，新建的库要和电脑中的库名称一致。避免一些插件的脚本失效

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**8 技巧3: OneDrive长时间不同步(常见)**

## 这种要检查本地网络，是否开启了**代理上网**，这种一定要关闭，开了影响速度。

## 

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**9 技巧4: OneDrive 某个时间点卡住不动(常见)**

检查你的 OneDrive 账号是否在淘宝上，进行了**扩容操作**。这种群里朋友们反馈，就是会有断流的情况出现，一段时间不能登录的情况。  

换成正常的账号之后，会正常的同步。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,slm5nz97t5tMDsfDY3PQLJZJOiJ4kkV-xuAvFzjkP1oM/https://mmbiz.qpic.cn/sz_mmbiz_gif/hiaajbARxsiaxgc15DNiaVfzlOEnpuWIcbEuvWUqUTcHqoibAiaPfQ7rp2aylXvQKWONghPkicLC4DVBCYyuiachOFh3Q/640)

**10 技巧5：发现某个文件报错无法同步**

电脑上，右键点击 OneDrive 查看报错的文件，这种多半是某个 `.JSON` 文件。处理方法如下：

* 点击暂停，然后重新同步。
* 退出OneDrive，重新打开后进行同步。
* 关闭Obsidian，然后重复上面两步操作。

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,sriUZDwHboZfucCXvgOEXHC50ep0C0H4McRRgyXx3yXg/https://mmbiz.qpic.cn/mmbiz_gif/6HUbSrbQwPIWUo2HgOuTm7vv4gibpQhlPFTeS9d56WG8uGdyWL8UY6S5mMHoGASEb2RH3c3CYibyib6gCCOGhfu1w/640?wxfrom=5&wx_lazy=1&wx_fmt=gif)

**没看懂？有疑问**

**操作有问题，可以加群后艾特群主，有问必答。让你找到组织**

扫描二维码，添加微信拉进群(注明来意) !

![图片](https://proxy-prod.omnivore-image-cache.app/126x0,s0pFNKX81mSYbbPx9wa8xo-IWkednnZa2DIKG795hMqw/https://mmbiz.qpic.cn/mmbiz_jpg/I4jplPncegpeK7Ip3bbHKaSianGZiaMg1nAfZ15Kun6CgfQW29ZYFtaOMlRibXfhaKfo8GfKBXibVx27vlDQzrz8iaQ/640?wx_fmt=jpeg&wxfrom=5&wx_lazy=1&wx_co=1)

**所有Obsidian插件 国内高速下载，长期更新，请订阅**

**如果你无法下载插件的话，可以来我的网站下载，所有1000多款插件，国内网盘高速下载，** **实时更新** **，** **没有下载次数限制** **。建议订阅后，会长期更新** 

**obsidian插件下载 | obsidian文档咖啡豆版 (coffeetea.top)**

**https://obsidian.vip/zh/documentation/obsidian-plugins-download**

**Obsidian全部插件简介-随官网实时更新 | obsidian文档咖啡豆版 (coffeetea.top)**

**https://obsidian.vip/zh/community-plugins/community-plugins-index**

**我有一个 obsidian 的文档**

## 

* [Obsidian秋分笔记：感悟生活的变迁，欠缺与遗憾，努力的最佳时机](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484635&idx=1&sn=702c1b6d8e84baa6506f7f99101d6085&chksm=c3597743f42efe553d9a72b8da76b412b1200f9cd68c804b13f5d60bfd9c025713e59dceba54&scene=21#wechat%5Fredirect)
* [【最佳实践】：obsidian同步方案(二)第三方同步-多机同步 syncthing](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484604&idx=1&sn=8d352587edd01d0fb81c488a8e523528&chksm=c3597724f42efe324b685661cf93a338e6f9f8a8741fa826cc9b8f78264e4dd5d4266c1011c4&scene=21#wechat%5Fredirect)
* [再谈卡顿- obsidian 移动版卡顿的检查和修复方法-【特别优化策略】](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484544&idx=1&sn=9d6a8bef90acaf8aba6713140bf5c684&chksm=c3597718f42efe0e4a17b582b369980fd24b67ac8cfe24ffa8db6c92e1a83988265b4219970e&scene=21#wechat%5Fredirect)
* [Obsidian卡顿原因和解决方案找到了！第8条最常见也最容易被忽视](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484483&idx=1&sn=a4b3b5828c5f8a8000e57908becfa3b0&chksm=c35977dbf42efecd0e6b1570d58c1e5ba6e1777d0f631c1faf839223e7b3d8bd06de56e956e5&scene=21#wechat%5Fredirect)
* [最佳实践：obsidian同步方案(一)官方同步详解](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484477&idx=1&sn=94468ff3189d609c23ec6f2751c78025&chksm=c35977a5f42efeb3cbdea3d7c8870f8d422cec7aa077466eddad8d1edbc3ad41376897cc1d5c&scene=21#wechat%5Fredirect)
* [预告《obsidian咖啡豆示例库》和课程需求问卷（优先制作需求表内容）](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484136&idx=2&sn=63d8e47ebed154ee285c2c52fcf99534&chksm=c3597170f42ef866ec762bfeab2b333b437badb310c5c7d996c8c15863ee336547644a7038ac&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [【重磅】Obsidian 新功能预告-超强增强(内置数据库)：第二个也许是你要的](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484528&idx=1&sn=9cd2e3a32d872f2d712c02de59bb14dc&chksm=c35977e8f42efefe9e4d6294ccda7083b245fc97f72252630adfcd652a1505b87dfd93c3fc00&scene=21#wechat%5Fredirect)
* [重要更新：Obsidian1.4.5 发布-新增超强功能-可视化YAML编辑-【推荐更新】](http://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484493&idx=1&sn=db5a5734d88d17633554817f9e784fe4&chksm=c35977d5f42efec36658e4c59bf98ad33f676d8ac10f8405adb6eb8f8d7bb357c8e95846e462&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：康纳尔笔记法的实现-理论样式和模板(喂饭教程)](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484334&idx=1&sn=9a79b5e92fe08f9a91ed4458bcbac7f1&chksm=c3597036f42ef920f2ef55fe451602173921df1ce4cfb334ae345ba921cf0dfd64022ffe4314&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：给你的笔记加上编年史时间轴大事记](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484321&idx=1&sn=3790273752c439af97c57665a4f681a7&chksm=c3597039f42ef92f123122ad9041aabbb0f7b3b822b4561677fd533301f152a8907e8dd684dd&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：时间格式化的秘密：让你的时间管理变得更加轻松！](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484005&idx=1&sn=674d6a63c92354dadde0b17596f2b134&chksm=c35971fdf42ef8ebfac053d0985ea2f4f6fa7c854652cc4799bea7e15a439a19e3de971adfbd&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：图片并列显示，显示多张图片。图片控制宽度，控制图片对齐方式。全主题匹配](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484136&idx=1&sn=861ec541cd7d40018a67617afa2d35a4&chksm=c3597170f42ef866758c8e3839cbb931a380e89056b49457e5a3ef2c7e3e710640cfb26a0d52&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：聚合标签方法(一）](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483746&idx=1&sn=985496147bcc66d61745442c29e6b085&chksm=c35972faf42efbec6ab519f2c86e9aabaf2e72d41a0eed64bc23a8f635723d10a329b838e91b&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：聚合标签(二)显示指定行内容](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483789&idx=1&sn=79eb7fbd4bdf0403bc4697ceb86554c1&chksm=c3597215f42efb034bd3f424ad2ff8b4127a72bb93482c5b37ce47ea94d85bbec7fb38ebb741&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian最佳实践：(视频教程)自动插入静态天气的日记模板3.0版(生活工作统管)完美解决方案](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484013&idx=1&sn=106d4509d2d01b5ccc11081e67c3fa7d&chksm=c35971f5f42ef8e35e9748f4bb85d924ee52b982472cfefcedb2cc4f793f7d10d6e2a2d64fc8&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [obsidian最佳实践：在多个Project之间丝滑切换](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483899&idx=1&sn=128619463767405ec6d4339b4b0d8c90&chksm=c3597263f42efb75d9deb7d6fddbcf93fcca9c867932bbcc0c9bb3485e69d8e719f5fc94919f&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian轻度美化：CSS代码-标签多彩小丸子2.0-支持编辑模式和源码模式](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484290&idx=1&sn=ddb5cb52017bba38515c767f50b0bcf3&chksm=c359701af42ef90c50a06b8d880049c71c9f88c160d68bc01e0e514fd6396c3edaf7e5f66ab1&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian实用插件：Min3ditorHotkeys插件](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483851&idx=1&sn=1d399b1b362a35f2e00291f2a943e7a9&chksm=c3597253f42efb450a17876670af0a4dc2901edfe74dc0cb536c813d5c59dc58e8a9405db985&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [Obsidian轻度美化：日历Calendar样式美化](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483778&idx=1&sn=598a12b306d0ecf23a63b68fceb5dc8a&chksm=c359721af42efb0c3376f9e2544eb2646b43e8fb95001618e9b88cc66f5b58f860cd6acc904e&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [obsidian轻度美化：美化callout提示框](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483772&idx=1&sn=702b7d4cdc45c056dedb7dd6e74dffe7&chksm=c35972e4f42efbf26775d6f7623f7f10773931b5d543d999a356a188b61a885d78d44206b754&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [obsidian轻度美化：全屏嵌入任何网页](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483732&idx=1&sn=d9a74217b29520e973ec2781579cd7e6&chksm=c35972ccf42efbdabf463c9960dfcc4ff8c29e2986bdee645ad74367c38c29b9e917d0b02a31&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [善用佳软：直接翻译屏幕上的任何内容-看懂obsidian的所有插件](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247483878&idx=1&sn=e0d0f5cb16649b819cbec445f033ed42&chksm=c359727ef42efb687d22868ec347d6d1d616105628bb01c06beb9c621081c46b102605b4da9e&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)
* [善用佳软：拯救你的超大库，一键压缩obsidian图片,节省60%空间](https://mp.weixin.qq.com/s?%5F%5Fbiz=Mzk0OTQ0NjM5MQ==&mid=2247484040&idx=1&sn=9b5822a9454be08a89b807742e90374a&chksm=c3597110f42ef806962694c5dbea884b537f806875b585c809e0ba383394ddd9718d2ae2c40a&token=1763103451&lang=zh%5FCN&scene=21#wechat%5Fredirect)

**原创不易 关注支持**  

不知不觉，做这个网站并免费提供，建群解答问题，已经大半年了。在这期间也有不少同学成功毕业，并且在使用Obsidian中收获了很多。

很高兴能够帮助到大家，不忘初心，继续努力，会保持更新和创新，与诸君共勉！希望老朋友和新朋友，都来关注支持下，您的一个关注和转发，都是我前进的动力。

## **咖啡豆的视频号👇**

## 

告诉大家一个好消息 蹦跶的咖啡豆也有自己的视频号啦！！！

微信视频号 **【蹦跶的咖啡豆】**每次3分钟，转变效率达人 👇👇👇

**今天要跟大家介绍下咖啡豆**

**每天会分享 效率工具、笔记软件和能力提升**

**长按添加订阅**

**Share knowledge, achieve self-realization**

**分享知识，成就自我** **▼**

![图片](https://proxy-prod.omnivore-image-cache.app/0x0,syFdRVYmajcGyV2fxJYqhbbPXhoJ9Et8rlWTOA7Fy0Fk/https://mmbiz.qpic.cn/mmbiz_png/I4jplPncegrBkNvbSusDzFG0nWiaVVEMH1iawSdBuMVveXibCcCibwE9qSPKwyvJRBtKmrCDCsvQkVW8ZjSbm186Gg/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

