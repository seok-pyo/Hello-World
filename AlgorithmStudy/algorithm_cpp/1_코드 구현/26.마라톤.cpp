#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int i, j, n, res;
    scanf("%d", &n);
    vector<int> a(n + 1);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        res = i;
        for (j = 1; j < i; j++)
        {
            if (a[i] > a[j])
                res -= 1;
        }
        printf("%d ", res);
    }
    return 0;
}
