---
created time: 2024-06-24 21:07:14
updated time: 2024-06-25 10:46:20
dtype: 概念
subject: C++
tags:
  - review
dg-publish: true
banner: https://source.unsplash.com/900x1600/?tree
banner_icon: 🧠
created: 2024-06-24T21:07
updated: 2025-01-12T19:56
---

# C++ 中的 `get` 函数

## 概念
`get` 是 C++ 中用于从输入流中读取字符的函数。它提供了几种不同的形式，用于读取单个字符或一系列字符直到遇到特定的分隔符。

## 模板
以下是 `get` 函数的基本使用模板：

```C++
#include <iostream>
#include <string>

int main() {
    char ch;
    // 读取单个字符
    cin.get(ch);
    cout << "You entered: " << ch << endl;

    char str[100];
    // 读取一行，直到遇到换行符
    cin.getline(str, 100);
    cout << "You entered: " << str << endl;
    return 0;
}
```

## 重点
- **读取单个字符**：`cin.get(ch)` 读取一个字符并存储在 `ch` 中。
- **读取一行**：`cin.getline(str, n)` 读取最多 `n-1` 个字符到 `str` 中，直到遇到换行符，然后将换行符也存储在 `str` 中。
I
## 高级用法
`get` 函数可以用于更复杂的读取操作，例如，连续读取多个字符数组：

```C++
char str1[100], str2[100];
cin.get(str1, 100).get(str2, 100);
```

## 例题

### 例题 1：读取单个字符

```C++
int main() {
    char ch;
    cout << "Please enter a single character: ";
    cin.get(ch);  // 读取单个字符
    cout << "You entered: " << ch << endl;
    return 0;
}
```

### 例题 2：读取一行字符

```C++
int main() {
    char line[100];
    cout << "Please enter a line of text: ";
    cin.getline(line, 100);  // 读取一行
    cout << "You entered: " << line << endl;
    return 0;
}
```

## 注意事项

- **缓冲区大小**：在使用 `cin.getline` 时，确保提供的缓冲区足够大，以避免溢出。
- **换行符处理**：`cin.get` 会读取换行符，而 `cin.getline` 会将换行符存储在字符串中。
- **连续读取**：使用 `cin.get` 连续读取时，需要在每个 `get` 调用之后使用 `cin.ignore()` 来忽略换行符。

## 总结

`get` 函数是 C++ 中用于字符读取的基础工具。它提供了灵活的方式来读取单个字符或一行文本，理解其行为对于处理输入数据至关重要。

