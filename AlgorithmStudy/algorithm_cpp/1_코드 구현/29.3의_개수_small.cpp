#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, n, cnt = 0, tmp, digit;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        tmp = i;
        while (tmp > 0)
        {
            digit = tmp % 10;
            if (digit == 3)
                cnt += 1;
            tmp = tmp / 10;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
