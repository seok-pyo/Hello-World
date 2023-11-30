#include <stdio.h>

int main()
{
    // 출력되는 모양은?
    // int i, j;
    // for (i = 1; i <= 3; i++)
    // {
    //     for (j = 1; j <= 3; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 출력되는 모양은?
    // int i, j;
    // for (i = 1; i <= 3; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (k = i; k < 3; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
