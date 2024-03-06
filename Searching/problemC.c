#include <stdio.h>

int main(){
    int max=-1;
    int removed[1000]={0};

    int arr_size,rmv;
    scanf("%d %d",&arr_size,&rmv);
    int arr[arr_size];
    for(int i=0;i<arr_size;i++){
        scanf("%d",&arr[i]);getchar();

    }
    for(int i=0;i<rmv;i++){
        int temp;
        scanf("%d",&temp);getchar();
        removed[temp]=1;

    }
    for(int i=0;i<arr_size;i++){
        if(!removed[arr[i]] && max<arr[i])max=arr[i];

    }
    printf("Maximum number is %d\n",max);

}