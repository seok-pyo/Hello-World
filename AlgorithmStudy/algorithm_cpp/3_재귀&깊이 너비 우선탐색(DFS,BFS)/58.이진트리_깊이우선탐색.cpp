#include <stdio.h>
void D(int x)
{
    if (x > 7)
    {
        return;
    }
    else
    {
        D(x * 2);
        D(x * 2 + 1);
        printf("%d ", x);
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    scanf("%d", &n);
    D(n);
    return 0;
}
