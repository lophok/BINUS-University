#include <stdio.h>

int main(){
    int tc;
    long long int size,m,temp,candy;

    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%lld %lld",&size,&m);
        candy=0;
        for(int j=0;j<size;j++){
            scanf("%lld",&temp);getchar();
            candy=((m/temp)>candy)?m/temp:candy;
        }
        printf("Case #%d: %lld\n",i,candy);
    }

}