#include <stdio.h>
int calls;
int recursion(int N)
{
    if (N == 0)
        return 1;
    else if (N == 1)
        return 2;
    if (N % 3 == 0)
        calls += 1;
    if (N % 5 == 0)
        return N * 2;
    return recursion(N - 1) + N + recursion(N - 2) + N - 2;
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int N;
        scanf("%d", &N);
        calls = 0;
        int result = recursion(N);
        printf("Case #%d: %d %d\n", t, result, calls);
    }
    return 0;
}