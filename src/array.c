//
// Created by lsm on 2021/2/19.
//
#include <stdio.h>

/**
 * 全局数组值是默认为空
 * 局部变量数组值在gcc环境默认不处理
 */

#define ARRAY_LEN 5

int global_array[ARRAY_LEN];

void PrintArray(int array[])
{
    for (int i = 0; i < ARRAY_LEN; ++i)
    {
        printf("%d \n", array[i]);
    }
}

int main()
{
    PrintArray(global_array);

    int array1[ARRAY_LEN];
    int array2[ARRAY_LEN] = {1, 2, 3};

    PrintArray(array1);
    PrintArray(array2);
    return 0;
}