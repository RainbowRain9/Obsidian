---
命名: __BM算法
课程:
  - "[[第3章 蛮力法.canvas|第3章 蛮力法]]"
状态: 完成
执行人: 蔡蔡鸿宇
时间安排: Invalid date
待解决问题: 待解决:[ 0 ]
created: 2025-04-07T15:53
updated: 2025-04-07T15:54
---
# BM算法解析

## 1. 基本概念
### 1.1 算法定义
**BM算法**（Boyer-Moore算法）是目前最高效的单模式字符串匹配算法之一：
- **发明时间**：1977年由Robert S. Boyer和J Strother Moore提出
- **核心思想**：基于坏字符规则和好后缀规则进行模式串跳跃
- **匹配方向**：模式串从右向左匹配

### 1.2 关键特性
```
预处理阶段：生成坏字符表和好后缀表
匹配阶段：利用预处理信息实现跳跃式匹配
最理想时间复杂度：O(n/m)[^6]
```

## 2. 核心规则
### 2.1 坏字符规则（Bad Character）
**规则说明**：当发现不匹配字符时：
1. 在模式串中查找该字符最后出现的位置
2. 计算滑动距离 = 坏字符位置 - 模式串中该字符最后出现的位置

**示例**：
```
主串：GCTTCTGCTAC
模式：TCTG
匹配：TCTx（x与G不匹配）
滑动：3 - (-1) = 4（G在模式中不存在）
```

### 2.2 好后缀规则（Good Suffix）
**规则说明**：当发现好后缀时：
1. 在模式串前缀中查找与好后缀匹配的最长子串
2. 计算滑动距离 = 好后缀起始位置 - 匹配前缀位置

**示例**：
```
主串：CGTGCCTACTTACTTACTTAC
模式：CTTACTTAC
匹配：...TTAC（好后缀"TTAC"）
滑动：模式右移使前缀"TTAC"对齐
```

## 3. 算法实现
### 3.1 预处理阶段
```python
def preprocess_bad_char(pattern):
    bc_table = dict()
    for i in range(len(pattern)):
        bc_table[pattern[i]] = i  # 记录字符最后出现位置
    return bc_table

def preprocess_good_suffix(pattern):
    n = len(pattern)
    gs_table = [0] * (n + 1)
    suffix = [0] * (n + 1)
  
    # Case 1: 好后缀在模式中另有出现
    for i in range(n):
        j, k = i, 0
        while j >= 0 and pattern[j] == pattern[n-1-k]:
            j -= 1
            k += 1
            suffix[k] = j + 1
  
    # Case 2: 好后缀的部分匹配前缀
    for i in range(n):
        gs_table[i] = n
    for i in range(n-1):
        gs_table[n-1-suffix[i]] = n-1-i
  
    return gs_table
```

### 3.2 匹配阶段
```python
def bm_search(text, pattern):
    bc_table = preprocess_bad_char(pattern)
    gs_table = preprocess_good_suffix(pattern)
    n, m = len(text), len(pattern)
    i = 0  # 模式串在主串的起始位置
  
    while i <= n - m:
        j = m - 1  # 从右向左匹配
        while j >= 0 and pattern[j] == text[i+j]:
            j -= 1
      
        if j < 0:  # 完全匹配
            return i
        else:
            # 计算坏字符和好后缀的滑动距离
            bc_shift = j - bc_table.get(text[i+j], -1)
            gs_shift = gs_table[j]
            i += max(bc_shift, gs_shift)  # 取较大值跳跃
  
    return -1
```

## 4. 复杂度分析
| 指标 | 时间复杂度 | 空间复杂度 |
|------|------------|------------|
| 预处理 | O(m+σ) | O(m+σ) |
| 匹配 | O(n/m)~O(n×m) | O(1) |
| **最佳情况** | **O(n/m)** | - |
| **最坏情况** | **O(n×m)** | - |

## 5. 应用场景
1. **文本编辑器**：快速查找功能
2. **杀毒软件**：病毒特征码匹配
3. **数据库系统**：字符串检索
4. **生物信息学**：DNA序列匹配

## 6. 算法对比
| 特性 | BM算法 | KMP算法 | BF算法 |
|------|--------|---------|--------|
| 预处理 | 需要 | 需要 | 不需要 |
| 匹配方向 | 右→左 | 左→右 | 左→右 |
| 最佳时间复杂度 | O(n/m) | O(n) | O(n) |
| 最差时间复杂度 | O(n×m) | O(n) | O(n×m) |
| 空间复杂度 | O(m+σ) | O(m) | O(1) |

[^6]: BM算法通过坏字符和好后缀规则实现跳跃式匹配，显著提高效率