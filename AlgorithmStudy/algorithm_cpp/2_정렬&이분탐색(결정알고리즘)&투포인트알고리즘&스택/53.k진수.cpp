#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int stack[100], top = -1; // stack의 인덱스는 -1로 초기화

void push(int x)
{
    stack[++top] = x; // 전위연산자 사용 top의 위치를 먼저 바꾸고 top가 가르키는 곳에 저장
}
int pop()
{
    return stack[top--]; // 후위연산자로 현재 top의 값을 리턴하고, top를 그 이전에 값을 가르키도록 수정
}
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, k;
    char str[20] = "0123456789ABCDEFG"; // k진수 변환을 위한 문자표
    scanf("%d %d", &n, &k);
    while (n > 0) // 몫이 0이 될 때까지 나머지를 취한다.
    {
        push(n % k);
        n = n / k;
    }
    while (top != -1) // 전체 스택을 출력
    {
        printf("%c", str[pop()]); // str[pop()] 문자표와 나머지값과 대응되는 값을 출력
    }
    printf("\n");
    return 0;
}
