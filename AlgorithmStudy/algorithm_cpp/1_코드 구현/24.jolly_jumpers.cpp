#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int i, n, tmp;
    scanf("%d", &n);
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        tmp = a[i + 1] - a[i];
        if (tmp > 0)
        {
            b[i] = tmp;
        }
        else if (tmp < 0)
        {
            tmp = tmp * -1;
            b[i] = tmp;
        }
    }
    for (i = 1; i < n; i++)
    {
        c[b[i]] = b[i];
    }
    for (i = 1; i < n; i++)
    {
        if (c[i] == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
