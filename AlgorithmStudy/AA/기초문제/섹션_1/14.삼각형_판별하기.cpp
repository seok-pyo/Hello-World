#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = a > b ? a : b;
    max = max > c ? max : c;

    if (a + b + c - max > max)
        printf("%s\n", "YES");
    // 형식 지정자는 변수나 동저으로 생성된 문자열을 출력할 때 사용한다.
    else
        printf("%s\n", "NO");
    return 0;
}
