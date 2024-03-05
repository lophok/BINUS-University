#include <stdio.h>

int main(){
    double a;
    long long int tc,b;
    scanf("%lld",&tc);
    while(tc--){
        scanf("%lf %lld",&a,&b);
        printf("%.2lf\n",a*b/360);
    }
    return 0;
}