#include <stdio.h>

int main(){
    int tc;
    double r,h;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%lf %lf",&r,&h);getchar();

        printf("Case #%d: %.2lf\n",i,(r*r*2*3.14)+(2*3.14*r*h));
    }
    
    
    return 0;
}