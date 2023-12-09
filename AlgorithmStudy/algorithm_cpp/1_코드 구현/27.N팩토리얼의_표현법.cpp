#include <stdio.h>
#include <vector>
#include <algorithm>

long long fac(int x)
{
    if (x <= 1)
        return 1;
    else
        return x * fac(x - 1);
}

long long res[50000];

int main()
{
    int n, p = 2, idx = 0, i;
    scanf("%d", &n);
    long long f = fac(n);
    while (f > 1)
    {
        while (f % p != 0)
        {
            if (p == 2)
            {
                p += 1;
                idx += 1;
            }
            else
            {
                p += 2;
                idx += 1;
            }
        }
        f = f / p;
        res[idx] += 1;
    }
    for (i = 0; i <= idx; i++)
    {
        printf("%lld ", res[i]);
    }
    return 0;
}
