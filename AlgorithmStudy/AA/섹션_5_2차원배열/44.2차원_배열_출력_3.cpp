#include <stdio.h>

int arr[11][11];
int main()
{
    int n, i, j, cnt = 1;

    // scanf("%d", &n);

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 0;
    //     }
    // }

    // for (i = 0; i < n; i++)
    // {
    //     arr[i][i] = 2 * i + 1;
    // }

    // for (i = 0; i < n; i++)
    // {
    //     if (arr[i][n - i - 1] != 0)
    //         continue;
    //     arr[i][n - i - 1] = 2 * cnt;
    //     cnt += 1;
    // }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%3d", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                arr[i][j] = cnt;
                cnt += 1;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
