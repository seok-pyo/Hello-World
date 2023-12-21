#include <stdio.h>
#include <vector>
// int a[51][51]; > 주위에 0으로 둘러야 하므로 양쪽을 계산해서 52개의 공간이 필요하다.
using namespace std;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
    freopen("input.txt", "rt", stdin);
    int i, j, k, cnt = 0, cur, n, flag;
    scanf("%d", &n);
    vector<vector<int> // vector로 2중 배열 생성하기

           >
        a(n + 2, vector<int>(n + 2, 0));
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         cur = a[i][j];
    //         if (cur > a[i][j - 1] &&
    //             cur > a[i][j + 1] &&
    //             cur > a[i - 1][j] &&
    //             cur > a[i + 1][j])
    //         {
    //             cnt++;
    //         }
    //     }
    // }
    for (i = 1; i <= n; i++) // flag와 dy, dy 배열로 k 반복문 활용하기
    {
        for (j = 1; j <= n; j++)
        {
            flag = 0;
            for (k = 0; k < 4; k++)
            {
                if (a[i + dx[k]][j + dy[k]] >= a[i][j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
