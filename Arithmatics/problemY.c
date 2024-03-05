#include <stdio.h>

int main(){
    double a,b;
    int tc;
    scanf("%d", &tc);
    while(tc--){
        scanf("%lf %lf",&a,&b);
        printf("%.2lf\n",b*a/100);
    }
    
    
    return 0;
}