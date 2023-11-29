#include <stdio.h>

int main()
{
    // int a, b, c, d, e, f, g, min;
    // scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    // min = a < b ? a : b;
    // min = min < c ? min : c;
    // min = min < d ? min : d;
    // min = min < e ? min : e;
    // min = min < f ? min : f;
    // min = min < g ? min : g;

    // printf("%d\n", min);
    int i, min = 2147000000, a;
    for (i = 1; i <= 7; i++)
    {
        scanf("%d", &a);
        min = a < min ? a : min;
    }
    printf("%d\n", min);
    return 0;
}
