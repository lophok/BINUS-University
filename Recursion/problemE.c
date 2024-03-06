#include <stdio.h>
#include <stdlib.h>

long long int rec(long long int *count, long long int *tree, int n)
{
    if (n)
    {
        *count += tree[n - 1];
        return rec(count, tree, n - 1);
    }
    else
        return *count;
}
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        int n;
        scanf("%d", &n);
        getchar();
        long long int *tree = (long long int *)malloc(sizeof(long long int) * n);
        long long int count = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &tree[j]);
            getchar();
        }
        printf("Case #%d: %lld\n", i, rec(&count, tree, n));
    }
}