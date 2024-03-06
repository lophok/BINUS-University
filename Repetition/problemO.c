#include <stdio.h>

int main(){
    int tc,portion,init,len,temp;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%d %d %d",&len,&portion,&init);getchar();
        while(len--){
            scanf("%d",&temp);getchar();
            init=((temp>init)&&(portion>=temp))?temp:init;
            
        }
        printf("Case #%d: %d\n",i,init);
        
    }

}