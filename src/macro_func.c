//
// Created by lsm on 2021/2/19.
//
#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)

#define IS_HEX_CHARACTER(ch) \
((ch)>='0' && (ch)<='9') ||  \
((ch)>='a' && (ch)<='z') ||  \
((ch)>='A' && (ch)<='Z')  \


int main()
{
    // int max = MAX(1, 3);
    printf("%d \n", MAX(1, MAX(4, 5)));

    printf("is ? %d \n", IS_HEX_CHARACTER('*'));
    return 0;
}