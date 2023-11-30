#include <stdio.h>

int main()
{
    int remain = 0, a, b, n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        remain += b % a;
    }
    printf("%d\n", remain);
    return 0;
}
