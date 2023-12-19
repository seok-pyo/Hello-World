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
            sum = a[i]; // 음악 리스트를 돌면서, 해당 인덱스의 음악을 넣으려고 할 때, size 이상으로 커지면 해당 인덱스부터 다시 더한다.
        }
        else
        {
            sum += a[i]; // 용량보다 적다면 계속 넣는다.
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
        rt += a[i]; // point! rt를 dvd의 전체 용량으로 설정해서, 적당한 용량의 크기를 이분 검색으로 찾아나간다. (결정알고리즘)
        max = max < a[i] ? a[i] : max;
    }

    while (lt <= rt)
    {
        mid = (lt + rt) / 2;               // mid 값이 dvd의 용량이 된다.
        if (max <= mid && Count(mid) <= m) // mid(dvd의 용량)이 max 값보다는 커야 한다. max <= mid 조건이 없다면 불필요한 반복을 할 수 있다.
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
