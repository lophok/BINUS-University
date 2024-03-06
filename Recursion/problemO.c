#include <stdio.h>
int n, m;
char game_map[100][100];
int visited[100][100];
int isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
int explore(int x, int y)
{
    if (!isValid(x, y) || game_map[x][y] == '#' || visited[x][y])
    {
        return 0;
    }

    visited[x][y] = 1;
    int food_eaten = 0;

    if (game_map[x][y] == '*')
    {
        food_eaten = 1;
    }

    food_eaten += explore(x - 1, y);
    food_eaten += explore(x + 1, y);
    food_eaten += explore(x, y - 1);
    food_eaten += explore(x, y + 1);

    return food_eaten;
}
int countFoodEaten()
{
    int totalFoodEaten = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (game_map[i][j] == 'P' && !visited[i][j])
            {
                totalFoodEaten += explore(i, j);
            }
        }
    }

    return totalFoodEaten;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++)
    {
        scanf("%d %d", &n, &m);

        for (int i = 0; i < n; i++)
        {
            scanf("%s", game_map[i]);
            for (int j = 0; j < m; j++)
            {
                visited[i][j] = 0;
            }
        }

        int foodEaten = countFoodEaten();
        printf("Case #%d: %d\n", tc, foodEaten);
    }

    return 0;
}