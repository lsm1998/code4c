//
// Created by lsm on 2021/2/21.
//
#include <stdio.h>
#include <tinycthread.h>
#include <unistd.h>

void SayHello(char *name)
{
    printf("hello %s \n", name);
}

int main()
{
    thrd_t new_thread;
    int result = thrd_create(&new_thread, (thrd_start_t) SayHello, "C lang");
    if (result == thrd_success)
    {
        printf("thrd_create success!\n");
        printf("new thread id=%#x,create thread id=%#x\n", new_thread, thrd_current);
        sleep(1);
        //thrd_sleep(&(struct timespec) {.tv_sec=0, .tv_nsec=100000000}, NULL);
        int res;
        thrd_join(new_thread, &res);
    } else
    {
        printf("thrd_create error!\n");
    }
    return 0;
}