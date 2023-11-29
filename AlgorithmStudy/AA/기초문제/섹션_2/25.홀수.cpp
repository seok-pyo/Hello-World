#include <stdio.h>

int main()
{
    int a, sum = 0, i, min = 2147000000;
    for (i = 1; i <= 7; i++)
    {
        scanf("%d", &a);
        if (a % 2 != 0)
        {
            sum += a;
            min = a < min ? a : min;
        }
    }
    printf("%d\n%d\n", sum, min);
    return 0;
}
