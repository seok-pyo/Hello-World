#include <stdio.h>

int a[51][51];
int main()
{
    int i, j, cnt = 0, cur, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cur = a[i][j];
            if (cur > a[i][j - 1] &&
                cur > a[i][j + 1] &&
                cur > a[i - 1][j] &&
                cur > a[i + 1][j])
            {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
