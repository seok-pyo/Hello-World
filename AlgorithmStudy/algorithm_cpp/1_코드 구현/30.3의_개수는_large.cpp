#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n, i, lt = 1, rt, k = 1, res = 0, cur;
    scanf("%d", &n);
    while (lt != 0)
    {
        lt = n / (k * 10);
        rt = n % k;
        cur = (n / k) % 10;
        if (cur > 3)
        {
            res += (lt + 1) * k;
        }
        else if (cur < 3)
        {
            res += lt * k;
        }
        else
        {
            res += lt * k + rt + 1;
        }
        k *= 10;
    }

    printf("%d\n", res);
    return 0;
}
