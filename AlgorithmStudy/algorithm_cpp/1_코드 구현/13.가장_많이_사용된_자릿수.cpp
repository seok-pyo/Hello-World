#include <stdio.h>

int a[11];
int main()
{
    int n, moc, na, res, i, tmp = -2147000000;
    scanf("%d", &n);

    moc = n;
    while (moc > 0)
    {
        na = moc % 10;
        moc = moc / 10;
        a[na] += 1;
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] >= tmp)
        {
            tmp = a[i];
            res = i;
        }
    }

    printf("%d\n", res);

    return 0;
}
