#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int n, k, i, sum = 0, res;
    scanf("%d %d", &n, &k);
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < k; i++) // k의 범위 확인, 아래 반복문의 k와 연결
    {
        sum += a[i];
    }
    res = sum;
    for (i = k; i < n; i++) // i 가 n 전까지인 이유는? k가 2 이상이라면?
    // 이 아니라 범위는 위에서 k만큼 더해졌기 때문에 항상 '한칸'씩 이동하게 된다.
    {
        sum += (a[i] - a[i - k]);
        if (sum > res)
            res = sum;
    }
    printf("%d\n", res);
    return 0;
}
