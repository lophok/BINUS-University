#include <stdio.h>
#include <string.h>

int main(){
    // int n = 0;
    FILE *ptr;
    // char ch[1100];
    // int size = 0, sizes = 0, shift;
    ptr = fopen("testdata.in", "r");
    int a,b;

    fscanf(ptr, "%d %d\n", &a,&b);

    printf("%d\n",a+b);
}