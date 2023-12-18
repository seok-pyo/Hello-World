#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, s, e, i, res, tmp;
    scanf("%d %d", &n, &m);
    vector<int> a(n + 1);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a.begin(), a.end());

    s = 1;
    e = n;
    tmp = s + e / 2;
    while (m != a[tmp])
    {
        tmp = s + e / 2;
        if (a[tmp] > m)
        {
            e = tmp - 1;
        }
        else if (a[tmp] < m)
        {
            s = tmp + 1;
        }
    }
    printf("%d ", tmp);
    return 0;
}
