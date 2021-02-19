//
// Created by lsm on 2021/2/19.
//
#include <factorial.h>
#include <stdio.h>

unsigned int Factorial(unsigned int n)
{
    if (n == 1)
    {
        return 1;
    }
    return Factorial(n - 1) * n;
}

int main()
{
    printf("%d \n", Factorial(3));
    return 0;
}
