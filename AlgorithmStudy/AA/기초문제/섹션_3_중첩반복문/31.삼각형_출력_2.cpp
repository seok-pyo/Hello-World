#include <stdio.h>

int main()
{
    int a, i, k, j;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        // for (k = a - i; k >= 1; k--)
        for (k = i; k < a; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
