#include <stdio.h>

int main()
{
    int k, i, j, length = 9, a[length], tmp;

    for (i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        tmp = a[0];
        for (j = 0; j < length - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[length - 1] = tmp;
    }

    for (i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
