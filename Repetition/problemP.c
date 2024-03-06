#include <stdio.h>

int main(){
    long long int tc,k,jumps,ans;
    scanf("%lld",&tc);getchar();
    for(int i=1;i<=tc;i++){
        jumps=0;
        scanf("%lld",&k);getchar();
        for(int j=1;jumps<k;j++){
            jumps+=j;
            if(jumps>=k)ans=j;
        }
        printf("Case #%d: %lld\n",i,ans);


    }
}