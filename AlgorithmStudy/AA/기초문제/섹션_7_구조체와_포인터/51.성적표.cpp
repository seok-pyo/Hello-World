#include <stdio.h>

struct Student
{
    int num, mat, eng, cla;
};

int main()
{
    int n, i, res, max = -2147000000;

    scanf("%d", &n);
    Student s[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &s[i].num);
        scanf("%d", &s[i].mat);
        scanf("%d", &s[i].eng);
        scanf("%d", &s[i].cla);
    }

    for (i = 0; i < n; i++)
    {
        if (s[i].mat > max)
        {
            max = s[i].mat;
            res = s[i].cla;
        }
    }

    printf("%d\n", res);
    return 0;
}
