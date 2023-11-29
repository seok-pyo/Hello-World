#include <stdio.h>

int main()
{
    int day, a, i, count = 0;
    scanf("%d", &day);
    for (i = 1; i <= 7; i++)
    {
        scanf("%d", &a);
        if (a % 10 == day)
            count += 1;
    }
    printf("%d\n", count);
    return 0;
}
