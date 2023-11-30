#include <stdio.h>

int main()
{
    int a, i, j, cnt = 0, limit, one;
    scanf("%d", &a);

    limit = (int)a / 10;
    one = a % 10;

    for (i = 2; i <= limit; i++)
    {
        for (j = 1; j <= limit - 1; j++)
        {
            if (i == limit && j <= one)
            {
                cnt += 1;
                printf("%d%d\n", i, j);
            }
            if (i != limit && i > j)
            {
                cnt += 1;
                printf("%d%d\n", i, j);
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}
