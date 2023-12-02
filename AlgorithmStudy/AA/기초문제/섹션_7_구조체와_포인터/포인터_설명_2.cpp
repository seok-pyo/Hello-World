#include <stdio.h>
int main()
{
    int a = 20;
    int *pa;
    pa = &a;
    printf("%x\n", &a);
    printf("%x\n", pa);
    printf("%d\n", *pa);
    return 0;
}
