---
url: https://zhuanlan.zhihu.com/p/657343154?utm_campaign=&utm_medium=social&utm_oi=1695170834254327808&utm_psn=1697072626130968576&utm_source=com.alpha.pinbox
title: 数学系大学生的 obsidian 配置——记录一年来的弯路与心得
date: 2023-11-10 09:34:53
tags:
  - 400兴趣类/Obsidian/教程/实践
banner:
  - https://picx.zhimg.com/v2-5f9e74c67807fd71977204a8822d572c_720w.jpg?source=172ae18b
banner_icon: 🔖
state: true
dtype: 教程
created: 2023-11-11T22:36
updated: 2024-04-13T12:49
---

## obsidian 介绍

（如果已经知道甚至正在使用 obsidian，本节可跳过）

如果你是一个想要尝试甚至完全实现笔记无纸化的大学生，那么 obsidian 是一个足够合适的电子笔记软件，作为一个数学系学生，我可以给你以下的优点供你参考：

*   比纸质笔记更好管理的标签、链接、以及文件夹管理系统；
*   美观的公式和笔记格式；
*   丰富的插件系统，用于简化输入与优化阅读体验。

以下是我的 obsidian 笔记的配置与笔记概览：

![](https://pic1.zhimg.com/v2-c85508fb21d89185af4913446d1595ac_b.png)

## 基础环节

### markdown 语言

obsidian 使用的是一个非常简洁的标记语言，名为 markdown（简称 md），它可以用最少的语法建立一个格式化的笔记，虽然没有复杂的排版系统，但是它可以让写作者更专注于自己所创作的内容，如果想要学习，仅需花一个小时就可以学习完 md 的语法。可以参考教程：[markdown 语法官方教程](https://markdown.com.cn/)

### LaTeX 公式

作为一个数学系学生，$\LaTeX$\LaTeX 公式是笔记中不可或缺的一环，也是我在这一年的实践当中弯路最多的一环，对于不熟悉 $\LaTeX$\LaTeX 的读者，可以参考 $\LaTeX$\LaTeX 数学公式手册：[LaTeX 公式手册](https://www.cnblogs.com/1024th/p/11623258.html)

如果你是理工科学生，我**强烈建议**你将 $\LaTeX$\LaTeX 学会，因为这可能是你毕业论文需要的排版工具，对于没有那么多时间排版论文的学生而言，Word 排版出 $\LaTeX$\LaTeX 效果所需要的时间和精力是要比直接用 $\LaTeX$\LaTeX 多的。使用 $\LaTeX$\LaTeX 你可以排版出美观的公式使你的笔记赏心悦目：

$\int_a^b f(x)\mathrm{d}x = F(b)-F(a)$\int_a^b f(x)\mathrm{d}x = F(b)-F(a)

如果你不想手打公式，一个方法是直接使用 Mathpix 进行 OCR，只不过这个方法需要付费且价格不菲。另一个方法就是使用编辑器进行编辑，例如使用国产软件 Axmath 或者在线的免费编辑器，但是我想强调的一点是：**使用纯键盘操作要比加上鼠标操作更有效率**，使用编辑器在这一点上是不如自己手打的。

### obsidian 下载

obsidian 可以直接在 obsidian 官网下载：[obsidian 官网](https://obsidian.md/) ，如果比较慢可以用梯子加速。个人版是**完全免费**的，如果你想要发布服务或者官方同步，也可选用官方的付费方案，但是价格相对较贵且有替代方案，不建议。

## 优化你的体验

### 主题选择

obsidian 的官方主题实际上已经够耐看了，但是如果你想要一些不一样的感觉，可以进入官方的主题市场进行选择：

![](https://pic2.zhimg.com/v2-132ff77ec307494ef37b9e98abced105_b.png)

这些主题仅仅只是更改你的一些显示设置。不会更改你笔记的实际内容（只不过它会更改你的 PDF 导出的格式）。  
我目前使用的是 Blue Topaz ，这个是国人做的主题，可以在 Style Settings 插件里面直接调整你的各种设置。

如果你想使用类似 Things 这样外国人开发的主题，但是想要调整样式，可能需要直接更改 CSS 文件。进入仓库根目录，找到. obsidan 文件夹 / themes，在里面更改 CSS 文件即可，例如 Things 的 CSS 文件中，想要更改栏宽可以在 CSS 文件中 ctrl+f 搜索 width，找到如下代码：

```
  --line-width: 40rem;
  --line-height: 1.5;
  --max-width: 90%;
  --max-col-width: 18em;
  --icon-muted: 0.5;
  --nested-padding: 1.1em;
  --folding-offset: 10px;

```

在这里面更改相应内容即可。

如果不懂 CSS 是不是有点劝退？那还是选择国人开发的主题吧，起码更改会相对容易很多。

### 插件配置

第三方插件是 obsidian 的亮点，进入设置 -> 第三方插件，将安全模式关闭即可进入社区插件市场，第三方插件很多，对于使用者，我的建议是**在你需要某个功能的时候再安装对应插件**。例如你想优化表格输入的时候，你再安装 table 的相关插件。

![](https://pic4.zhimg.com/v2-66b9276e0ca2d7c6e69de312b2688e5b_b.png)

## 数学类笔记的弯路与心得

### 公式

### 加速你的公式输入

尽管 $\LaTeX$\LaTeX 公式非常美观，但是输入的过程也比较麻烦，有没有一个插件优化输入体验？我使用的插件叫 Quick Latex for Obsidian ，这个插件能在只输入预设的短命令的时候输出大段的公式，例如在安装插件后，在插件设置的 Custom Shorthand Parameter 里面加入：

```
rm:::\mathrm{};

```

这个代码是什么意思？意思是说当你打一个 rm 在数学模式当中，再打出你的 shorthand（默认为空格），那么你的 rm 就自动补全为 \ mathrm{}.

这个模式在你用来简化矩阵输出的时候效果绝佳，不妨一试。

### MathJax 的公式扩展

熟悉 MathJax 的读者都知道类似二重闭合曲面积分的符号在 MathJax 当中是不支持的，显示效果就会像：$\oiint$\oiint

在 obsidian 当中也会是这个效果，为了解决这个问题，我目前找到的唯一解决方案是安装 Extended MathJax 插件，在根目录新建一个名为 preamble.sty 的 sty 文件，在里面加入下面这一行：

```
\newcommand{\oiint}{{\subset\!\supset} \mathllap{\iint}}

```

那么此时在 obsidian 再输入 \ oiint 这个命令就可以直接得到：

![](media/v2-713a7e7ff25c43034596ec4ad491b782_b.png)

这样就可以愉快地输入数学公式了。

### 绘图

绘图确实是数学类笔记相对没那么重要的一环，但是美观的图像确实能有助于后续的复习理解。

![](https://pic4.zhimg.com/v2-cb5a8878d754e44e33b771ea6a5a9f3b_b.png)

我采用的方案是使用 Axglyph 绘图后再插入笔记，这样的图像相对比较美观，而且绘图效率也比较高。

如果你有原教旨主义思想或者比较好的 TikZ 绘图能力，也可使用 TikZJax 插件进行绘图，例如下图的星形线：

![](https://pic4.zhimg.com/v2-bb8718b66de0a75c3346cffabc47d217_b.png)

这个图像的 TikZ 代码如下：

```
\begin{document}  
\begin{tikzpicture}[scale=2]  
\draw[->] (-2,0) -- (2,0) node[right] {$x$};  
\draw[->] (0,-2) -- (0,2) node[above] {$y$};  
\draw[thick, black] plot [domain=0:2*pi, samples=100, variable=\t]   
({(cos(\t r))^3}, {(sin(\t r))^3});  
\end{tikzpicture}  
\end{document}

```

这个方法相对比较麻烦，只适合想要极致的图像显示效果（矢量图）或者有非常好的 TikZ 绘图能力的人选择。

### callout 语法

callout 在笔记中就是一个有颜色的分块显示：

![](https://pic2.zhimg.com/v2-3f962a58329d4fca06534a28f089eed1_b.png)

这个东西的源代码如下：

```
>[!note] 齐次微分方程
>形如 $$\frac{\mathrm{d}y}{\mathrm{d}x}=g\left(\frac{y}{x}\right)\tag{2.1}$$ 的微分方程称为**齐次微分方程**。其中 $g(u)$ 为 $u$ 的连续函数。

```

这里的 [!note] 指示了 callout 的类型是 note 类型，后

面**一定要打空格**，再接上你想要的标题，这样就能出现上述的显示效果。

callout 的语法在官方文档的中文文档中记录不详细，这里给出英文文档中的链接 [callout 官方语法](https://help.obsidian.md/Editing+and+formatting/Callouts)

### 同步

我目前安装了 obsidian 设备有安卓手机和 Windows 电脑，使用方式是 obsidian 写作 + 阅读 + 导出 PDF，安卓阅读 + 笔记小改，那么同步就不可或缺了。

官方同步付费价格让我尝试寻找一个免费方便的同步方式，插件 remotely save 可以解决这个问题，推荐有 onedrive 的读者采用，如果你没有 OneDrive 账号，注册微软账号可以直接使用，5g 的免费空间足够你使用了。

## 总结

以上就是我一年来记电子笔记的一些磕碰和弯路了，事实上 obsidian 还有双向链接等方式连接各笔记，但是这些内容已经被讲烂了所以就不赘述了，有兴趣的读者可以自行查阅官方文档。**笔记最重要的意义在于帮助你串联知识和总结知识**，obsidian 很强大，但也不要沉迷玩插件（例如一些花里胡哨的画图）而耽误真正的笔记环节。（虽然感觉这个弯路可能每个人都要走一遍）

本文使用 [Zhihu On VSCode](https://zhuanlan.zhihu.com/p/106057556) 创作并发布