#include <stdio.h>

int main()
{
    int i, j, n, tmp, a[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        for (j = i; j >= 0; j--)
        {
            if (a[j - 1] > 0)
            {
                tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
