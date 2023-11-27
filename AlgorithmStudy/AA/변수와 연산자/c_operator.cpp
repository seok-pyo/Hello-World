#include <stdio.h>

int main()
{
    // 어떤 정수이건 그 정수를 10으로 나누어 나머지를 구하면
    // 그 정수의 일의 자리 숫자이다.
    int a = 234, b = 46, k, m;
    k = a % 10;
    m = b % 10;
    printf("%d %d\n", k, m);
    return 0;
}
