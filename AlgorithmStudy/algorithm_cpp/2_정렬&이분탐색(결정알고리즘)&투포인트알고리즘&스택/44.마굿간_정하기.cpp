#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int n; // 반복문으로 사용하기 위해서 전역번수로 설정
int Count(int len, int x[])
{
    int i, cnt = 1, pos = x[1]; // 1번 마굿간을 정해놓고, 시작. cnt는 마굿간의 개수
    for (i = 2; i <= n; i++)
    {
        if (x[i] - pos >= len) // pos는 이전 마굿간의 위치, 이전 마굿간과 현재 마굿간의 거리가 len(최솟값) 보다 크다면 말을 배치할 수 있다.
        {
            cnt++;
            pos = x[i];
        }
    }
    return cnt;
}
int main()
{
    int m, i, lt = 1, rt, mid, res;
    scanf("%d %d", &n, &m);
    int *x = new int[n + 1]; // 배열의 동적 할당
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x[i]);
    }
    sort(x + 1, x + n + 1); // 이분 검색은 오름차순을로 정렬해줘야 한다.
    rt = x[n];              // rt는 배열의 마지막 원소로 할당
    while (lt <= rt)
    {
        mid = (lt + rt) / 2;
        if (Count(mid, x) >= m) // 최소 거리로 마굿간의 개수가 m보다 크다면 다 가능하다는 의미
        {
            res = mid;
            lt = mid + 1; // 그럼 최소 거리의 최대값을 구하는거기 때문에 lt 값을 갱신한다.
        }
        else
            rt = mid - 1;
    }
    printf("%d\n", res);
    delete[] x; // 포인터 배열 메모리 해제
    return 0;
}
