#include <stdio.h>

int main()
{
    int a;
    // bool result = true;

    scanf("%d", &a);
    // if (a % 2 != 0)
    //     result = false;

    // printf("%s\n", result ? "true" : "false");
    printf("%s\n", a % 2 == 0 ? "true" : "false");

    return 0;
}
