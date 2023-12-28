#include <stdio.h>
int map[30][30], ch[30], n, cnt = 0;
void DFS(int v)
{
    int i;
    if (v == n)
    {
        cnt++;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (map[v][i] == 1 && ch[i] == 0)
            {
                ch[i] = 1;
                DFS(i);
                ch[i] = 0;
            }
        }
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    int m, i, a, b;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%d %d", &a, &b);
        map[a][b] = 1;
    }
    ch[1] = 1;
    DFS(1);
    printf("%d\n", cnt);
    return 0;
}
