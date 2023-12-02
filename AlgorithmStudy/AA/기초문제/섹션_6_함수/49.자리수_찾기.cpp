#include <stdio.h>

int digit(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digit(n));
}

int digit(int n)
{
    int result;
    if (n / 1000 != 0)
        result = 4;
    else if (n / 100 != 0)
        result = 3;
    else if (n / 20 != 0)
        result = 2;
    else
        result = 1;

    return result;
}
