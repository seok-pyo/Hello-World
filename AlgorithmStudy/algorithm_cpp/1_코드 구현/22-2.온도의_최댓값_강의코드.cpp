#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, k, i, sum = 0, res;
    scanf("%d %d", &n, &k);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < k; i++) // 처음 구간(k)의 합을 구한다.
    {
        sum += a[i];
    }
    res = sum;                   // 처음 구간의 합을 구한다.
    for (i = k; i <= n - k; i++) // 처음 구간의 합을 구하고, 한 칸씩 이동하면서(앞에 원소는 빼고, 그 다음 원소는 더하고)
    // 전체의 합을 구할 수 있다.
    // 범위는 n-k까지
    {
        sum += (a[i] - a[i - k]);
        if (sum > res)
            res = sum;
    }
    printf("%d\n", res);
    return 0;
}
