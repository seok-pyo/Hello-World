#include <stdio.h>
#include <string.h>

int main()
{

    char a[100];
    int n, i;

    scanf("%s", a);
    n = strlen(a);

    for (i = 0; i < n; i++)
    {
        if (a[i] == 'A')
            a[i] = '#';
    }

    printf("%s\n", a);

    return 0;
}
