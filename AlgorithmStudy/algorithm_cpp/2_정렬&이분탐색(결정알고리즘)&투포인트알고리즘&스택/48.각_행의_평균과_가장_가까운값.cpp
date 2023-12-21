#include <stdio.h>
#include <algorithm>

using namespace std;
int total[10][10];
int main()
{
    freopen("input.txt", "rt", stdin);
    int i, j, sum, min, res, tmp, ave;
    for (i = 0; i < 9; i++)
    {
        sum = 0;
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &total[i][j]);
            sum += total[i][j];
        }
        ave = (sum / 9.0) + 0.5;
        printf("%d ", ave);

        min = 2147000000;
        for (j = 0; j < 9; j++)
        {
            tmp = abs(ave - total[i][j]);
            if (tmp < min)
            {
                min = tmp;
                res = total[i][j];
            }
            else if (tmp == min)
            {
                if (res < total[i][j])
                {
                    res = total[i][j];
                }
            }
        }
        printf("%d\n", res);
    }

    return 0;
}
