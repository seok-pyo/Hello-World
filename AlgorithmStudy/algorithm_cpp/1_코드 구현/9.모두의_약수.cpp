#include <stdio.h>

int a[50001];
int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j = j + i)
        {
            a[j] += 1;
        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
