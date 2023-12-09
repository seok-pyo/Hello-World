#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, j, tmp, n;
    scanf("%d", &n);
    vector<int> res(n + 1);
    for (i = 2; i <= n; i++)
    {
        tmp = i;
        j = 2;
        while (1)
        {
            if (tmp % j == 0)
            {
                tmp = tmp / j;
                res[j] += 1;
            }
            else
                j += 1;
            if (tmp == 1)
                break;
        }
    }
    for (i = 2; i <= n; i++)
    {
        if (res[i] != 0)
            printf("%d ", res[i]);
    }
    return 0;
}
