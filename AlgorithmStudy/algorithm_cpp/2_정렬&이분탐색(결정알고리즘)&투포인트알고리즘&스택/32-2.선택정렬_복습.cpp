#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int n, i, j, tmp, idx;
    scanf("%d", &n);
    int a[101];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[idx] > a[j])
            {
                idx = j;
            }
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
