/**
* 作者：刘时明
* 时间：2021/2/22 0022
*/
//
// Created by Administrator on 2021/2/22 0022.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * 指针初始化的一个大坑
 * 指针本身在传值过程中也会被复制，必须使用多级指针
 * @param p
 * @param val
 */
void InitInt(int **p, int val)
{
    *p = malloc(sizeof(int));
    **p = val;
}

int main()
{
    int a = 10;

    int *p = &a;

    printf("%d %d %d \n", p, p + 1, sizeof(int));
    int *array = malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; ++i)
    {
        *(array + i) = i;
    }
    free(array);


    int *t = NULL;
    InitInt(&t, 100);
    printf("%d \n", *t);
    return 0;
}