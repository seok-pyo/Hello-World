#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int n, k, pos = 0, cnt = 0, bp = 0, i;
    scanf("%d %d", &n, &k);
    vector<int> prince(n + 1);
    while (1)
    {
        pos++;
        if (pos > n)
        {
            pos = 1;
        }
        if (prince[pos] == 0)
        {
            cnt++;
            if (cnt == k)
            {
                prince[pos] = 1;
                bp++;
                cnt = 0;
            }
        }
        if (bp == n - 1)
        {
            break;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (prince[i] == 0)
        {
            printf("%d ", i);
            break;
        }
    }
    return 0;
}
