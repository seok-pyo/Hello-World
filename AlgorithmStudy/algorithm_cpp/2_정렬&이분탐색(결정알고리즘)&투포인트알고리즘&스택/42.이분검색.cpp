#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, s, e, i, res, tmp;
    scanf("%d %d", &n, &m);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a.begin(), a.end());

    s = 0;
    e = n - 1;
    while (s <= e)
    {
        tmp = (s + e) / 2;
        if (a[tmp] == m)
        {
            printf("%d ", tmp + 1);
            return 0;
        }
        else if (a[tmp] > m)
        {
            e = tmp - 1;
        }
        else
        {
            s = tmp + 1;
        }
    }
    return 0;
}
