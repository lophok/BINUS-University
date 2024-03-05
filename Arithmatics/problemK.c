#include <stdio.h>

int main(){
    double a,b;
    int tc=3;
    scanf("%lf %lf",&a, &b);getchar();

    while(tc--){
        a+=a*b/100;
    }
    printf("%.2lf\n",a);

    
    
    return 0;
}