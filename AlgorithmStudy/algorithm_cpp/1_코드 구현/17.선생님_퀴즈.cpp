#include <stdio.h>

int sum(int x)
{
    int i, sum = 0;
    for (i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}
int res[10];
int main()
{
    int n, i, a, b;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (sum(a) == b)
            res[i] = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (res[i] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
