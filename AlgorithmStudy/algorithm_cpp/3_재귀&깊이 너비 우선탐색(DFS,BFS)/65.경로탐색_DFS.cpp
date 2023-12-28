#include <stdio.h>
int map[21][21];
int cnt = 0;
int n, m;
void DFS(int s, int e)
{
    if (map[s][e] == 0)
    {
        return;
    }
    else
    {
        if (e == n)
        {
            cnt++;
            return;
        }
        DFS(e, e + 1);
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    int i, j, a, b;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%d %d", &a, &b);
        map[a][b] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            DFS(i, j);
        }
    }
    printf("%d\n", cnt);
    return 0;
}
