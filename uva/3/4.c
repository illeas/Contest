int main()
{
    int result = 0;
    char c[100];

    scanf("%[^\n]%*c", c);

    for (int i = 0; i <sizeof(c) / sizeof(c[0]); i++)
    {
        if (c[i] == '+' || c[i] == '-' || (c[i] >= '0' && c[i] <= '9'))
        {
            if (c[i - 1] == '+')
            {
                result = result + (c[i] - '0');
            } else if (c[i - 1] == '-')
            {
                result = result - (c[i] - '0');
            } else if (i == 0)
            {
                result = result + c[i] - '0';
            }
        }
    }
    printf("%d", result);
    return 0;
}
