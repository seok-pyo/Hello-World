#include <stdio.h>

int main()
{
    int n, i, j, cnt = 0, flag;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        flag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
