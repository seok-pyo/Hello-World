#include <stdio.h>
#include <string.h>

char a[100];
char b[100];
int main()
{
    int i, j;
    char res[] = "YES";
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                b[j] = '0';
            }
        }
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0')
        {
            strcpy(res, "NO");
            break;
        }
    }

    printf("%s\n", res);
    return 0;
}
