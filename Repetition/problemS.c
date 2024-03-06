#include <stdio.h>

int main(){
    long long int n,s,temp,ans=0;
    scanf("%lld %lld",&n,&s);getchar();
    while(n--){
        scanf("%lld",&temp);getchar();
        ans+=(s>temp)?1:0;
    }
    printf("%lld\n",ans);
}