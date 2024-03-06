#include <stdio.h>
int recursion(int N, int start, int end)
{
    if (N == 0)
        return start;
    else if (N == 1)
        return end;
    return recursion(N - 1, start, end) - recursion(N - 2, start, end);
}
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        int N, start, end;
        scanf("%d %d %d", &N, &start, &end);
        getchar();
        int result = recursion(N, start, end);
        printf("Case #%d: %d\n", i, result);
    }
    return 0;
}