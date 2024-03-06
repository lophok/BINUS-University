#include <stdio.h>
int recursion(int N)
{
    if (N == 0)
        return 0;
    else if (N == 1 || N == 2 || N == 3)
        return 1;
    if (N & 1)
        return 1;
    return recursion(N - 1) + recursion(N - 2);
}
int main()
{

    int N;
    scanf("%d", &N);
    int result = recursion(N);
    printf("%d\n", result);
}