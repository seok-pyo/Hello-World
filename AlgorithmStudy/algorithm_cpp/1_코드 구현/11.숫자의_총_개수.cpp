#include <stdio.h>

int count(int x)
{
    int cnt = 1;

    while (x > 0)
    {
        if (x < 10)
            break;
        x = x / 10;
        cnt += 1;
    }
    return cnt;
}

int main()
{
    int n, i, res = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        res += count(i);
    }
    printf("%d\n", res);
    return 0;
}
