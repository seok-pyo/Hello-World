#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    vector<int> res;
    int n, m, i, j, idx, tmp;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    vector<int> b(m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                res.push_back(a[i]);
            }
        }
    }

    for (i = 0; i < res.size() - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < res.size(); j++)
        {
            if (res[j] < res[idx])
            {
                idx = j;
                tmp = res[i];
                res[i] = res[idx];
                res[idx] = tmp;
            }
        }
    }

    for (i = 0; i < res.size(); i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}
