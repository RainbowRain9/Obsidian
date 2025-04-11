---
命名: __KMP算法
课程:
  - "[[第3章 蛮力法.canvas|第3章 蛮力法]]"
状态: 完成
执行人: 蔡蔡鸿宇
时间安排: Invalid date
待解决问题: 待解决:[ 0 ]
created: 2025-04-07T15:47
updated: 2025-04-07T15:48
---

# KMP算法解析

## 1. 基本概念
### 1.1 算法定义
**KMP算法**（Knuth-Morris-Pratt算法）是一种改进的字符串匹配算法：
- **功能本质**：在主串S中高效定位模式串T首次出现位置
- **核心思想**：利用部分匹配信息预处理模式串T，避免主串回溯[^3]
- **发明者**：Donald Knuth、Vaughan Pratt和James H. Morris于1977年联合发表[^6]

### 1.2 关键概念
```
前缀：指不包含最后一个字符的所有以第一个字符开头的连续子串
后缀：指不包含第一个字符的所有以最后一个字符结尾的连续子串
最长相等前后缀：即前缀表中的数值[^2]
```

## 2. 算法实现

### 2.1 预处理next数组
```c
void getNext(const string& T, vector<int>& next) {
    int j = 0;
    next[0] = 0;
    for(int i = 1; i < T.size(); i++) {
        while(j > 0 && T[i] != T[j]) 
            j = next[j-1];
        if(T[i] == T[j]) 
            j++;
        next[i] = j;
    }
    // 前缀表统一减一的版本：
    // next[0] = -1;
    // for(int i = 1, j = -1; i < T.size(); i++) {
    //    while(j >= 0 && T[i] != T[j+1]) 
    //        j = next[j];
    //    if(T[i] == T[j+1]) 
    //        j++;
    //    next[i] = j;
    // }
}
```

### 2.2 匹配过程
```c
int KMP(const string& S, const string& T) {
    if(T.empty()) return 0;
  
    vector<int> next(T.size());
    getNext(T, next);
  
    int j = 0;
    for(int i = 0; i < S.size(); i++) {
        while(j > 0 && S[i] != T[j])
            j = next[j-1];
        if(S[i] == T[j])
            j++;
        if(j == T.size())
            return i - T.size() + 1;
    }
    return -1;
}
```

## 3. 核心原理

### 3.1 部分匹配表
对于模式串`T="abcac"`的部分匹配表：
```
字符: a b c a c
next:0 0 0 1 0
```
- **物理意义**：记录每个位置之前的子串的最长相等前后缀长度[^2][^6]

### 3.2 滑动原理
当在`T[j]`处失配时：
1. 已知`T[0...j-1]`与`S[i-j...i-1]`匹配
2. 利用`next[j-1]`确定新的比较起点`k`
3. 保证`T[0...k-1]`与`S[i-k...i-1]`已经匹配[^1][^6]

## 4. 时间复杂度分析

| 步骤 | 时间复杂度 | 说明 |
|------|------------|------|
| 预处理 | O(m) | m为模式串长度 |
| 匹配 | O(n) | n为主串长度 |
| **总计** | **O(n+m)** | 远优于BF算法的O(n×m) |

## 5. 典型应用

### 5.1 查找子串
实现高效的`strStr()`功能[^4]：
```cpp
int strStr(string haystack, string needle) {
    return KMP(haystack, needle);
}
```

### 5.2 重复子串判断
检测字符串是否由重复子串构成[^3][^5]：
```cpp
bool repeatedSubstringPattern(string s) {
    string t = s + s;
    t.erase(t.begin()); t.pop_back();
    return KMP(t, s) != -1;
}
```

## 6. 算法对比

| 特性 | KMP算法 | BF算法 |
|------|---------|--------|
| 预处理 | 需要 | 不需要 |
| 主串回溯 | 不需要 | 需要 |
| 时间复杂度 | O(n+m) | O(n×m) |
| 空间复杂度 | O(m) | O(1) |
| 最佳场景 | 模式重复度高 | 短模式串 |

[^1]: 来源于《数据结构(C++版)ppt-第3版》第4章KMP算法解析
[^2]: 引自《代码随想录》字符串专题关于KMP的讲解
[^3]: KMP算法通过部分匹配表避免主串回溯的核心思想
[^4]: 《代码随想录》中KMP实现strStr的代码示例
[^5]: 重复子串检测的KMP应用实例
[^6]: 《数据结构》PPT中关于KMP算法流程和next数组的详细说明