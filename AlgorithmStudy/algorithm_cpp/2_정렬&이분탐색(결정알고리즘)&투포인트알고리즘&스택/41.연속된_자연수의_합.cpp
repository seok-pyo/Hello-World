#include <stdio.h>

int main()
{
    int n, i, j, k, sum = 0, p = 0;
    int res[500] = {0};

    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    {
        sum += i;
        res[p++] = i;
        for (j = i + 1; j <= n / 2 + 1; j++)
        {
            if (sum == n)
            {
                res[p++] = '=';
                res[p++] = sum;
                break;
            }
            res[p++] = '+';
            sum += j;
            res[p++] = j;
        }

        if (sum == n)
        {
            for (k = 0; k < p; k++)
            {
                if (res[k] == '+')
                {
                    printf("+ ");
                }
                else if (res[k] == '=')
                {
                    printf("= ");
                }
                else
                {
                    printf("%d ", res[k]);
                }
            }
        }
        }

    return 0;
}
