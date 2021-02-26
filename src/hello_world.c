#include <stdio.h>

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)

#elif defined(__linux__)

#else
#include <stddef.h>
#endif

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
