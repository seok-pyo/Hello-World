#include <stdio.h>

int main()
{
    int n, min = 2147000000, max = -2147000000, i, tmp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        min = min > tmp ? tmp : min;
        max = max < tmp ? tmp : max;
    }

    printf("%d\n", max - min);
    return 0;
}
