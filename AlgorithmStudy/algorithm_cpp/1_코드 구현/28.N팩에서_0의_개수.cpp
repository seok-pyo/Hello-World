#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    int n, i, j, tmp, cnt1 = 0, cnt2 = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        tmp = i;
        j = 2;
        while (1)
        {
            if (tmp % j == 0)
            {
                tmp = tmp / j;
                if (j == 2)
                    cnt1 += 1;
                else if (j == 5)
                    cnt2 += 1;
            }
            else
            {
                j += 1;
            }
            if (tmp == 1)
                break;
        }
    }

    if (cnt1 < cnt2)
        printf("%d\n", cnt1);
    else
        printf("%d\n", cnt2);

    return 0;
}
