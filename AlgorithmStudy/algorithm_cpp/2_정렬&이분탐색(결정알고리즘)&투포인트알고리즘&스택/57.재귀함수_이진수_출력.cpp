#include <stdio.h>
void D(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        D(x / 2);
        printf("%d", x % 2);
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
