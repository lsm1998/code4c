//
// Created by lsm on 2021/2/19.
//
#include <stdio.h>

#define AGE 23

int main()
{
    const int age = 23;

    // 使用指针修改const
    int *point = &age;
    *point = 20;

    printf("age=%d\n", age);

    // 宏才是真正意义的常量
    printf("AGE=%d\n", AGE);
    return 0;
}