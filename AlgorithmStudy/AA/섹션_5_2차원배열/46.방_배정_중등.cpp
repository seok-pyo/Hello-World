#include <stdio.h>

int arr[3][3];
int main()
{
    int n, k, i, j, y, s, cnt = 0, low = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s, &y);
        if (y < 3)
            low += 1;
        if (y == 3 || y == 4)
            arr[0][s] += 1;
        if (y == 5 || y == 6)
            arr[1][s] += 1;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (arr[i][j] == 0)
                continue;
            if (arr[i][j] > k)
            {
                if (arr[i][j] % k == 0)
                    cnt += arr[i][j] / k;
                else
                    cnt += arr[i][j] / k + 1;
                continue;
            }
            cnt++;
        }
    }

    cnt += low / k;

    printf("%d\n", cnt);
    return 0;
}
