#include <stdio.h>

int main(){
    int tc,n;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%d",&n);getchar();
        printf("Case %d: ",i);
        int counter=1;
        for(int j=1;j<=n;counter+=j,j++){
            printf("%d%c",counter,(j!=n)?' ':'\n');
            ;
        }
    }
}