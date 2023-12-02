#include <stdio.h>
#include <math.h>

int st[2][7];
int main()
{
    int n, k, i, j, s, y, tmp = 0;
    double sum = 0;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s, &y);
        st[s][y] += 1;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            tmp += st[i][j];
        }
    }
    sum += ceil(tmp / (double)k);

    for (i = 0; i < 2; i++)
    {
        for (j = 3; j <= 6; j += 2)
        {
            tmp = st[i][j];
            tmp += st[i][j + 1];
            sum += ceil(tmp / (double)k);
        }
    }

    printf("%d\n", (int)sum);
    return 0;
}
