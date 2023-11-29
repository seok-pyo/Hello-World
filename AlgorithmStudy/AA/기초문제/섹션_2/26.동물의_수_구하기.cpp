#include <stdio.h>

int main()
{
    int sum, leg, c, r;
    scanf("%d %d", &sum, &leg);

    r = (leg - 2 * sum) / 2;
    c = sum - r;

    printf("%d %d\n", r, c);
    return 0;
}
