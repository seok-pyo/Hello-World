#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, i, j, cnt = 0, res = 2147000000, idx, tmp;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[idx] < a[j])
            {
                idx = j;
            }
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;

        if (a[i] < res)
        {
            res = a[i];
            cnt += 1;
        }
        if (cnt == 3)
        {
            printf("%d\n", res);
            break;
        }
    }

    return 0;
}
