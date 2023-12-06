#include <stdio.h>

int main()
{
    int n, l, cnt = 0, i, tmp, res = 0;
    scanf("%d %d", &n, &l);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);

        if (tmp > l)
        {
            cnt += 1;
        }
        else
        {
            res = res > cnt ? res : cnt;
            cnt = 0;
        }
    }
    printf("%d\n", res);
    return 0;
}
