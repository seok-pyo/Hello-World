#include <stdio.h>

int n, m, cnt = 0;
int a[11], path[11];
void DFS(int L, int sum)
{
    if (L == n + 1)
    {
        if (sum == m)
        {
            cnt++;
            for (int i = 1; i < L; i++)
            { // L은 하나 증가한 상태로 넘어옴으로 i는 L까지 진행
                printf("%d ", path[i]);
            }
            puts("");
        }
    }
    else
    {
        path[L] = a[L];
        DFS(L + 1, sum + a[L]);
        path[L] = -a[L];
        DFS(L + 1, sum - a[L]);
        path[L] = 0;
        DFS(L + 1, sum);
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    scanf("%d %d", &n, &m);
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    DFS(1, 0);
    if (cnt == 0)
        printf("-1\n");
    else
        printf("%d\n", cnt);
    return 0;
}
