#include <stdio.h>

int main()
{
    int a = 3, b = 7, t;
    if (a > 2 || b > 3)
        t = a * b;
    else
        t = a / b;
    printf("%d ", t);
    return 0;
}
