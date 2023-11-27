#include <stdio.h>

int main()
{
    int a, result, remainder;

    scanf("%d", &a);

    result = a / 12;

    remainder = a % 12;

    if (remainder > 0)
        result = result + 1;

    printf("%d\n", result);
    return 0;
}
