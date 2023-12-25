#include <stdio.h>
void print(int n)
{
    if (n == 0)
        return;
    else
    {
        print(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n = 3;
    print(3);
    return 0;
}
