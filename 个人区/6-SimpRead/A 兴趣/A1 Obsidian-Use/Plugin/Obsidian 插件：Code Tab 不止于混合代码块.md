---
url: https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian-code-tab/
title: Obsidian 插件：Code Tab 不止于混合代码块
date: 2023-11-12 21:00:51
tags:
  - 400兴趣类/Obsidian/Plugin/编辑/codetab
source: Pkmer
banner: /img/pkmer-avatar.png
banner_icon: 🔖
dtype: 插件
state: true
---
<div class="menu-toggle"> <SidebarToggle client:idle ></SidebarToggle> </div>

obsidian 社区插件

* * *

sr-annote { all: unset; }

## 概述

**插件名片**

*   插件名称：Code Tab
*   插件版本：0.11.0
*   插件作者：Davis Riedel
*   插件描述：创造一个类似 leetcode 样式的混合代码块，且不仅限于代码块。
*   插件项目地址：[点我跳转](https://github.com/lazyloong/obsidian-code-tab)
*   国内下载地址：[下载安装](https://pkmer.cn/products/plugin/pluginMarket/?obsidian-code-tab)

## 效果 & 特性

为代码块加上标签页，生成 leetcode 样式的混合代码块，且不仅限于代码块，可以自己设计内容比如 tasks，dataview 等。

## 安装

*   因为该插件还有没上架 Obsidian 社区插件，所以需要手动安装（可参考 [Obsidian 社区插件的安装](https://pkmer.cn/Pkmer-Docs/10-obsidian/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6/obsidian%E7%A4%BE%E5%8C%BA%E6%8F%92%E4%BB%B6%E7%9A%84%E5%AE%89%E8%A3%85/#%E6%89%8B%E5%8A%A8%E5%AE%89%E8%A3%85)）
*   安装后无需进行其他设置

## 使用

### 基本语法

*   用四个 ```` 来框其整个混合块，别忘了后面跟着的 tab；
*   tab 是标签，代表建立一个分支。
*   每一个 tab 下方就是这个分支你想填入的内容。

```
tab: 标题1
从这里到下一个tab就是内容啦
tab: 标题2
内容二

```

![](https://cdn.pkmer.cn/images/image-20230707191358527.png!pkmer)

### 更多用法展示

#### 1、混合代码块

当每一个内容为代码块时，渲染的效果就是类似 leetcode 的那种混合代码块的效果啦

*   效果展示

这里用 leetcode 第 2730 题做展示

![](https://cdn.pkmer.cn/images/image-20230707143232858.png!pkmer)

![](https://cdn.pkmer.cn/images/image-20230707143154086.png!pkmer)

![](https://cdn.pkmer.cn/images/image-20230707135559867.png!pkmer)

*   源码

```
````tab
tab:题目
给你一个下标从 0 开始的字符串 s ，这个字符串只包含 0 到 9 的数字字符。
如果一个字符串 t 中至多有一对相邻字符是相等的，那么称这个字符串是半重复的。
请你返回 s 中最长 **半重复** 子字符串的长度。

tab:示例
输入：s = "52233"
输出：4
解释：最长半重复子字符串是 "5223" ，子字符串从 i = 0 开始，在 j = 3 处结束。

输入：s = "5494"
输出：4
解释：s 就是一个半重复字符串，所以答案为 4 。

输入：s = "1111111"
输出：2
解释：最长半重复子字符串是 "11" ，子字符串从 i = 0 开始，在 j = 1 处结束。

tab:java
```java
class Solution {
    public int longestSemiRepetitiveSubstring(String s) {
        int n = s.length();
        if (n <= 2)
            return n;
        int[] pre = new int[50];
        int ans = 0, k = 0;        // k记录pre的长度，方便后面遍历得到ans
        pre[0] = 1;                // 循环从1开始，需要补上第一个1
        for (int i = 1; i < n; i++) {
            if (s.charAt(i-1) == s.charAt(i))
                k++;
            pre[k]++;
        }

        ans = pre[0];
        for (int i = 1; i <= k; i++)
            ans = Math.max(ans, pre[i-1] + pre[i]);
        return ans;
    }
}
```
tab:python
```python
class Solution:
    def longestSemiRepetitiveSubstring(self, s: str) -> int:
        if len(s) <= 2:
            return len(s)
        pre = [1]                  # 循环从1开始，需要补上第一个1
        for i in range(1, len(s)):
            pre[len(pre)-1] += 1
            if s[i-1] == s[i]:
                pre.append(0)
        ans = pre[0]
        for i in range(1, len(pre)):
            ans = max(ans, pre[i-1] + pre[i])
        return ans
```
tab:c
```c
int longestSemiRepetitiveSubstring(char * s){
    int pre[50] = {1};
    int ans = 0, k = 0;
    for (int i = 1; i < 50; i++) {
        // 不能用sizeof(s)来得到s的长度，因此要加上这个判断
        if (s[i] == NULL)
            break;
        if (s[i-1] == s[i])
            k++;
        pre[k]++;
    }
    ans = pre[0];
    for (int i = 1; i <= k; i++)
        ans = fmax(ans, pre[i-1] + pre[i]);
    return ans;
}
```

```

#### 2、分块任务清单

*   效果展示

![](https://cdn.pkmer.cn/images/image-20230707185908449.png!pkmer)

*   源码

```
````tab
tab: 每日任务
- [ ] 建设PKMER
- [ ] 建设PKMER

tab: 短期任务
- [ ] 建设PKMER
- [ ] 建设PKMER

tab: 长期任务
- [ ] 建设PKMER
- [ ] 建设PKMER
````

```

#### 3、分区整理

*   效果展示

![](https://cdn.pkmer.cn/images/image-20230707191139849.png!pkmer)

*   源码

```
````tab
tab: 分治法
##### Easy
- 108.将有序数组转换为二叉搜索树

##### Medium
- 53.最大子数组和
- 105.从前序与中序遍历序列构造二叉树
- 106.从中序与后序遍历序列构造二叉树
- 148.排序链表

##### Hard
- 4.寻找两个正序数组的中位数
- 23.合并K个升序列表

tab: 动态规划
##### Easy
- 70.爬楼梯

##### Medium
- 5.最长回文子串
- 22.括号生成
- 45.跳跃游戏Ⅱ

##### Hard
- 10.正则表达式匹配
- 32.最长有效括号
- 42.接雨水
- 44.通配符匹配

````

```

#### 4、配合 dataview 进行查询

*   效果展示

![](https://cdn.pkmer.cn/images/c4d925d82aff347d3d0fafee1f332d0.png!pkmer)

![](https://cdn.pkmer.cn/images/151e87a03a1ce00d2be2efdc70c8c44.png!pkmer)

*   源码

```
````tab
tab:难度为Easy
```dataview
table WITHOUT ID
id AS "题号", name AS "题目", degree AS "难度"
FROM "Code/LeetCode"
WHERE degree = "Easy"
SORT id
```
tab:难度为Medium
```dataview
TABLE WITHOUT ID
id AS "题号", name AS "题目", degree AS "难度"
FROM "Code/LeetCode"
WHERE degree = "Medium"
SORT id
```
tab:难度为Hard
```dataview
TABLE WITHOUT ID
id AS "题号", name AS "题目", degree AS "难度"
FROM "Code/LeetCode"
WHERE degree = "Hard"
SORT id
```
````

```

code-tab 还能这么玩 html-tabsobsidian-code-tabObsidian 社区插件