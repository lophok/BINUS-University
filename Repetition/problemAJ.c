#include <stdio.h>
int main(){
    long long int tc,temp,total=0;
    scanf("%lld",&tc);getchar();
    while(tc--){
        scanf("%lld",&temp);getchar();
        total+=temp;
    }
    printf("%lld\n",total);
}   