---
time: 2023-11-20T18:16:00
dtype: 概念
tags:
  - review
  - 考研
  - 300教育类/01-高等数学/知识库/001函数极限与连续
subject: 高等数学
---
## 诱导公式
$$
\lim f(x)^{g(x)}=e^{{\lim[f(x)-1]}\cdot g(x)}
$$
## 推导
$$
\begin{aligned}&
\lim f(x)^{g(x)},1^\infty\\&=\lim [1+f(x)-1]^{g(x)}\\&=\lim [1+f(x)-1]^{\frac{1}{f(x)-1}\cdot[f(x)-1]\cdot g(x)}\\&=e^{\lim [f(x)-1]\cdot g(x)} \end{aligned}
$$
## 条件
1. 仅适用于 $1^\infty$
2. 不要漏了 $e$

![728598a9-8af4-4f1a-a25d-3d1c258dbb86-26626835.jpg](https://api2.mubu.com/v3/document_image/728598a9-8af4-4f1a-a25d-3d1c258dbb86-26626835.jpg)