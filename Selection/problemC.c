#include <stdio.h>

int main(){
    int a,b,tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%d %d",&a,&b);getchar();
        printf("Case #%d: %s\n",i,(a>b)?"Go-Jo":"Bi-Pay");
    }
    
    
    return 0;
}