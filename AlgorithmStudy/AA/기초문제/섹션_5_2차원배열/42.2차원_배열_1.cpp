#include <stdio.h>

int arr[10][10];
int main()
{
    int n, i, j, num = 1;

    scanf("%d", &n);

    for (j = 0; j < n; j++)
    {
        for (i = n - 1; i >= 0; i--)
        {
            arr[i][j] = num;
            num += 1;
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
