#include <stdio.h>
int a[1501];
int main()
{
    freopen("input.txt", "rt", stdin);
    int i, p2, p3, p5, n, min = 2147000000;
    scanf("%d", &n);
    p2 = p3 = p5 = 1;
    a[1] = 1;
    for (i = 2; i <= n; i++)
    {
        if (a[p2] * 2 < a[p3] * 3)
            min = a[p2] * 2;
        else
            min = a[p3] * 3;
        if (min > a[p5] * 5)
            min = a[p5] * 5;
        a[i] = min;
        if (min == a[p2] * 2)
            p2++;
        if (min == a[p3] * 3)
            p3++;
        if (min == a[p5] * 5)
            p5++;
    }
    printf("%d\n", a[n]);
    return 0;
}
