#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a == 0)
        printf("%s\n", "zero");
    if (a % 2 == 0 && a != 0)
        printf("%s\n", "even");
    if (a % 2 != 0)
        printf("%s\n", "odd");

    return 0;
}
