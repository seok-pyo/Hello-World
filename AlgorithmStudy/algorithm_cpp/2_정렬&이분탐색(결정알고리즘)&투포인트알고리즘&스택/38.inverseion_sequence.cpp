#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int n, i, j, tmp;
    int a[101];
    int b[101];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        b[i] = i;
    }

    for (i = 1; i <= a[i]; i++)
    {
        j = i + 1;
        while (j <= a[i])
        {
            if (b[j - 1] < b[j])
            {
                tmp = b[j - 1];
                b[j - 1] = b[j];
                b[j] = tmp;
                j += 1;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
