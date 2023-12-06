#include <stdio.h>

int main()
{
    int n, i, j, cnt = 0, tmp, flag;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[i] = tmp;
    }

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
            cnt += 1;
    }

    printf("%d\n", cnt);
    return 0;
}
