#include <stdio.h>

int Prime(int a)
{
    int i, cnt = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            cnt += 1;
    }

    return cnt;
}

int main()
{
    int n, i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", Prime(i));
    }

    return 0;
}
