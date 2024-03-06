#include <stdio.h>
int main(){
    int tc;
    long long int N,Len;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        Len=0;
        scanf("%lld",&N);
        while(N){
            Len+=1;
            N/=10;
        }
        printf("Case #%d: %lld\n",i,Len);


    }

    
}