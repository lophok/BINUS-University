#include <stdio.h>

int main(){
    double a;
    int tc;
    scanf("%d", &tc);
    while(tc--){
        scanf("%lf",&a);
        printf("%.2lf %.2lf %.2lf\n",a*4/5, a*9/5+32, a+273);
    }
    
    
    return 0;
}