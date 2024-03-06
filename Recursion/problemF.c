#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void recSwap(char s[], int index)
{
    if (index + 1)
    {
        printf("%c", s[index]);
        recSwap(s, index - 1);
    }
}
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        char s[10000];
        scanf("%[^\n]", s);
        getchar();
        printf("Case #%d: ", i);
        recSwap(s, strlen(s) - 1);
        puts("");
    }
}