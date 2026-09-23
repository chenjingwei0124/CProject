# CLearn：C 语言模块化教程

这是一套面向初学者的 C11 教程源码。内容按照知识模块拆分，每个示例都带有中文注释，并且可以独立编译、运行。

## 学习路线

| 模块 | 主题 | 主要内容 |
| --- | --- | --- |
| 01 | 入门 | 程序结构、`main`、标准输出 |
| 02 | 数据类型与输入输出 | 基本类型、格式化输出、安全读取输入 |
| 03 | 运算符 | 算术、关系、逻辑、位运算 |
| 04 | 流程控制 | `if`、`switch`、循环、`break`、`continue` |
| 05 | 函数 | 声明、参数、返回值、递归 |
| 06 | 数组与字符串 | 遍历、二维数组、`string.h` |
| 07 | 指针 | 地址、解引用、指针与数组、函数指针 |
| 08 | 结构体与枚举 | 自定义类型、`typedef`、结构体数组 |
| 09 | 动态内存 | `malloc`、`realloc`、`free` |
| 10 | 文件操作 | 文本文件写入、读取、错误处理 |
| 11 | 多文件编程 | 头文件、实现文件、接口隔离 |
| 12 | 数据结构 | 单链表的创建、遍历、删除与释放 |

建议按编号依次学习。先阅读源码中的注释，再修改参数或补充功能并重新运行。

## 编译全部示例

需要支持 C11 的编译器，例如 Clang 或 GCC。

```sh
cd CLearn
make
```

生成的程序位于 `build/modules/...`。查看所有可执行文件：

```sh
make list
```

运行示例：

```sh
./build/modules/01_getting_started/hello_world
./build/modules/11_modular_programming/calculator_demo
```

也可以只编译一个独立示例：

```sh
cc -std=c11 -Wall -Wextra -Wpedantic \
  modules/04_control_flow/control_flow.c -o control_flow
./control_flow
```

清理生成文件：

```sh
make clean
```

> 文件操作示例会在程序运行时，于当前工作目录生成 `demo_output.txt`。

## 推荐练习方式

1. 先预测程序输出，再编译运行。
2. 每次只修改一个知识点，观察编译器警告和运行结果。
3. 为每个模块增加一个自己的小练习，例如成绩统计、通讯录或待办清单。
4. 始终保留 `-Wall -Wextra -Wpedantic`，尽早养成处理警告的习惯。
