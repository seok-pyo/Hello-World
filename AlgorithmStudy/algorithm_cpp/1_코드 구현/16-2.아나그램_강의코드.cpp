#include <stdio.h>

int a[60];
int b[60];
int main()
{
    int m, i;
    char str[100];
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            a[str[i] - 64] += 1;
        }
        else
        {
            a[str[i] - 70] += 1;
        }
    }

    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i <= 90])
        {
            b[str[i] - 64] += 1;
        }
        else
        {
            b[str[i] - 70] += 1;
        }
    }

    for (i = 1; i <= 52; i++)
    {
        if (a[i] != b[i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
