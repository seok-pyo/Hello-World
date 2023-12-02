#include <stdio.h>

int arr[6][3];
int main()
{
    int n, k, i, j, y, s, cnt = 0;
    scanf("%d %d", &n, &k);

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s, &y);
        arr[y - 1][s] += 1;
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (arr[i][j] == 0)
                continue;
            if (arr[i][j] > k)
                cnt += arr[i][j] / k;
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
