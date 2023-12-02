#include <stdio.h>

void prntStar(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    prntStar(a);
    return 0;
}
