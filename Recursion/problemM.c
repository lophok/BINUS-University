#include <stdio.h>
int recursion(int a, int b, int count)
{
    if (count > 4)
    {
        return 0;
    }
    if (a == b)
        return 1;
    if (a == 1)
        count += 1;
    if (a & 1)
        return recursion(a * 3 + 1, b, count);
    else if (a % 2 == 0)
        return recursion(a / 2, b, count);
}
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        int N, a, b;
        scanf("%d %d", &a, &b);
        getchar();
        int result = recursion(a, b, 0);
        printf("Case #%d: %s\n", i, (result) ? "YES" : "NO");
    }
    return 0;
}