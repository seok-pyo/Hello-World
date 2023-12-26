#include <stdio.h>

int n, m, cnt = 0, check = 0;
int a[11], path[11];
void DFS(int L, int sum)
{
    for (int i = 1; i < L; i++)
    { // L은 하나 증가한 상태로 넘어옴으로 i는 L까지 진행
        printf("%d ", path[i]);
    }
    puts("");
    if (L == n + 1)
    {
        if (sum == m)
        {
            cnt++;
            puts("");
        }
    }
    else
    {
        path[L] = a[L];
        check++;
        DFS(L + 1, sum + a[L]);
        path[L] = -a[L];
        check++;
        DFS(L + 1, sum - a[L]);
        path[L] = 0;
        check++;
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
    printf("%d\n", check);
    return 0;
}
