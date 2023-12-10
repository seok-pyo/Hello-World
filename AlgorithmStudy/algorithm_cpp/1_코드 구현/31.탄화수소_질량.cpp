#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char s[3];
    scanf("%s", s);
    int i, res = 0, tmp = 1, c = 12, h = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i - 1] == 'C' && s[i + 1] == 'H')
        {
            c *= s[i] - 48;
            res += c;
        }
        else if (s[i - 1] == 'C' && s[i + 1] != 'H')
        {
            res += c;
        }

        if (s[i - 1] == 'H')
        {
            res += (s[i] - 48);
        }
    }
    printf("%d\n", res);
    return 0;
}
