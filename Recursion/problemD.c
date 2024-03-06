#include <stdio.h>
int recursion(int n)
{
    if (n == 1)
        return 1;
    else if (n & 1)
        return recursion(n - 1) + recursion(n + 1);
    else
        return recursion(n / 2);
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        int result = recursion(n);
        printf("Case #%d: %d\n", t, result);
    }
    return 0;
}