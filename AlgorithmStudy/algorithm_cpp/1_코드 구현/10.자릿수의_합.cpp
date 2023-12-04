#include <stdio.h>

int digit_sum(int x)
{
    int sum = 0, na = 0;
    while (x > 0)
    {
        na = x % 10;
        sum += na;
        x = x / 10;
    }
    return sum;
}
int main()
{
    int n, i, num, max = -2147000000, res, tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        tmp = digit_sum(num);
        if (tmp >= max)
        {
            max = tmp;
            res = num;
            if (num > res)
                res = num;
        }
    }

    printf("%d\n", res);

    return 0;
}
