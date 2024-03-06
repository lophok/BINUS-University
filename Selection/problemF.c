#include <stdio.h>

int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>=b && a>=c){
        puts("Daging");
        puts((b>=c)?"Sayur\nTelur":"Telur\nSayur");
    }
    else if(b>=a && b>=c){
        puts("Sayur");
        puts((a>=c)?"Daging\nTelur":"Telur\nDaging");
    }
    else{
        puts("Telur");
        puts((a>=b)?"Daging\nSayur":"Sayur\nDaging");
    }
    // puts(((a*b)>(c+d))?"True":"False");
    
    return 0;
}