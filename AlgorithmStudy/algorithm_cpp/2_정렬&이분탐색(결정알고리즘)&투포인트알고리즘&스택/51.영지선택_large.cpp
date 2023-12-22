#include <stdio.h>

int a[701][701], dy[701][701];
int main()
{
    freopen("input.txt", "rt", stdin);
    int i, j, w, h, tw, th, max = -2147000000, sum = 0;
    scanf("%d %d", &h, &w);
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= w; j++)
        {
            scanf("%d", &a[i][j]);
            dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + a[i][j];
        }
    }

    scanf("%d %d", &th, &tw);
    for (i = th; i <= h; i++)
    {
        for (j = tw; j <= w; j++)
        {
            sum = dy[i][j] - dy[i - th][j] - dy[i][j - tw] + dy[i - th][j - tw];
            if (sum >= max)
                max = sum;
        }
    }

    printf("%d\n", max);
    return 0;
}
