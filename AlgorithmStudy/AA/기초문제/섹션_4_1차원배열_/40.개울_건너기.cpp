#include <stdio.h>

// 경우의 수, 수학적 직관
int arr[30];

int main()
{
    int n, i;
    scanf("%d", &n);
    arr[0] = 1;
    arr[1] = 2;

    for (i = 2; i <= n + 1; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }

    printf("%d\n", arr[n]);
    return 0;
}
