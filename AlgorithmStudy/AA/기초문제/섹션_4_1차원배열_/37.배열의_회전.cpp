#include <stdio.h>

int main()
{
    int a[9], k, i, index, tmp, tmp2;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    for (i = 0; i < 9; i++)
    {
        index = (9 + i - k) % 9;
        tmp = a[i];
        tmp2 = a[index];
        a[i] = tmp2;
        a[index] = tmp;
    }

    for (i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
