#include <stdio.h>
int main() {
    int tc, n,a,b,c,d,ans;
    scanf("%d", &tc);getchar();
    for (int i = 1; i <= tc; i++) {
        ans=0;
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);getchar();
        for(int j=1;j<=n;j++){
            ans+=((j%a==0) || (j%b==0) || (j%c==0) || (j%d==0))?1:0;
        }
        printf("Case #%d: %d\n",i,ans);
    }
}