#include <stdio.h>

int main()
{
    int a, i, j;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i != j)
            {
                printf("%d%d", i, j);
                printf("\n");
            }
        }
    }

    return 0;
}
