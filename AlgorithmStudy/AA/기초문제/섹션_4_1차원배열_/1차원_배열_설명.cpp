#include <stdio.h>

int main()
{
    // int a[5] = {7, 3, 6, 12, 15};
    // printf("%d\n", a[3]);
    // return 0;

    // 정수 배열의 합
    // int eng[5] = {80, 87, 97, 88, 99};
    // int i, sum = 0;
    // for (i = 0; i < 5; i++)
    // {
    //     sum += eng[i];
    // }
    // printf("%d\n", sum);
    // return 0;

    // 홀수의 합
    // int a[5] = {12, 23, 15, 8, 3};
    // int i, cnt = 0;
    // for (i = 0; i < 5; i++)
    // {
    //     if (a[i] % 2 == 1)
    //         cnt += 1;
    // }
    // printf("%d\n", cnt);
    // return 0;

    int a[7] = {12, 23, 15, 8, 3, 9, 11};
    int i, max = -2147000000;
    for (i = 0; i < 7; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("%d\n", max);
    return 0;
}
