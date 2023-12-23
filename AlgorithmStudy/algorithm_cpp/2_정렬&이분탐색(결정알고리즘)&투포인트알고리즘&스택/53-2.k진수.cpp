#include <stdio.h>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, k;
    stack<int> s;
    char str[20] = "0123456789ABCDEFG"; // k진수 변환을 위한 문자표
    scanf("%d %d", &n, &k);
    while (n > 0) // 몫이 0이 될 때까지 나머지를 취한다.
    {
        s.push(n % k);
        n = n / k;
    }
    while (!s.empty()) // 전체 스택을 출력
    {
        printf("%c", str[s.top()]); // 문자표와 나머지값과 대응되는 값을 출력
        s.pop();
    }
    printf("\n");
    return 0;
}
