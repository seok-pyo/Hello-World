#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int i, j, n, res;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        res = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] < a[j])
                res += 1;
        }
        printf("%d ", res + 1);
    }

    return 0;
}
