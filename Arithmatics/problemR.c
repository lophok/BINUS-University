#include <stdio.h>

int main(){
    long long int a,b,c,d,a1,a2,a3;
    
    scanf("(%lld+%lld)x(%lld-%lld)",&a,&b,&c,&d);getchar();
    a1=(a+b)*(c-d);
    scanf("(%lld+%lld)x(%lld-%lld)",&a,&b,&c,&d);getchar();
    a2=(a+b)*(c-d);
    scanf("(%lld+%lld)x(%lld-%lld)",&a,&b,&c,&d);getchar();
    a3=(a+b)*(c-d);
    printf("%lld %lld %lld\n",a1,a2,a3);
    
    
    
    
    
    return 0;
}