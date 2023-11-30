#include <stdio.h>

int main()
{
    // 유클리드 호제법
    // int a, b, remain;
    // scanf("%d %d", &a, &b);

    // if (a < b)
    // {
    //     remain = b % a;
    // }

    // while (remain)
    // {
    //     b = a;
    //     a = remain;
    //     remain = b % a;
    // }

    // if (remain == 0)
    // {
    //     printf("%d\n", a);
    // }

    int a, b, min, i = 1;
    scanf("%d %d", &a, &b);

    min = a < b ? a : b;

    for (i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            printf("%d\n", i);
        break;
    }

    return 0;
}
