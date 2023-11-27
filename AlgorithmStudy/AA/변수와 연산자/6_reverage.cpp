#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double result;

    scanf("%d %d %d", &a, &b, &c);

    result = (float)(a + b + c) / 3;

    printf("%f\n", round(result * 100) / 100);
}
