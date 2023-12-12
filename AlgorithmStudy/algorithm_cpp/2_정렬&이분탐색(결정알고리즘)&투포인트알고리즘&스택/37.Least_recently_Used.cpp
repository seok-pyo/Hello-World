#include <stdio.h>
#include <vector>

using namespace std;
int main()
{
    int s, n, i, j, tmp, pos;
    scanf("%d %d", &s, &n);
    vector<int> a(s);
    vector<int> b(n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < s; j++)
        {
            if (b[i] == a[j])
                pos = j;
        }

        pos = -1;
        tmp = b[i];
        if (pos != -1)
        {
            for (j = pos; j >= 1; j--)
            {
                a[j] = a[j - 1];
            }
        }
        else if (pos == -1)
        {
            for (j = s - 1; j >= 1; j--)
            {
                a[j] = a[j - 1];
            }
        }
        a[j] = tmp;
    }

    for (i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
