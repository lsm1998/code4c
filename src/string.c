//
// Created by lsm on 2021/2/19.
//
#include <stdio.h>

int main()
{
    // C字符串会以\0结尾
    char str1[11] = "hello world";

    printf("%s",str1);

    char str2[12] = "hello world";
    printf("%s",str2);
    return 0;
}