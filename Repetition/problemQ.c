#include <stdio.h>
#include <math.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

long long int minPageFlips(long long int N, long long int X) {
    long long int flipsFromFront = ceil((double)(X-1)/2);
    N-=(N%2==1)?1:0;
    long long int flipsFromBack = ceil((double)(N-X)/2);
    return MIN(flipsFromFront,flipsFromBack);
}

int main() {
    long long int N, X,tc;
    scanf("%lld", &tc);getchar();
    for(int i=1;i<=tc;i++){
    scanf("%lld %lld", &N,&X);getchar();
    long long int minFlips = minPageFlips(N, X);
    printf("Case #%lld: %lld\n",i,minFlips);}
    return 0;
}