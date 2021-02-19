#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        printf("Hello, World! %d\n", i);
    }
    printf("%d \n", sizeof(int *));

    wchar_t word = L'中';

    printf("%d \n", word);

    int a = 1111;
    char b = (char) a;

    printf("%d \n", b);
    return 0;
}
