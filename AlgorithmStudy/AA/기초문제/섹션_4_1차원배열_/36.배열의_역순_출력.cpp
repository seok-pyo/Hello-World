#include <stdio.h>
int a[101];
int main()
{
    int num, i;
    scanf("%d", &num);

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
