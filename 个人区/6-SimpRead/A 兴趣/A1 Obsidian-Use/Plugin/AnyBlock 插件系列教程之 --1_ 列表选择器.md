---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/any-block/1
state: true
dtype: 插件
title: AnyBlock 插件系列教程之 --1_ 列表选择器
date: 2023-11-12 21:40:30
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/AnyBlock
source: Pkmer
banner:
  - /img/pkmer-avatar.png
banner_icon: 🔖
created: 2023-11-12T21:40
updated: 2024-04-13T12:49
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

## 转树表格

demo：描述一下常见被子植物与裸子植物

[list2table]

*   裸子植物
    *   Cypress | 松树
        *   油松
        *   罗汉松
        *   马尾松
        *   红松
    *   Ginkgo | 柏树
    *   Angiosperms | 银杏
*   被子植物
    *   Sunflower | 向日葵
    *   Lotus | 荷花
    *   Chrysanthemum | 菊花

demo：描述一下各种常见编程语言的打印语句

[list2mdtable]

*   < 语言 | 打印语句 | 特点
*   java `java System.out.println("Hello World");` - 这语句有点长
*   c `c printf("Hello World")` - 原始的 C 输出
*   c++ `cpp std::cout<<"Hello Wrold"` - 流输出，但是这东西开销大，竞赛党别用
*   python `python print("Hello World")` - 需要注意一下 Python2 和 Python3 的打印语句不同
*   js `js console.log("Hello World");` - 控制台打印

## 启用转置

例如这个中英对照表（@todo，目前是纯 css 实现，复杂的会有 bug，等待通过 js 手段真正意义上实现）

[list2tableT]

*   Cypress | 松树
*   Ginkgo | 柏树
*   Angiosperms | 银杏
*   Sunflower | 向日葵
*   Lotus | 荷花
*   Chrysanthemum | 菊花

## 转列表格 / 转树形表格（可折叠）

ListTable/TreeTable/TreeGrid

demo: 描述一下公司结构

[2lt]

*   < 名称 | 上级部门 | 负责人 | 负责人电话
*   Obsidian 开源集团
    *   上海分公司 | 开源集团 | 张三 | 13&xxxxxxxx
        *   市场部 | 上海分公司 | 李四 | 14&xxxxxxxx
            *   市场分部 1
            *   市场分部 2
        *   销售部 | 上海分公司 | 王五 | 15&xxxxxxxx
    *   北京分公司 | 开源集团 | 陈六 | 16&xxxxxxxx
        *   技术部 | 北京分公司 | 欧阳 | 17&xxxxxxxx
        *   财务部 | 北京分公司 | 皇甫 | 18&xxxxxxxx

## 列表转表格的另一种写法

描述一下你对下面各种水果的看法

[2ut]

*   < 水果
    *   颜色
    *   英文
*   苹果
    *   红色
    *   apple
*   香蕉
    *   黄色
    *   banana
*   橘子
    *   橙色
    *   orange

或者（_该功能未完善，等待后续开发_）

[2ut]

*   苹果
    *   颜色: 红色
    *   英文: apple
*   香蕉
    *   颜色: 黄色
    *   英文: banana
*   橘子
    *   颜色: 橙色
    *   英文: orange

注意要项

[2mdut]

*   该模式下只能用二层列表
    *   多了无效 1
        *   多了无效 11
        *   多了无效 12

## 列表转时间线

列表转时间线

@todo 这里样式可以再优化一下，目前看起来是和 2ut 的效果一样的

@attension 这里在渲染模式可能与 table-extended 插件冲突

[list2mdtimeline]

*   1840 年 6 月
    
    *   英军发动鸦片战争
*   1842 年 8 月
    
    *   清政府与英国签订《南京条约》: 1）中国割让香港岛给英国; 2）赔款洋银 2100 万元; 3）开放广州、厦门、福州、宁波、上海五处为通商口岸;
        
        ***   《南京条约》影响**
        
        1.  中国近代史上第一个不平等条约，给中国人民带来深重的灾难，开创了列强以条约形式侵略和奴役中国的恶例;
        2.  中国的国家主权和领土完整遭到破坏，逐步沦为半殖民地半封建社会;
        3.  中国社会的主要矛盾由地主阶级与农民阶级的矛盾，演变为帝国主义和中华民族的矛盾（主要矛盾)、封建主义和人民大众的矛盾;
        4.  反侵略反封建成为中国人民肩负的两大历史任务;
        5.  中国逐渐开始了反帝反封建的资产阶级民主革命。
        
*   1841 年 5 月
    
    *   三元里人民的抗英斗争，是中国近代史上中国人民第一次大规模的反侵略武装斗争。
        
        ![](https://tse1-mm.cn.bing.net/th/id/R-C.4bbce1406f4442c1360edde26baa894d?rik=iHeUeby0jS5lnw&riu=http%3a%2f%2fp8.qhmsg.com%2fdr%2f270_500_%2ft01dbb76ff833d0a159.jpg&ehk=yggnC0t62%2b6DEVjvBgs%2fXJuuexBucd66FTc5gL0Gw%2fA%3d&risl=&pid=ImgRaw&r=0)
        
*   1851 年 1 月
    
    *   洪秀全金田村发动起义，建号太平天国。1853 年 3 月，占领南京, 定为首都, 改名天京，正式宜告太平天国农民政权的建立。颁布《天朝天亩制度》、天平军北伐

## 列表转标签栏

可以点击标签栏切换 @todo：样式优化

demo: 接下来我们来讲一下如何安装 python

[list2mdtab]

*   windows
    
    *   转到官方 Python 站点，并导航到最新版本。在撰写本文时，即 `3.10.6`。
    *   下载适用于您平台的二进制文件。执行二进制。
    *   除了将 Python 添加到 `PATH` 之外，您不需要选择任何选项，因为默认安装程序具有您需要的一切。只需单击 “安装” 即可。
*   linux
    
    *   可以通过执行以下命令在终端中使用 apt 包安装程序：
        
        ```
        apt-get install python3.6
        
        ```
        
*   macOS
    
    *   转到官方 Python 站点，并导航到最新版本。在撰写本文时，即 `3.10.6`。
    *   下载适用于您平台的二进制文件。执行二进制。
    *   在 Mac 上，这将默认在 dmg 安装程序中完成。

## 转流程图

（补充：其本质是转化为 `graph TB` [语法](https://mermaid.js.org/syntax/flowchart.html). 所以除了常规操作，你还可以进行一些其他操作：

**例如指定别名、进行树结构以外的连接**）

demo：描述一下树设计的脑图

[list2mermaid]

*   树结构
    *   基本术语
        *   A
        *   B(BB)
        *   C(CC)
            *   A
    *   性质
    *   基本运算
    *   二叉树
        *   分支 1
        *   分支 2

## 加列表根

如果列表有 root，我们可以写列表时将 root 省略掉，在头部信息中加上。

在转流程图和思维导图时该技巧很好用

例如：

[listroot(树结构)]

*   基本术语
    *   A
    *   B
    *   C
*   性质
*   基本运算
*   二叉树

## 转思维导图

（由于 ob 的 mermaid 版本较低，没有 mindmap，所以这里插件内置了一个新的 mermaid）

（当然缺点是：插件大小从 200KB 变为了 9MB 多，等到 ob 更新 mermaid 版本我会将插件内置的那份给去除掉的）

这里我就直接使用 mermaid 官方给的例子了

[listroot(root((mindmap)))|list2mindmap]

*   Origins
    *   Long history
    *   ::icon(fa fa-book)
    *   Popularisation
        *   British popular psychology author Tony Buzan
*   Research
    *   On effectiveness  
        and features
    *   On Automatic creation
        *   Uses
            *   Creative techniques
            *   Strategic planning
            *   Argument mapping
*   Tools
    *   Pen and paper
    *   Mermaid

## 最后补充两个语法糖

*   语法糖 1：当选择器为列表选择器，且 [] 第一个字符为 2 时，在前面追加 list 字符）
*   语法糖 1.5：列表第一行前面加上：`<` ，则视为表头（虽然表头可以不止一行，但这里只能设置第一行为表头）
*   语法糖 2：当 [] 第一个字符为! 时，`[!XXX]` 会自动变成 `[code]\n ad-xxx`，即快速生成 callout 语法）

这三种列表转出来的表格是互斥的，他们的解析列表的方式不同

即：列表 1 转为表格 A 看起来不错，当你切换为表格 B 时，一般不会那么直观

[2table]

*   DataTable| 数据表 / 标准表
    *   不允许合并单元格
    *   允许筛选 排序 对比功能
*   BranchTable| 分支表 / 分叉表
    *   允许以分叉的方式 纵向合并父单元格
    *   允许转化为流程图和脑图 允许给父子关系进行标注（beta） 不允许树结构外的连接（流程图可以）
*   TreeTable| 树形表 / 树型表
    *   不允许合并单元格
    *   允许在第一列保留层级关系 允许折叠 允许层次着色

* * *

0 - 基础教程 1 - 使用示例 - 列表选择器 2 - 使用示例 - 代码块引用块选择器 any-block