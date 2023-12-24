#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    stack<char> s;
    int i, flag = 1;
    char a[50];
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '(')
            s.push(a[i]);
        else
        {
            if (s.empty())
            {
                printf("NO\n");
                flag = 0;
                break;
            }

            s.pop();
        }
    }
    if (s.empty() && flag == 1)
        printf("YES\n");
    else if (!s.empty() && flag == 1)
        printf("NO\n");
    return 0;
}
