#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int n, i, j, tmp;
    int a[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = n; i >= 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
