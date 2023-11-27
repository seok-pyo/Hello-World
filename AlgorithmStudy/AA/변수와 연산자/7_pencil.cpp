#include <stdio.h>
#include <math.h>

int main()
{
    // int a, result, remainder;

    // scanf("%d", &a);

    // result = a / 12;

    // remainder = a % 12;

    // if (remainder > 0)
    //     result = result + 1;

    // printf("%d\n", result);

    // 나머지가 있는 경우는 1다스가 더 필요한 경우
    int n;
    double res;
    scanf("%d", &n);
    res = n / 12.0;
    res = ceil(res);

    printf("%d\n", (int)res);
    return 0;
}
