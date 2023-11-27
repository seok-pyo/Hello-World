#include <stdio.h>

int main()

{
    float a;
    printf("input float number? ");
    scanf("%f", &a);
    printf("input value=%0.2f\n", a);
    // %0.2f 는 실수를 출력할 때 소수점 3째자리에서 반올림하여 둘째 자리까지만 출력한다.
    return 0;
}
