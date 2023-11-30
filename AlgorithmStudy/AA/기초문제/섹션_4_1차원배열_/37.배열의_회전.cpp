#include <stdio.h>

int main()
{
    int k, i, j, length = 9, a[length], tmp;

    for (i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        tmp = a[0];
        for (j = 0; j < length - 1; j++)
        {
            a[j] = a[j + 1];
        }
        // a[length - 1] = tmp;
        // length에서 1을 뺄 필요 없이 j for문이 완료되고 내려오기 때문에
        // j = length - 1 이 된다.
        // j라는 거 이해가십니까
        a[j] = tmp;
    }

    for (i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
