#include <stdio.h>

int main()
{
    int n, res = 0, digit = 1, cnt = 9, sum = 0;
    scanf("%d", &n);
    while (sum + cnt < n)
    {
        res = res + (digit * cnt);
        sum = sum + cnt;
        digit += 1;
        cnt *= 10;
    }

    res = res + ((n - res) * digit);

    printf("%d\n", res);
    return 0;
}
