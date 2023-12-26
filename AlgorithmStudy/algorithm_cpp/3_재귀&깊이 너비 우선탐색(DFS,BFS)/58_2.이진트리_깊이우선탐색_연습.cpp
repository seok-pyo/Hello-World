#include <stdio.h>
void D(int x)
{
    if (x <= 7)
    {
        D(2 * x);
        D(2 * x + 1);
        printf("%d ", x);
    }
}
int main()
{
    D(1);
    return 0;
}
