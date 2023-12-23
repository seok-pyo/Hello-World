#include <stdio.h>
bool check(int x)
{
    bool result = true;
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else if (x % 3 == 0)
        {
            x = x / 3;
        }
        else if (x % 5 == 0)
        {
            x = x / 5;
        }
        else
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    int n, i = 2, cnt = 1;
    scanf("%d", &n);
    while (cnt < n)
    {
        if (check(i))
        {
            cnt++;
        }
        if (cnt == n)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    }

    return 0;
}
