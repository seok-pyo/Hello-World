#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //         printf("%d ", i);
    // }

    // if문을 사용하지 않는다면
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}
