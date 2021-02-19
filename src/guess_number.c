//
// Created by lsm on 2021/2/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 猜数字游戏
 * @return
 */
int main()
{
    srand(time(NULL));
    int magic_number = rand() % 100;
    while (1)
    {
        int user_input = 0;

        printf("input number:");
        scanf("%d", &user_input);
        if (user_input > magic_number)
        {
            printf("large!\n");
        } else if (user_input < magic_number)
        {
            printf("small!\n");
        } else
        {
            printf("OK!\n");
            break;
        }
    }
    return 1;
}