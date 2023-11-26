#include <stdio.h>

int main()
{
    // scanf() 문
    //  키보드로부터 값을 입력받아 변수에 저장할 때 사용
    int a;
    scanf("%d", &a); // a변수명 앞에 주소연산자 &를 꼭 붙인다!
    printf("input value=%d\n", a);
    return 0;
}
