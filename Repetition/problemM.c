#include <stdio.h>

int main(){
    int tc,n;
    long long int m, temp, total;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        total=0;
        scanf("%d %lld",&n,&m);
        while(n--){
            scanf("%lld",&temp);getchar();
            total+=temp;
        }
        printf("Case #%d: %s\n",i,(m>=total)?"No worries":"Wash dishes");
    }
}