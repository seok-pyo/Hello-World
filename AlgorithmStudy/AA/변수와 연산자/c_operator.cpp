#include <stdio.h>

int main()
{
    int a, b, k, m;
    a = 3;
    b = 2;
    k = a--; // k는 3이 된다. 이 라인이 실행되면 a는 2가 된다
    m = ++b;
    printf("%d %d\n", k, m);
    return 0;
}
