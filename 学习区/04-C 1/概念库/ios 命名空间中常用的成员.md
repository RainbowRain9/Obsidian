---
created time: 2024-06-24 21:20:33
updated time: 2024-06-25 11:33:59
dtype: 概念
subject: C++
tags:
  - review
dg-publish: true
banner: https://source.unsplash.com/900x1600/?tree
banner_icon: 🧠
created: 2024-06-24T21:20
updated: 2025-01-12T19:54
---

# C++ `ios` 命名空间中常用的成员

`ios` 命名空间提供了多种控制输入输出流行为的工具和属性。以下是一些常用的成员：

## 打开模式（Open Mode Flags）

- **ios::app**: 追加模式，所有写操作都会在文件末尾进行。
- **ios::ate**: 打开文件后立即定位到文件末尾。
- **ios::binary**: 以二进制模式打开文件，不进行特殊字符转换。
- **ios::in**: 以输入模式打开文件。
- **ios::out**: 以输出模式打开文件，如果文件存在则截断文件内容。
- **ios::trunc**: 如果文件已存在，将其截断为零长度。

## 流状态函数

- **ios::bad**: 检查流是否遇到无法恢复的错误。
- **ios::eof**: 检查是否已到达文件末尾。
- **ios::fail**: 检查流是否遇到错误，包括逻辑错误。
- **ios::good**: 检查流是否处于良好状态，即没有错误发生。

## 流操作函数

- **ios::clear**: 清除流的错误状态。
- **ios::setstate**: 设置流的错误状态。

## 流定位函数

- **ios::seekg**: 移动输入指针到指定位置。
- **ios::seekp**: 移动输出指针到指定位置。
- **ios::tellg**: 返回当前输入位置。
- **ios::tellp**: 返回当前输出位置。

## 流缓冲管理

- **ios::sync**: 同步流的缓冲区与外部存储。

## 字符插入和提取

- **ios::width**: 设置下一次输入或输出操作的宽度。

## 格式化标志

- **ios::boolalpha**: 控制布尔值以文本形式输出。
- **ios::dec**, **ios::hex**, **ios::oct**: 控制数值的输出基数。
- **ios::fixed**, **ios::scientific**: 控制浮点数的输出格式。
- **ios::right**, **ios::left**: 控制文本的对齐方式。
- **ios::showbase**: 输出数值时显示基数。
- **ios::showpoint**: 总是显示小数点。
- **ios::uppercase**: 以大写形式输出。

## 异常类

- **ios::failure**: 用于抛出 I/O 相关的异常。

## 枚举类型

- **ios::openmode**: 用于表示打开模式的枚举类型。
- **ios::seekdir**: 用于表示定位方向的枚举类型。

## 模板

以下是如何在代码中使用这些成员的示例：

```C++
#include <iostream>
#include <fstream>

int main() {
    // 创建一个以输出模式打开的文件流，并截断文件
    ofstream file("example.txt", ios::out | ios::trunc);
    if (file) {
        file << "Hello, world!" << endl;
    } else {
        cerr << "Failed to open file." << endl;
    }

    // 检查流状态
    if (file.fail()) {
        cerr << "Write operation failed." << endl;
    }

    // 清除错误状态
    file.clear();

    // 关闭文件
    file.close();

    return 0;
}
```

## 总结

`ios` 命名空间中的成员提供了丰富的功能来控制和查询流的状态，格式化输出，以及执行输入输出操作。熟悉这些成员对于有效地使用 C++ 的 I/O 流至关重要。

