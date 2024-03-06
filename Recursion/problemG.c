#include <stdio.h>
#include <string.h>
int flag;
int recPalindrome(char s[], int back, int front, int n)
{
    if (n - 1)
    {
        if (s[back] != s[front])
            flag = 0;
        return recPalindrome(s, back - 1, front + 1, n - 1);
    }
    else
        return flag;
}
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        char s[10000];
        flag = 1;
        scanf("%[^\n]", s);
        getchar();
        printf("Case #%d: %s\n", i, (recPalindrome(s, strlen(s) - 1, 0, strlen(s))) ? "yes" : "no");
    }
}