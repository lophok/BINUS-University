#include <stdio.h>

int main(){
    long long int tc,ans=0,temp;
    scanf("%lld",&tc);getchar();
    while(tc--){
        scanf("%lld",&temp);getchar();
        ans+=temp;
    }
    printf("%lld\n",ans);
}