#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);getchar();
    int hard=0;
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);getchar();
        hard|=temp;
    }
    printf("%s\n",(hard)?"not easy":"easy");
}