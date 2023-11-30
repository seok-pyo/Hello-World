#include <stdio.h>

int main()
{
    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }
    // return 0;를 쓰지 않은 이유?

    // int i = 1;
    // while (1)
    // {
    //     printf("%d\n", i);
    //     i++;
    //     if (i == 5)
    //         break;
    // }

    // int i = 0, sum = 0;
    // while (1)
    // {
    //     i++;
    //     sum = sum + i;
    //     if (i == 5)
    //         break;
    // }
    // printf("%d\n", sum);

    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
            continue;
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
