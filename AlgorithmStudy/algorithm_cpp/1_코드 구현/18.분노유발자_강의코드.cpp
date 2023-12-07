#include <stdio.h>

int main()
{
    int n, i, a[100], h, max, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h);
        a[i] = h;
    }

    max = a[n - 1];
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
            cnt += 1;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
