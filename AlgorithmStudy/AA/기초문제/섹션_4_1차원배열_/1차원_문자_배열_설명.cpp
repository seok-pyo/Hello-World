#include <stdio.h>
#include <string.h>

int main()
{
    // char a[6] = "KOREA";
    // printf("%s\n", a);

    // char a[20];
    // int n;
    // scanf("%s", a); // &주소지정자(포인터) 사용하는게 맞는지
    // n = strlen(a);
    // printf("문자열길이=%d\n", n);

    // char a[20];
    // int n, i, cnt = 0;
    // printf("input string? ");
    // scanf("%s", a);
    // n = strlen(a);
    // for (i = 0; i < n; i++)
    // {
    //     if (a[i] == 'e')
    //         cnt++;
    // }
    // printf("%d\n", cnt);

    char a[10] = "SEOUL";
    int i, j, n;
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}
