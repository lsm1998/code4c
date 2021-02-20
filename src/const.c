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

    // 只读指针
    int *const cp = &age;
    *cp = 100;
    // 编译错误，只能修改指针的值
    // cp = point;

    int const *cp2 = &age;
    // 编译错误，只能修改指针的地址
    // *cp2 = 101
    cp2 = cp;

    // 只读变量指针
    int const *const ccp = &age;
    // 编译错误，地址和值都不允许修改
    // *ccp = 102;
    // ccp = point;
    return 0;
}