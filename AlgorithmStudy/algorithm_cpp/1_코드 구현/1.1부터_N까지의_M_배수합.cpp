#include <stdio.h>

int main()
{
    int n, m, i, sum = 0;
    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
    {
        if (i % m == 0)
            sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
