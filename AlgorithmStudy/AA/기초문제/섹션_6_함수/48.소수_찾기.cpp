#include <stdio.h>

bool isPrime(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }

    return 0;
}

bool isPrime(int n)
{
    int i;
    bool result = true;
    if (n == 1)
        result = false;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            result = false;
        }
    }
    return result;
}
