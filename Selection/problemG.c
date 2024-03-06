#include <stdio.h>

int main(){
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    puts(((a*b)==(c-d))?"True":"False");
    
    return 0;
}