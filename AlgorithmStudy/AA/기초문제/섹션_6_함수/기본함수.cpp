#include <stdio.h>

int abs(int x); // 함수가 아래에 있다면 헤더 선언을 해줘야 한다.
int main()
{
    int a;
    a = -3;
    printf("%d\n", abs(a));
    return 0;
}
int abs(int x)
{
    if (x < 0)
        return x * -1;
    else
        return x;
}
