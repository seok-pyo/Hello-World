#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int i, j, n, minIndex, tmp;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            printf("%d\n", j);
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        tmp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = tmp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
