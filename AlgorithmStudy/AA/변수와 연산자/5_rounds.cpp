#include <stdio.h>
#include <math.h>

int main()
{
    double a;

    scanf("%lf", &a);
    printf("%0.6f\n", round(a * 10) / 10);
    return 0;
}
