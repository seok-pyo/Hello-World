#include <stdio.h>
int main()
{
    int c = 0, h = 0, i, pos;
    char s[10];
    scanf("%s", s);

    if (s[1] == 'H')
    {
        c = 1;
        pos = 1;
    }
    else
    {
        for (i = 1; s[i] != 'H'; i++)
        {
            c = c * 10 + (s[i] - 48);
        }
        pos = i;
    }

    if (s[pos + 1] == '\0')
    {
        h = 1;
    }
    else
    {
        for (i = pos + 1; s[i] != '\0'; i++)
        {
            h = h * 10 + (s[i] - 48);
        }
    }

    printf("%d\n", 12 * c + h);
    return 0;
}
