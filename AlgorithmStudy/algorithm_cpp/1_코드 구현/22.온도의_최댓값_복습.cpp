#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
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
