#include <stdio.h>

int main()
{
    int a = 0, b = 0, i, flag = 0;
    char w;
    int aa[10], ba[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &aa[i]);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ba[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (aa[i] == ba[i])
        {
            a += 1;
            b += 1;
            continue;
        }

        if (aa[i] > ba[i])
            a += 3;
        else
            b += 3;
    }

    printf("%d %d\n", a, b);

    if (a == b)
    {
        for (i = 0; i < 10; i++)
        {
            if (aa[i] == ba[i])
                continue;
            if (aa[i] > ba[i])
            {
                w = 'A';
                flag = 1;
            }
            else
            {
                w = 'B';
                flag = 1;
            }
        }
        if (flag == 1)
            printf("%c\n", w);
        if (flag == 0)
            printf("D\n");
    }
    else if (a > b)
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }

    return 0;
}
