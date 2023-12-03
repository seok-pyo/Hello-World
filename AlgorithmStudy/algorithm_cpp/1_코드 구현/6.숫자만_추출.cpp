#include <stdio.h>

int main()
{
    char a[51];
    int i, n = 0, cnt = 0;
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] < 60)
        {
            n = n * 10 + (a[i] - 48);
        }
    }
    printf("%d\n", n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            cnt += 1;
    }

    printf("%d\n", cnt);

    return 0;
}
