#include <stdio.h>

int main()
{
    int a, b, c;
    double result;

    scanf("%d %d %d", &a, &b, &c);

    result = (double)(a + b + c) / 3;
    // result = (float)(a + b + c) / 3.0;
    result = result * 100 + 0.5;
    // result = result / 100; // 이 부분은 불필요
    // result = result * 100;
    result = (int)result;

    printf("%f\n", result / 100);
    return 0;
}
