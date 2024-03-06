#include <stdio.h>

int main(){
    long long int a,b,c;
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case #%d: %lld\n",i,((a/100*b)>c)?c:a/100*b);
    }
    return 0;
}