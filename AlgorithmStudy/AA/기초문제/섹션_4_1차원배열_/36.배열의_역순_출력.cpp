#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int a[num];

    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = num - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
