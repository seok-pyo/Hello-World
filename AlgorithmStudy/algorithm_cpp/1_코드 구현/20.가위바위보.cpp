#include <stdio.h>

int main()
{
    int n, i, sub;
    int a[100], b[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        sub = a[i] - b[i];
        if (sub == 0)
        {
            printf("D\n");
        }
        if (sub < 0)
        {
            sub = b[i] - a[i];
            if (sub == 1)
                printf("B\n");
            if (sub == 2)
                printf("A\n");
        }
        else
        {
            if (sub == 1)
                printf("A\n");
            if (sub == 2)
                printf("B\n");
        }
    }
    return 0;
}
