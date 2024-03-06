#include <stdio.h>
int main(){
    long long int lenb,lend,temp,maxb=0,maxd=0;
    scanf("%lld %lld", &lenb,&lend);getchar();
    while(lenb--){
        scanf("%lld",&temp);getchar();
        maxb=(maxb<=temp)?temp:maxb;
    }
    while(lend--){
        scanf("%lld",&temp);getchar();
        maxd=(maxd<=temp)?temp:maxd;
    }
    puts((maxb>maxd)?"The dark secret was true":"Secret debunked");
}   