#include <stdio.h>

int a[101];

int main()
{
    int n, i, s = 0, m;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            printf("%d ", a[i]);
            continue;
        }
        if (a[i] > m && a[i - 1] < m)
        {
            printf("%d ", m);
        }
        printf("%d ", a[i]);
    }

    return 0;
}
