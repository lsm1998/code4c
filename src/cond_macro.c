//
// Created by lsm on 2021/2/19.
//
#include <stdio.h>
#include <stdarg.h>

/**
 * 1.ifdef 如果定义了
 * 2.ifndef 如果没有定义
 * 3.if 如果。。。
 */

#define DEBUG

void PrintLog(char *log)
{
#ifdef DEBUG
    printf(log);
#endif
}

// ## 代表可以不传
#define PRINTLNF(format, ...) printf(format"\n",##__VA_ARGS__)

// # 代表参数名称
#define PRINT_VALUE(value) PRINTLNF(#value":%d",value)

// 获取元信息
#define LINE_INFO() PRINTLNF("%s -> %s -> %d",__FILE__,__FUNCTION__,__LINE__)

void PrintlnF(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    printf("\n");
    va_end(args);
}

int main()
{
    PrintLog("hello");

    PrintlnF("hello!%d", 2);
    PRINTLNF("hello!%d", 2);
    PRINTLNF("hello!");

    int age = 24;
    PRINT_VALUE(age);

    LINE_INFO();
    return 0;
}