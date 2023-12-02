#include <stdio.h>
int a[11][11];
int main()
{
    int i, j, n, k = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = i; j >= 0; j--)
        {
            a[i][j] = k;
            k += 1;
        }
        // 전역변수로 배열을 잡으면 빈 자리에는 0이 들어간다.
        for (j = i + 1; j < n; j++)
        {
            a[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
