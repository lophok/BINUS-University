#include <stdio.h>

int main(){
    double a,b,c,d;
    int tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        printf("%.2lf\n",(a+b+c)*2+d);
    }
    
    
    return 0;
}