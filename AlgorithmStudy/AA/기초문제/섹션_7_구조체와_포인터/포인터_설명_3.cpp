#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *pa;
    pa = &a;
    printf("%d\n", *pa);
    *pa = b;
    printf("%d\n", *pa);
    *pa = *pa + 1;
    printf("%d\n", *pa);
    return 0;
}
