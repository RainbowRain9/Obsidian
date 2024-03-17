---
time: 2023-11-27T11:26:00
dtype: 例题
tags:
  - 300教育类/01-高等数学/知识库/002导数与微分
cards-deck: 高等数学::知识点
subject: 高等数学
dg-publish: true
---
常见的求导公式？ #anki 
$$
\begin{aligned}&(x^\alpha)'=\alpha x^\alpha-1\\&(a^x)'=a^x\ln a\\&\log_{a}x=\frac{1}{x\ln a}\\&(\sqrt{x})^{\prime}=\frac{1}{2\sqrt{x}},(\frac{1}{x})^{\prime}=-\frac{1}{x^{2}}\\&(\sin x)^{\prime}=\cos x,(\cos x)^{\prime}=-\sin x\\&(e^{x})^{\prime}=e^{x},(\ln x)^{\prime}=\frac{1}{x}\end{aligned}
$$

三角函数的求导公式? #anki 
$$
\begin{aligned}&(\sin x)'=\cos x\\&(\cos x)'=-\sin x\\&(\tan x)^{\prime}=\sec^2x\\&(\cot x)^{\prime}=-\csc^2x\\&(\sec x)^{\prime}=\sec x\cdot\tan x\\&(\csc x)^{\prime}=-\csc x\cdot\cot x\end{aligned}
$$

等价无穷小的定理？ #anki 
- 同一自变量同一极限过程下，$\alpha,\beta$ 是无穷小。
- 若 $\alpha \sim\alpha_{1},\beta \sim\beta_{1}$ 则 $\lim\frac{\alpha}{\beta}=\lim\frac{\alpha_{1}}{\beta_{1}}$


四则运算求导法则？
- $\left[C\cdot\mathcal{v}(x)\right]^{\prime}$ :: $=C\cdot\mathcal{v}^{\prime}(x)$
- $\left[\frac{C}{v(x)}\right]^{\prime}$ :: $=\frac{-C\cdot v^{\prime}(x)}{[v(x)]^2}$
- $\begin{aligned}(\mu_1\cdot\mu_2\cdot\mu_3)^{\prime}\end{aligned}$ :: $\begin{aligned}=\mu_1^{\prime}\cdot\mu_2\cdot\mu_3+\mu_1\cdot\mu_2^{\prime}\cdot\mu_3+\mu_1\cdot\mu_2\cdot\mu_3^{\prime}\end{aligned}$

反函数求导法则的定义？ #anki 
- 直接函数 $y=f(x)\Rightarrow$ 反函数 $x=f^-(y)$  
- $\frac{dx}{dy}=\frac{1}{\frac{dy}{dx}}\quad\left(\because\frac{a}{b}=\frac{1}{\frac{b}{a}}\right)$
- 即反函数的导数为直接函数导数的倒数

复合函数求导法则的定义？ #anki 
函数 $y=f(\mu)$ 在从 $\mu$ 处可导，函数 $\mu=g(x)$ (中间变量)在 $x$ 处可导则复合函数 $y=f[g(x)]$ 在 $x$ 处可导，且
$\frac{dy}{dx}=\frac{dy}{du}\cdot\frac{du}{dx}=f^{\prime}(u)g^{\prime}(x)$
$y-u-x$  (链式法则)
$\frac{dy}{dx}=\frac{dy}{du}\cdot\frac{du}{dx}$