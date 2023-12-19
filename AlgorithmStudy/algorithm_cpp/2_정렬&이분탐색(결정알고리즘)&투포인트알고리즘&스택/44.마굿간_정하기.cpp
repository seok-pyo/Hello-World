#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, c, lt, i, rt, mid, cnt = 3, res;
    scanf("%d %d", &n, &c);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    lt = 0;
    rt = n - 1;
    sort(a.begin(), a.end());

    while (cnt <= c)
    {
        mid = (lt + rt) / 2;

        if (a[mid] - a[lt] > a[rt] - a[mid])
        {
            res = a[rt] - a[mid];
            lt = mid;
            cnt++;
        }
        else
        {
            res = a[mid] - a[lt];
            rt = mid;
            cnt++;
        }
    }

    printf("%d ", res);
    return 0;
}
