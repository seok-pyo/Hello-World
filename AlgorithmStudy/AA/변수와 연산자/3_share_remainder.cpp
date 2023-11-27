#include <stdio.h>

int main()
{
    int a, b, c, e;

    scanf("%d %d", &a, &b);
    c = a / b;
    e = a % b;
    printf("%d %d\n", c, e);
    return 0;
}
