---
description: 文章浏览阅读72次。【代码】蓝桥杯2小时救命速成指南。
title: 蓝桥杯2小时救命速成指南-CSDN博客
url: https://blog.csdn.net/Magnolia_He/article/details/147118123?spm=1001.2014.3001.5502
author: 
banner: 
source: 
dtype: CSDN
tags: 
state: false
created: 2025-04-10T21:40
updated: 2025-04-10T21:44
---

## 蓝桥杯2小时救命速成指南

### 1\. 🧩 STL（优先级最高）

#### 核心容器/函数

- `vector`  
	`push_back()` / `pop_back()` / `size()`
- `string`  
	`substr(pos, len)` / `find(str)` / `+=`
- `queue`  
	`push()` / `front()` / `pop()`
- `priority_queue`  
	默认大根堆，小根堆： `priority_queue<int, vector<int>, greater<int>>`
- `sort(v.begin(), v.end())`  
	自定义排序： `bool cmp(int a, int b) { return a > b; }`

#### ⚡ 应用场景

- 快速实现数组操作（vector）
- 字符串处理（substr截取子串）
- 堆优化（Dijkstra算法优先队列）

---

### 2\. 🔢 排序（STL为主）

#### 关键模板

```cpp
// 自定义结构体排序
struct Node { int x, y; };
bool cmp(Node a, Node b) { 
    if (a.x == b.x) return a.y < b.y;
    return a.x > b.x;
}
sort(v.begin(), v.end(), cmp);
1234567
```

#### ⚡ 应用场景

- 贪心算法前的预处理
- 二分查找前的有序化

---

### 3\. 🔍 二分（必背！）

#### 整数二分模板

```cpp
int l=1;r=n;
int ans;//ans表示当前答案满足时的最优解
while(l<=r) 
{
    int mid=(l+r)>>1;
    if(check(mid))
       l=mid+1,ans=mid; 
    else r=mid-1; 
}
cout << ans;
12345678910
```

#### 实数二分模板

```cpp
double l=0, r=1e9;
for (int i=0; i<100; i++) { // 精度控制
    double mid = (l + r) / 2;
    if (check(mid)) r = mid;
    else l = mid;
}
123456
```

#### ⚡ 应用场景

- 有序数组查找
- 答案单调时的最优解问题（如：分绳子）

---

### 4\. ➕ 前缀和与差分

#### 一维核心公式

- **前缀和** ： `s[i] = s[i-1] + a[i]`
- **差分** ： `diff[l] += c`, `diff[r+1] -= c`

#### 二维差分操作

```cpp
// 矩阵区域加减
diff[x1][y1] += c;
diff[x2+1][y1] -= c;
diff[x1][y2+1] -= c;
diff[x2+1][y2+1] += c;
12345
```

#### ⚡ 应用场景

- 区间求和（O(1)查询）
- 多次区间修改后求最终数组

---

### 5\. 🧮 数学（背公式！）

#### 高频考点

- **质数判断** ：试除法（枚举到√n）
- 筛质数（线性筛，埃氏筛）
- **快速幂** （递归分治）：
	```cpp
	long long qpow(long long a, long long b, long long p) {
	    if (b == 0) return 1 % p;
	    long long res = qpow(a, b/2, p);
	    return b % 2 ? res * res % p * a % p : res * res % p;
	}
	12345
	```
- **最大公约数** ： `__gcd(a, b)` （STL自带）
- 组合数学问题
- 进制问题

---

### 6\. 🤝 并查集 + 贪心

#### 并查集模板

```cpp
int father[N];
int find(int x) {
    return father[x] == x ? x : father[x] = find(father[x]);
}
void merge(int a, int b) {
    father[find(a)] = find(b);
}
1234567
```

#### 贪心策略

- **排序贪心** ：按权重排序后取最优
- **区间调度** ：优先选结束早的

---

### 7\. 💻 二进制与位运算

#### 常用操作

- `n & 1` ：判断奇偶
- `n >> 1` ：等价于 `/2`
- `a ^ b ^ b = a` ：交换变量 `a = a ^ b; b = a ^ b; a = a ^ b;`

#### ⚡ 应用场景

- 状态压缩（用二进制表示集合）
- 快速计算乘除2的幂

---

### 8\. 🐌 动态规划（最后冲刺）

#### 经典问题

- **背包问题**  
	状态转移： `dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i]] + w[i])`
- **最长递增子序列**  
	状态转移： `dp[i] = max(dp[i], dp[j] + 1) (j < i && a[j] < a[i])`

#### ⚡ 突击技巧

- 背模板！先解决「01背包」「斐波那契」等基础模型

**📌 突击策略**

1. **优先掌握** ：STL > 排序 > 二分 > 前缀和
2. **代码默写** ：每天手敲一次二分/快速幂模板
3. **动态规划** 留到最后，只背经典题！

Better Rose的资料分享 微信名片