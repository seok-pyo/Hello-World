#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // if (a > b)
    //     printf("%d\n", b);
    // else
    //     printf("%d\n", a);
    // min = (a < b) ? a : b;
    printf("%d\n", (a < b) ? a : b);
    return 0;
}
