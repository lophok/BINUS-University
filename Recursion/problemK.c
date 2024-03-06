#include <stdio.h>
int recursion(int N, int start, int end)
{
    if (N == 0)
        return start;
    else if (N == 1)
        return end;
    return recursion(N - 1, start, end) + recursion(N - 2, start, end);
}
int main()
{
    int N, start, end;
    scanf("%d %d", &start, &end);
    scanf("%d", &N);
    int result = recursion(N, start, end);
    printf("%d\n", result);
    return 0;
}