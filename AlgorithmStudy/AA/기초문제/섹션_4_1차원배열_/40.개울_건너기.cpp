#include <stdio.h>

int arr[30];

int main()
{
    int n, i;
    scanf("%d", &n);
    arr[0] = 1;
    arr[1] = 1;

    for (i = 2; i <= n + 1; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }

    printf("%d\n", arr[n + 1]);
    return 0;
}
