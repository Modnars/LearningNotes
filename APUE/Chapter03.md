<!--
 * @Description: APUE Chapter03 笔记
 * @version: 1.0.0
 * @Author: modnarshen
 * @Date: 2020/10/04 10:45:07
 * @LastEditors: modnarshen
 * @LastEditTime: 2020/10/04 10:47:52
-->

# 第3章 _文件I/O_

## 3.1 引言

&#160; &#160; &#160; &#160; UNIX系统中的大多数文件I/O只需要用到5个函数: `open`、`read`、`write`、`lseek`以及`close`。

&#160; &#160; &#160; &#160; 本章的函数经常被称为**不带缓冲**的I/O_(unbuffered I/O，与标准I/O函数相对照)_。术语**不带缓冲**指的是每个`read`和`write`都调用内核中的一个系统调用。这些不带缓冲的I/O函数不是**ISO C**的组成部分，但它们是**POSIX.1**和**Single UNIX Specification**的组成部分。

## 3.2 文件描述符

&#160; &#160; &#160; &#160; 当打开一个现有文件或创建一个新文件时，内核向进程返回一个文件描述符。

&#160; &#160; &#160; &#160; 在符合POSIX.1的应用程序中，幻数0、1、2虽然已经被标准化，但应当把他们替换成符号常量`STDIN_FILENO`、`STDOUT_FILENO`和`STDCRR_FILENO`以提高可读性，它们被定义在`<unistd.h>`中。

## 3.3 函数`open`和`openat`

## 3.4 函数`creat`
## 3.5 函数`close`
## 3.6 函数`lseek`
## 3.7 函数`read`

```cpp
#include <unistd.h>

/**
 * @brief 从打开的文件中读取数据
 * @param fd 文件描述符
 * @param buf 缓存缓冲区
 * @param nbytes 目标读取数据量(字节)
 * @return 0: 文件尾端; -1: 出错; 其他: 正常读取的字节数
 */
ssize_t read(int fd, void *buf, size_t nbytes);
```

## 3.8 函数`write`




