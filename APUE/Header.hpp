/*
 * @Description: APUE第3章相关函数定义说明
 * @version: 1.0.0
 * @Author: modnarshen
 * @Date: 2020/10/04 10:37:55
 * @LastEditors: modnarshen
 * @LastEditTime: 2020/10/04 10:42:24
 */

#include <unistd.h>

/**
 * @brief 从打开的文件中读取数据
 * @param fd 文件描述符
 * @param buf 缓存缓冲区
 * @param nbytes 目标读取数据量(字节)
 * @return 0: 文件尾端; -1: 出错; 其他: 正常读取的字节数
 */
ssize_t read(int fd, void *buf, size_t nbytes);
