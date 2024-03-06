#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,max=0,temp;
    scanf("%d",&n);
    int* dict=calloc(1001,sizeof(int));
    int* nums=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        dict[temp]+=1;
        max=(dict[temp]>max)?dict[temp]:max;
    }
    printf("%d\n",max);
}