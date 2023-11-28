#include <stdio.h>
int main()
{
    int h;

    scanf("%d", &h);

    printf("%s\n", (120 <= h && h <= 150) ? "true" : "false");
    return 0;
}
