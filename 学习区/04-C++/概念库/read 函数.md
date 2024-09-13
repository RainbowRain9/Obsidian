---
created time: 2024-06-24 21:10:13
updated time: 2024-06-24 21:10:15
dtype: 概念
subject: C++
tags:
  - review
dg-publish: true
banner: https://source.unsplash.com/900x1600/?tree
banner_icon: 🧠
---

# C++ 中的 `read` 函数

## 概念
`read` 是 C++ 中用于从输入流中读取数据的函数。与 `get` 或 `getline` 不同，`read` 函数通常用于二进制文件的读取，它从输入流中读取指定数量的字节，并将它们存储在提供的缓冲区中。

## 模板
以下是 `read` 函数的基本使用模板：

```C++
#include <iostream>
#include <fstream>

int main() {
    char buffer[100];
    ifstream file("example.bin", ios::binary);
    if (!file) {
        cerr << "Unable to open file!" << endl;
        return 1;
    }

    // 从文件中读取最多 100 个字节
    file.read(buffer, 100);
    if (!file) {
        cerr << "Read error occurred!" << endl;
        return 1;
    }

    // 处理读取的数据
    // ...

    file.close();
    return 0;
}
```

## 重点
- **二进制读取**：`read` 通常用于二进制文件读取。
- **缓冲区**：读取的数据存储在提供的缓冲区中。
- **字节数**：`read` 函数接受两个参数，第一个是字符数组，第二个是要读取的字节数。

## 高级用法
`read` 函数可以与 `gcount` 成员函数一起使用，以确定实际读取的字节数：

```C++
ifstream file("example.bin", ios::binary);
file.read(buffer, 100);
size_t bytesRead = file.gcount(); // 获取实际读取的字节数
```

## 例题

### 例题 1：读取二进制文件

```C++
int main() {
    char buffer[100];
    ifstream file("example.bin", ios::binary);
    if (!file) {
        cerr << "Unable to open file!" << endl;
        return 1;
    }

    file.read(buffer, 100);
    if (!file) {
        cerr << "Read error occurred!" << endl;
        return 1;
    }

    // 处理 buffer 中的数据
    // ...

    file.close();
    return 0;
}
```

## 注意事项

- **错误处理**：使用 `read` 后应该检查文件流的状态，以确定读取是否成功。
- **读取字节数**：`read` 函数返回实际读取的字节数，可以使用 `gcount()` 来获取。
- **流模式**：当读取二进制文件时，确保以二进制模式打开文件。

## 总结

`read` 函数是 C++ 中处理二进制数据读取的重要工具。它允许开发者读取固定数量的字节到内存中，适合处理非文本文件。正确使用 `read` 函数对于实现高效的二进制 I/O 操作至关重要。
