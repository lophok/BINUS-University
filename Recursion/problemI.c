#include <stdio.h>
int calls;
int recursion(int N)
{
    calls++;
    if (N == 0)
        return 1;
    else if (N == 1)
        return 2;
    return recursion(N - 1) + recursion(N - 2);
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
        printf("Case #%d: %d\n", t, calls);
    }
    return 0;
}