---
id: f48796b3-5ba1-423d-9657-609d961148b8
url: https://sspai.com/post/79278
title: |
  CloudFlare Tunnel 免费内网穿透的简明教程 - 少数派
author: |
  Antiscientist
source: 微信公众号
dtype: 教程
tags:
  - 400兴趣类/网址工具
banner: https://source.unsplash.com/900x1600/?
state: false
date: 2024-04-17 10:30:03
---


# CloudFlare Tunnel 免费内网穿透的简明教程 - 少数派
#Omnivore

[Read on Omnivore](https://omnivore.app/me/https-sspai-com-post-79278-18ee9e3a794)
[Read Original](https://sspai.com/post/79278)

CloudFlare Tunnel 免费内网穿透的简明教程

* **将本地网络的服务暴露到公网，可以理解为内网穿透。** 例如我们在本地服务器 `192.168.1.1:3000` 搭建了一个 Transmission 服务用于 BT 下载，我们只能在内网环境才能访问这个服务，但通过内网穿透技术，我们可以在任何广域网环境下访问该服务。相比 NPS 之类传统穿透服务，Tunnel 不需要公网云服务器，同时自带域名解析，无需 DDNS 和公网 IP。
* **将非常规端口服务转发到 80/443 常规端口。** 无论是使用公网 IP + DDNS 还是传统内网穿透服务，都免不了使用非常规端口进行访问，如果某些服务使用了复杂的重定向可能会导致 URL 中端口号丢失而引起不可控的问题，同时也不够优雅。
* **自动为你的域名提供 HTTPS 认证。**
* **为你的服务提供额外保护认证。**
* **最重要的是——免费。**

Tunnel 通过在本地网络运行的一个 Cloudflare 守护程序，与 Cloudflare 云端通信，将云端请求数据转发到本地网络的 IP + 端口。

## 前置条件

* 持有一个域名
* 将域名 DNS 解析托管到 CF
* 内网有一台本地服务器，用于运行本地与 cloudflare 通信的 cloudflared 程序
* 一张境内双币信用卡（仅用于添加付款方式，服务是免费的）

## 开始

#### 1\. 打开 [Cloudflare Zero Trust](https://sspai.com/link?target=https%3A%2F%2Fone.dash.cloudflare.com%2F) 工作台面板

#### 2\. 创建 **Cloudflare Zero Trust** ，选择免费计划。需要提供付款方式，使用境内的双币卡即可

![](https://proxy-prod.omnivore-image-cache.app/0x0,sOE5QdY42R10QBea59k1t5uecfORlEST7s47AFgtSY1I/https://cdn.sspai.com/2023/04/19/3fda36165f47fd88607ab63e5e670d60.png?imageView2/2/format/webp)

填写team name，随意填写

![](https://proxy-prod.omnivore-image-cache.app/0x0,spQe9vJtKrhBaDk1qOptnQIvR7Rt-fveRi3OHUQZL2Vw/https://cdn.sspai.com/2023/04/19/253a4662ea372d37c5ae39d6cd49acd0.png?imageView2/2/format/webp)

选择免费计划

![](https://proxy-prod.omnivore-image-cache.app/0x0,sCjZNSfu6_nD1x1FqHs_5cZUACmKsm9XXM2kqi5x5uus/https://cdn.sspai.com/2023/04/19/9c7e23855dc4b7f43c85ceac26f5b1a1.png?imageView2/2/format/webp)

添加付款方式

![](https://proxy-prod.omnivore-image-cache.app/0x0,sNIxfpTwe3RYn7vLVn49AEbefYXaLLkn8tCvBgjCaPz4/https://cdn.sspai.com/2023/04/19/a35a50e9b70930ae8c14420992b08292.png?imageView2/2/format/webp)

填写信用卡信息（仅验证，不会扣款），完成配置

#### 3\. 完成后，在 Access Tunnels 中，创建一个 Tunnel。

![](https://proxy-prod.omnivore-image-cache.app/0x0,s2tfPLkoAKNhQXgPld5obdbhjbMiG77miLQpD-iFRNXc/https://cdn.sspai.com/2023/04/12/e7aaabd6ef56e6f38ddadcf9c72ca87c.png?imageView2/2/format/webp)

创建 Tunnel

#### 4\. 选择 Cloudflared 部署方式。

Tunnel 需要通过 Cloudflared 来建立云端与本地网络的通道，这里推荐选择 Docker 部署Cloudflared 守护进程以使用 Tunnel 功能。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sHgXOUkVvhCUL8MNnmQI7v_cwkX8uFbeBwnNE1gFDrKc/https://cdn.sspai.com/2023/04/12/5929a70e704d501a74c282a4d115d7a4.png?imageView2/2/format/webp)

获取 Cloudflared 启动命令及 Token

点击复制按钮复制指令，在本地网络主机上运行命令。我们还可以加上`--name cloudflared -d --restart unless-stop`为Docker容器增加名称和后台运行。你可以使用下方我修改好命令来创建 Docker，注意替换你为自己的 Token（就是网页中`—-token` 之后的长串字符）

```brainfuck
docker run --name cloudflared -d --restart unless-stop cloudflare/cloudflared:latest tunnel --no-autoupdate run --token <YourToken>
```

#### 5\. 配置域名和转发URL

为你的域名配置一个子域名（Subdomain），Path 留空，URL 处填写内网服务的IP加端口号。注意 Type 处建议使用 HTTP，因为 Cloudflare 会自动为你提供 HTTPS，因此此处的转发目标可以是 HTTP 服务端口。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sQj9DiXc04wvtvZnLfZ8j5ADsCKr5O3EjQPo6_o_GasQ/https://cdn.sspai.com/2023/04/13/33224e12ccc68adf837b36df0102729f.png?imageView2/2/format/webp)

配置内网目标 IP+端口

## 完成

接着访问刚刚配置的三级域名，例如 [https://app.yourdomain.com](https://sspai.com/link?target=https%3A%2F%2Fapp.yourdomain.com%2F)（是的，你没看错，是 https，cloudflare 已经自动为域名提供了 https 证书）就可以访问到内网的非公端口号服务了。一个 Tunnel 中可以添加多条三级域名来跳转到不同的内网服务，在 Tunnel 页面的 Public Hostname 中新增即可。

## 为你的服务添加额外验证

如果你觉得这种直接暴露内网服务的方式有较高的安全风险，我们还可以使用 Application 功能为服务添加额外的安全验证。

1\. 点击 Application - Get started。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sApKPtOUrJH3jMuav3Djhee-yWox8pM4dU1t9JN1pvuo/https://cdn.sspai.com/2023/04/13/567031b521c28da6bad15365c34aba85.png?imageView2/2/format/webp)

创建 Application

2\. 选择 Self-hosted。

![](https://proxy-prod.omnivore-image-cache.app/0x0,s0vSimy23Ed2d3IEEekejDY5XgC_qRjpzsazetPRtAO0/https://cdn.sspai.com/2023/04/13/18466eaaae2eef082e29952bf50e06d6.png?imageView2/2/format/webp)

选择类型

3\. 填写配置，**注意 Subdomain 和 Domain 需要使用刚刚创建的 Tunnel 服务相同的 Domain 配置**。

![](https://proxy-prod.omnivore-image-cache.app/0x0,su9AW-V2Yo6ev-U0t1tbhSl9rzlIwh_nB5ITx4SyWoNw/https://cdn.sspai.com/2023/04/13/7ebcb9a291e4f41d91586ff27d02efba.png?imageView2/2/format/webp)

配置三级域名

4\. 选择验证方式。填写 Policy name（任意）。在 Include 区域选择验证方式，示例图片中使用的是 Email 域名的方式，用户在访问该网络时需要使用指定的邮箱域名（如@gmail.com）验证，这种方式比较适合自定义域名的企业邮箱用户。另外你还可以指定特定完整邮箱地址、IP 地址范围等方式。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sLi4RcaY0cakllKDm5wrqVcnv0haHhS5sO7zm1wrMOBg/https://cdn.sspai.com/2023/04/13/432fad5f4a100bef3e2e2edb766190d5.png?imageView2/2/format/webp)

选择验证方式

5\. 完成添加

![](https://proxy-prod.omnivore-image-cache.app/0x0,sopOXsMyS5QKVo9YI6t_VizM5dMViAWz2MVgM7z3lbvo/https://cdn.sspai.com/2023/04/13/df92034e320ca431e5237a7a9837a994.png?imageView2/2/format/webp)

此时，访问 https://app.yourdomain.com 可以看到网站多了一个验证页面，使用刚刚设置的域名邮箱，接收验证码来访问。

![](https://proxy-prod.omnivore-image-cache.app/0x0,sIUBJmcql9IfC6p6B0Uc-0KpJYvwhiJWG4dq3NtM2VPc/https://cdn.sspai.com/2023/04/13/8170d330642ec3576c175c2702838ec0.png?imageView2/2/format/webp)

## 评价

除了上述直接转发 http 服务之外，Tunnel 还支持 RDP、SSH 等协议的转发，玩法丰富，有待各位探索。作为一款免费的服务，简单的配置，低门槛使用条件，适合各位 Self-hosted 玩家尝试。不过要注意的是 Tunnel 在国内访问速度不快，并且有断流的情况，请酌情使用。



