#include <stdio.h>

int main()
{
    int n, i, sum = 1;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (i == 1)
            printf("%d", i);

        if (n % i == 0 && i != 1)
        {
            printf(" + %d", i);
            sum += i;
        }
    }
    printf(" = %d\n", sum);
    return 0;
}
