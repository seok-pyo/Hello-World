#include <stdio.h>
#include <math.h>

int st[2][7];
int main()
{
    int n, k, i, j, s, y;
    double sum = 0;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &s, &y);
        st[s][y] += 1;
    }

    for (i = 0; i <= 1; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            sum = sum + ceil(st[i][j] / (double)k);
        }
    }

    printf("%d\n", (int)sum);
    return 0;
}
