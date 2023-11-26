#include <stdio.h>

int main()
{
    int a, b, c, k;
    a = b = c = 3;
    k = a + 3 * 6 - 6 / c;
    printf("혼합연산의 결과 = %d\n", k);
    return 0;
}
