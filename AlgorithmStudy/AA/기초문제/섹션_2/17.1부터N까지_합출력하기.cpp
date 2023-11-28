#include <stdio.h>

int main()
{
    int a, total = 0;
    scanf("%d", &a);

    while (a)
    {
        total += a;
        a--;
    }
    printf("%d ", total);

    return 0;
}
