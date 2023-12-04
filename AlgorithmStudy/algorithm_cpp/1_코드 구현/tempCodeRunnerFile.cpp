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