#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int mat, eng;
};

int main()
{
    Student s1;
    strcpy(s1.name, "Hong");
    s1.mat = 90;
    s1.eng = 95;
    printf("%s\n", s1.name);
    printf("%d\n", s1.mat);
    printf("%d\n", s1.eng);
    return 0;
}
