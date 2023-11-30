#include <stdio.h>

int main()
{
    int i, j, k, a, center;
    scanf("%d", &a);
    center = a / 2 + 1;

    for (i = 1; i <= center; i++)
    {
        for (k = 1; k <= center - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("@");
        }
        printf("\n");
    }

    for (i = 1; i <= center - 1; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= center - 1; j++)
        {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
