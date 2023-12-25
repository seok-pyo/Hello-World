#include <stdio.h>
int n, ch[11];
void D(int L)
{
    int i;
    if (L == n + 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (ch[i] == 1)
            {
                printf("%d ", i);
            }
        }
        puts("");
    }
    else
    {
        ch[L] = 1;
        D(L + 1);
        ch[L] = 0;
        D(L + 1);
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    scanf("%d", &n);
    D(1);
    return 0;
}
