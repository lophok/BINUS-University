#include <stdio.h>
int recursion(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (m > 0 && n == 0)
    {
        return recursion((m - 1), 1);
    }
    else if (m > 0 && n > 0)
    {
        return recursion((m - 1), recursion(m, n - 1));
    }
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int result = recursion(m, n);
    printf("result: %d\n", result);
    return 0;
}