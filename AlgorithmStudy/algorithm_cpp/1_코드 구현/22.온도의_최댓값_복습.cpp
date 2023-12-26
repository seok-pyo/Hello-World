#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    // 이중 for문으로 풀면 시간제한에 걸린다.
    // n 시간복잡도만에 푸는 방법 익혀두기.
    freopen("input.txt", "rt", stdin);
    int n, k, i, j, max = -2147000000, sum;
    scanf("%d %d", &n, &k);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < a.size() - k; i++)
    {
        sum = 0;
        for (j = i; j < i + k; j++)
        {
            sum += a[j];
        }
        if (sum > max)
            max = sum;
    }
    printf("%d\n", max);
    return 0;
}
