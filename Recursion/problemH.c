#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fiboSize;
void trimArr(char *s, char (*fibo)[10000])
{
    int count = 0;
    char temp[1000];
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            temp[count] = s[i];
            fibo[count][0] = s[i];
            count++;
        }
    }
    fiboSize = count;
    strcpy(s, temp);
}
void FiboString(int *n, char *s, char (*fibo)[10000])
{
    if (fiboSize <= *n)
    {
        strcpy(fibo[fiboSize], fibo[fiboSize - 1]);
        strcat(fibo[fiboSize], fibo[fiboSize - 2]);
        fiboSize++;
        FiboString(n, s, fibo);
    }
    else
    {
        printf("%s\n", fibo[fiboSize - 1]);
    }
}
int main()
{
    int tc, n;
    scanf("%d", &tc);
    getchar();
    for (int i = 1; i <= tc; i++)
    {
        char *s = (char *)calloc(1000, sizeof(char));
        scanf("%d %[^\n]", &n, s);
        getchar();
        char fibo[200][10000];
        printf("Case #%d: ", i);
        trimArr(s, fibo);
        FiboString(&n, s, fibo);
    }
}