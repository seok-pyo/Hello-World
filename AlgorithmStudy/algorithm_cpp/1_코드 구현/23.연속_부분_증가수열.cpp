#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int n, i, tmp = -2147000000, cnt = 0, res = 0;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (tmp <= a[i])
        {
            cnt += 1;
            res = res < cnt ? cnt : res;
        }
        else
        {
            cnt = 0;
        }
        tmp = a[i];
    }

    // printf("%d\n", res + 1);
    printf("%d\n", cnt);
    return 0;
}
