#include <stdio.h>
// #include <math.h>

int main()
{
    // double a, result;

    // scanf("%lf", &a);

    // // scanf("%lf", &a);
    // printf("%f\n", round(a * 10) / 10);

    // 반올림 math 헤더 파일 없이 구현
    double a;
    scanf("%lf", &a);
    a = (int)((a * 10) + 0.5);
    printf("%f\n", a / 10);
    return 0;

    return 0;
}
