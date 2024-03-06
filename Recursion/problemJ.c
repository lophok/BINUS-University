#include <stdio.h>
int game(int turn, long long int n)
{
    if (n & 1 && n > 1)
        game(turn ^ 1, (n * 3) + 1);
    else if (n % 2 == 0 && n > 1)
        game(turn ^ 1, n / 2);
    else
        return turn;
}

int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        long long int n;
        scanf("%lld", &n);
        getchar();
        printf("Case #%d: %s\n", i, (game(1, n)) ? "Lili" : "Jojo");
    }
}