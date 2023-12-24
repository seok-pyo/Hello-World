#include <stdio.h>
int print(int n)
{
    if (n == 0)
        return 0;
    print(n - 1);
    printf("%d ", n);
    return 0;
}

int main()
{
    int n = 3;
    print(3);
    return 0;
}
