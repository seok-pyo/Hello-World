#include <stdio.h>

int main()
{
    char a[20];
    int year, age;
    scanf("%s", a);
    if (a[7] == '1' || a[7] == '2')
        year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
    else
        year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
    age = 2023 - year + 1;
    printf("%d\n", age);

    return 0;
}
