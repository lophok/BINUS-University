#include <stdio.h>

int main(){
    int k,n,m,tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%d %d %d",&k,&n,&m);getchar();
        printf("Case #%d: ",i);
        puts((k<=(n+m))?"yes":"no");
    }
    
    
    return 0;
}