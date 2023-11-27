#include <stdio.h>
#include <math.h>

int main()
{
    double a, result;

    scanf("%lf", &a);

    // scanf("%lf", &a);
    printf("%f\n", round(a * 10) / 10);

    return 0;
}
