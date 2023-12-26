#include <stdio.h>
#include <vector>
using namespace std;
int n, a[11], total = 0;
bool check = false;
void DFS(int L, int sum)
{
    if (sum > total / 2)
    {
        return;
    }
    if (check)
    {
        return;
    }
    if (L == n + 1)
    {
        if (sum == (total - sum))
        {
            check = true;
            return;
        }
    }
    else
    {
        DFS(L + 1, sum + a[L]);
        DFS(L + 1, sum);
    }
}

int main()
{
    freopen("input.txt", "rt", stdin);
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        total += a[i];
    }
    DFS(1, 0);
    if (check)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
