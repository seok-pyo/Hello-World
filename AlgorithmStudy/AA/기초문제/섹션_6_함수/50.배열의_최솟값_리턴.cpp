#include <stdio.h>

int Min(int tmp[], int size);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", Min(arr, n));
    return 0;
}

int Min(int tmp[], int size)
{
    int min = 2147000000, i;
    for (i = 0; i < size; i++)
    {
        if (tmp[i] < min)
            min = tmp[i];
    }

    return min;
}
