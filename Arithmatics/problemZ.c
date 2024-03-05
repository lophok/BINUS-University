#include <stdio.h>

int main(){
    double a,b,c,d;
    int tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        printf("%.2lf\n",(2*a)+(2*b)+((c/3)*4)+(d/2));
    }
    
    
    return 0;
}