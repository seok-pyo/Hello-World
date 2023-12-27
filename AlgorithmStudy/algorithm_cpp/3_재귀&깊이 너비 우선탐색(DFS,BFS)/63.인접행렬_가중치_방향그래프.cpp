#include <stdio.h>
int a[21][21];
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, m, i, j, n1, n2, v;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &n1, &n2, &v);
        a[n1][n2] = v;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    return 0;
}
