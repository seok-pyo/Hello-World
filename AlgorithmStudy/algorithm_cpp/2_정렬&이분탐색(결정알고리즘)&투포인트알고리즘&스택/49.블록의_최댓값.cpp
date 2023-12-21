#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, i, j, cnt = 0, tmp;
    scanf("%d", &n);
    vector<int> f(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        for (j = 0; j < n; j++)
        {
            if (tmp <= f[j])
            {
                cnt += tmp;
            }
            else
            {
                cnt += f[j];
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
