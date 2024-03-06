#include <stdio.h>

int main(){
    int tc;
    long long int a,b;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%lld %lld",&a,&b);getchar();
        printf("Case #%d: %s\n",i,((a*b)&1)?"Need more frogs":"Party time!");
    }
    
    
    return 0;
}