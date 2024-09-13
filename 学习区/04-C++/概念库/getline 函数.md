---
created time: 2024-06-24 21:02:33
updated time: 2024-06-24 21:06:15
dtype: 概念
subject: C++
tags:
  - review
dg-publish: true
banner: https://source.unsplash.com/900x1600/?tree
banner_icon: 🧠
---

# C++ 中的 `getline` 函数

## 概念
`getline` 是 C++ 中用于从输入流中读取一行文本的函数。它读取字符直到遇到换行符 `\n` 或者达到流的末尾。换行符默认会被丢弃，不会存储在目标字符串中。

## 模板
以下是 `getline` 函数的基本使用模板：

```C++
#include <iostream>
#include <string>

int main() {
    string line;
    // 从标准输入读取一行
    getline(cin, line);
    // 打印读取的行
    cout << line << endl;
    return 0;
}
```

## 重点
- **读取一行**：`getline` 读取输入流直到换行符。
- **默认分隔符**：默认情况下，分隔符是换行符 `\n`。
- **存储结果**：读取的文本存储在提供的 `string` 对象中。

## 高级用法
`getline` 还可以接受一个可选的分隔符作为第三个参数，允许你指定不同的终止字符。

```C++
string line;
// 从标准输入读取，直到遇到 '#' 或换行符
getline(cin, line, '#');
```

## 例题

### 例题 1：读取并打印用户输入的行

```C++
int main() {
    string input;
    cout << "Please enter a line of text: ";
    // 读取用户输入的一行
    getline(cin, input);
    cout << "You entered: " << input << endl;
    return 0;
}
```

### 例题 2：读取文件中的每一行

```C++
int main() {
    ifstream file("example.txt");
    if (!file) {
        cerr << "Unable to open file!" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
    return 0;
}
```

## 注意事项

- **效率**：`getline` 比逐字符读取更高效，因为它是一次性操作。
- **错误处理**：如果读取过程中发生错误或到达文件末尾，输入流会被标记为错误状态。
- **换行符**：读取结束后，换行符不会被存储在字符串中，但是可以通过检查输入流的状态来确定是否遇到了换行符。

## 总结

`getline` 是处理文本行读取的强大工具，它提供了一种简单有效的方式来读取用户输入或文件内容。理解其行为和特性可以帮助开发者编写更健壮和高效的代码。