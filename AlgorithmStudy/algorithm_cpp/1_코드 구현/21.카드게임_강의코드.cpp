#include <stdio.h>

int main()
{
    int lw = 0, a[10], b[10], i, ap = 0, bp = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] == b[i])
        {
            ap += 1;
            bp += 1;
        }
        else if (a[i] > b[i])
        {
            ap += 3;
            lw = 1;
        }
        else
        {
            bp += 3;
            lw = 2;
        }
    }
    printf("%d %d\n", ap, bp);

    if (ap == bp)
    {
        if (lw == 0)
        {
            printf("d\n");
        }
        else if (lw == 1)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    else if (ap > bp)
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }
    return 0;
}
