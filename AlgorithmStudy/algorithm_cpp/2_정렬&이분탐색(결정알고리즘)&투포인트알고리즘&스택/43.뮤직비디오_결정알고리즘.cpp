#include <stdio.h>
// #include <vector>
using namespace std;
int a[1001], n; // Count함수를 만들어야 하기 때문에 전역변수로 잡는다.
int Count(int size)
{
    int cnt = 1, i, sum = 0; // cnt는 맨 처음 적어도 한 장이 필요하기 때문에 1로 초기화한다.
    for (i = 0; i < n; i++)
    {
        if (sum + a[i] > size)
        {
            cnt += 1;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
    }
    return cnt;
}
int main()
{
    int m, i, max = -2147000000, mid, lt = 1, rt = 0, res;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        rt += a[i];
        max = max < a[i] ? a[i] : max;
    }

    while (lt <= rt)
    {
        mid = (lt + rt) / 2;
        if (max <= mid && Count(mid) <= m)
        {
            rt = mid - 1;
            res = mid;
        }
        else
        {
            lt = mid + 1;
        }
    }
    printf("%d ", res);
    return 0;
}
