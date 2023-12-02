#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int mat, eng;
};

int main()
{
    Student s[10];
    char res[20];
    int i, n, max = -2147000000;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].mat);
        scanf("%d", &s[i].eng);
    }
    for (i = 1; i <= n; i++)
    {
        if (s[i].mat > max)
        {
            max = s[i].mat;
            strcpy(res, s[i].name);
        }
    }
    printf("%s\n", res);
    return 0;
}
