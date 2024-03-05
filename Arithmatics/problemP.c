#include <stdio.h>

int main(){
    double a,b;
    int tc=4;
    while(tc--){
        scanf("%lf %lf",&a,&b);
        printf("$%.2lf\n",b/(100-a)*100);
    }
    
    
    return 0;
}