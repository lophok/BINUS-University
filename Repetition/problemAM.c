#include <stdio.h>
int main(){
    int tc,n;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%d",&n);getchar();
        printf("Case #%d:\n",i);
        for(int j=1;j<=n;j++){
            printf("%d %s\n",j,(((j%3==0)||(j%5==0))&&(j%15!=0))?"Jojo":"Lili");
        }
    }
}