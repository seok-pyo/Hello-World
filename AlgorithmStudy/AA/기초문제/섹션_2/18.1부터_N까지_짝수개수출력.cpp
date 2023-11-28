#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    while (n)
    {
        if (n % 2 == 0)
            count += 1;
        n -= 1;
    }
    printf("%d ", count);

    return 0;
}
