#include <stdio.h>
int main()
{
    int a = 20;
    printf("%d\n", a);
    printf("%x\n", &a);
    printf("%d\n", *(&a));
    return 0;
}
