#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = a > b ? a : b;
    max = max > c ? max : c;

    if (a + b + c - max > max)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");
    return 0;
}
