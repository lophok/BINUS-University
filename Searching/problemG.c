#include <stdio.h>

int main(){

    int tc;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        int n,k,count=0;
        scanf("%d %d",&n,&k);getchar();
        for(int j=0;j<n;j++){
            int temp;
            scanf("%d",&temp);getchar();
            if(temp>=k)count+=1;
        }
        printf("Case #%d: %d\n",i,count);

    }
}