#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, i, j = 1, tmp;
    stack<int> s;
    vector<char> res;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &tmp);
        s.push(tmp);
        res.push_back('P');
        while (1)
        {
            if (s.empty())
                break;
            if (s.top() == j)
            {
                s.pop();
                res.push_back('O');
                j++;
            }
            else
                break;
        }
    }
    if (!s.empty())
        printf("impossible\n");
    else
    {
        for (i = 0; i <= res.size(); i++)
        {
            printf("%c ", res[i]);
        }
    }
    return 0;
}
