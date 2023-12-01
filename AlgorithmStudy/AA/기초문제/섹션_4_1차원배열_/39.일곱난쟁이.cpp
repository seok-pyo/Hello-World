#include <stdio.h>

int arr[9];
int main()
{
    int i, j, sum = 0, a, b;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (i = 0; i < 9; i++) // 8까지만 돌면 된다.
    {
        for (j = i + 1; j < 9; j++)
        {
            if (sum - (arr[i] + arr[j]) == 100)
            {
                a = arr[i];
                b = arr[j];
                break;
            }
        }
        if (arr[i] + arr[j] == 100)
            break; // break 추가
    }

    for (i = 0; i < 9; i++)
    {
        if (arr[i] == a || arr[i] == b)
            continue;
        printf("%d ", arr[i]);
    }

    return 0;
}
