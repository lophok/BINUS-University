#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct apalah
{
    char nim[30];
    char name[50];

} lead;

lead arr[101];

int main()
{
    int n = 0;
    FILE *ptr;
    char ch;
    int size = 0, sizes = 0, count = 1;
    ptr = fopen("testdata.in", "r");

    fscanf(ptr, "%d\n", &n);
    
    while (size < n)
    {
        fscanf(ptr, "%s %[^\n]\n", arr[size].nim, arr[size].name);
        size++;
    }
    fscanf(ptr, "%d\n", &sizes);
    while(sizes--){
        char name[100] = "N/A";
        char temp[100];
        fscanf(ptr, "%s\n", temp);
        for (int i = 0; i < n; i++)
        {
            if (!strcmp(arr[i].nim, temp))
            {
                strcpy(name, arr[i].name);
            }
        }
        printf("Case #%d: %s\n", count, name);

        count++;
    }
}