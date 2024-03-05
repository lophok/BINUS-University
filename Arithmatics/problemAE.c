#include <stdio.h>

int main(){
    long long int total=0;
    int a;
    scanf("%d",&a);
    for(long long int i=1;i<=a;i++){
        total+=100+i*50;
        total-=50;

    }
    printf("%lld\n",total);
    return 0;
}