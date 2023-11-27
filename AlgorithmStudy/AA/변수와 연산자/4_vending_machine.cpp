#include <stdio.h>

int main()
{
    // int money, price, remainder, one, five;
    // scanf("%d %d", &money, &price);
    // remainder = money - price;

    // int five_share, one_share, five_remain;

    // five_share = remainder / 500;
    // five_remain = remainder % 500;

    // one_share = five_remain / 100;

    // printf("%d\n%d\n%d\n", remainder, five_share, one_share);

    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("%d\n", c);
    printf("%d\n", c / 500);
    c = c % 500;
    printf("%d\n", c / 100);
    return 0;
}
