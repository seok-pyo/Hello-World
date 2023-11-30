#include <stdio.h>

int main()
{
    // 연립방정식 풀이
    // int sum, leg, c, r;
    // scanf("%d %d", &sum, &leg);

    // r = (leg - 2 * sum) / 2;
    // c = sum - r;

    // printf("%d %d\n", r, c);

    // 연립방정식, 반복문 풀이
    int leg, sum, i;

    scanf("%d %d", &sum, &leg);

    for (i = 1; i < sum; i++)
    {
        if ((4 * i) + 2 * (sum - i) == leg)
        {
            printf("%d %d\n", i, sum - i);
            break;
        }
    }

    return 0;
}
