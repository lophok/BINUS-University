#include <stdio.h>

int main(){
    long long int n,tci,tsi,tvi,count=0;
    scanf("%lld",&n);getchar();
    while(n--){
        scanf("%lld %lld %lld",&tci,&tsi,&tvi);getchar();
        count+=(tsi>tvi)?1:0;
    }
    printf("%lld\n",count);
}