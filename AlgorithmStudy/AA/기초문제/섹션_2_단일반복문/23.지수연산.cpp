#include <stdio.h>

int main()
{
    int a, b, i, result = 1;
    scanf("%d %d", &a, &b);

    for (i = 0; i < b; i++)
    {
        result = result * a;
    }
    printf("%d\n", result);
    return 0;
}
