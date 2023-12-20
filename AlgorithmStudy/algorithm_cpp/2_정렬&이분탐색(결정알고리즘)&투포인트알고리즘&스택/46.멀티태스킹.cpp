#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int i, n, k, time, pos = 0;
    scanf("%d", &n);
    vector<int> w(n + 1);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w[i]);
    }
    scanf("%d", &k);
    time = k;
    while (time)
    {
        pos++; // pos, 인덱스는 계속 이동해야 한다.
        if (pos > n)
        {
            pos = 0;
        }
        if (w[pos] != 0)
        {
            time--;
            w[pos] = w[pos] - 1;
        }
    }

    for (i = 1; i <= n; i++)
    {
        if (w[i] != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
