#include <stdio.h>

int reverse(int x)
{
    int moc, na, sum = 0;
    moc = x;
    while (moc > 0)
    {
        na = moc % 10;
        moc = moc / 10;
        sum = (sum * 10) + na;
    }
    return sum;
};

// bool isPrime(int x)
// {
//     int i;
//     for (i = 2; i < x; i++)
//     {
//         if (x % i == 0)
//             return false;
//     }
//     return true;
// }

bool isPrime(int x)
{
    int i;
    if (x == 1)
        return false;
    bool flag = true;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n, i, num, tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        tmp = reverse(num);
        if (isPrime(tmp))
            printf("%d ", tmp);
    }
    return 0;
}
