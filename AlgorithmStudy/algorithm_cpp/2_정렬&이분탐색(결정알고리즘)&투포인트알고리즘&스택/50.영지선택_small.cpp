#include <stdio.h>

int a[51][51];
int main()
{
    freopen("input.txt", "rt", stdin);
    int h, w, i, j, max = -2147000000, th, tw, sum = 0, k, l;
    scanf("%d %d", &h, &w);
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= w; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &th, &tw);
    for (i = 1; i <= h - th + 1; i++)
    {
        for (j = 1; j <= w - tw + 1; j++)
        {
            for (k = 0; k < th; k++)
            {
                for (l = 0; l < tw; l++)
                {
                    sum += a[i + k][j + l];
                }
            }
            if (sum > max)
                max = sum;
            sum = 0;
        }
    }

    printf("%d\n", max);
    return 0;
}
