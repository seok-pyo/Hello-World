#include <stdio.h>

int main()
{
    int i, j, n, k, sum = -2147000000, tmp;
    scanf("%d %d", &n, &k);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= n - k; i++)
    {
        tmp = 0;
        for (j = i; j < i + k; j++)
        {
            tmp += a[j];
        }
        sum = sum > tmp ? sum : tmp;
    }

    printf("%d\n", sum);
    return 0;
}
