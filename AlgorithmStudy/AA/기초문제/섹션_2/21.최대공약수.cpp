#include <stdio.h>

int main()
{
    int a, b, remain;
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        remain = b % a;
    }

    while (remain)
    {
        b = a;
        a = remain;
        remain = b % a;
    }

    if (remain == 0)
    {
        printf("%d\n", a);
    }

    return 0;
}
