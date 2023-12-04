#include <stdio.h>

int main()
{
    int n, digit = 1, res = 0, sum = 0, cnt = 9;
    scanf("%d", &n);

    while (sum < n)
    {
        res += digit * cnt;
        sum += cnt;
        cnt *= 10;
        digit += 1;
        if (cnt + sum > n)
            break;
    }

    if (n < 10)
        printf("%d\n", n);
    else
    {
        res = res + ((n - sum) * digit);
        printf("%d\n", res);
    }

    return 0;
}
