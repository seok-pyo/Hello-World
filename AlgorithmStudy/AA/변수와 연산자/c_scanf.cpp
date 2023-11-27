#include <stdio.h>

int main()

{
    // 두 수 입력받아서 출력, 두 수는 띄어쓰기로 구분해서 입력을 받는다.
    int a, b;
    printf("input two number ? ");
    scanf("%d %d", &a, &b);
    printf("input value=%d %d\n", a, b);
    return 0;
}
