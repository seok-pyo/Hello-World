#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);
    int i, n, m, p1 = 0, p2 = 0, p3 = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m], c[n + m];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    while (p1 < n && p2 < m)
    {
        if (a[p1] < b[p2])
            c[p3++] = a[p1++];
        else
            c[p3++] = b[p2++];
    }
    while (p1 < n)
    {
        c[p3++] = a[p1++];
    }
    while (p2 < m)
    {
        c[p3++] = b[p2++];
    }
    for (i = 0; i < p3; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
