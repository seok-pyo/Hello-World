#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int i, n, k, time, pos = 0, tot = 0;
    scanf("%d", &n);
    vector<int> w(n + 1);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w[i]);
        tot += w[i];
    }
    scanf("%d", &k);
    time = k;
    // 전체 작업 시간과 정전시간이 시작하는 시간이 같으면 정전 후
    // 모든 작업 완료이기 때문에 -1 리턴
    if (k >= tot)
    {
        printf("-1\n");
        return 0;
    }
    while (time)
    {
        pos++; // pos, 인덱스는 계속 이동해야 한다.
        if (pos > n)
        {
            pos = 1;
        }
        if (w[pos] != 0)
        {
            time--;
            w[pos]--;
        }
    }

    while (true)
    {
        pos++;
        if (pos > n)
            pos = 1;
        if (w[pos] != 0)
            break;
    }
    printf("%d\n", pos);
    return 0;
}
