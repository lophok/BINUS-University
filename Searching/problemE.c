#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int sorts (const void * a, const void * b) {
   if( *(int*)a - *(int*)b < 0 )
        return -1;
    if( *(int*)a - *(int*)b > 0 )
        return 1;
    return 0;
}

int search(int arr[], int n, int num){
    for(int i=0;i<n;i++){
        if(i==(n-1) && num==arr[i])return arr[i-1];
        if(num==arr[i])return arr[i+1];
    }
    return 0;
}

int main(){
    int tc;
    scanf("%d",&tc);getchar();
    for(int l=1;l<=tc;l++){
    int n;
    scanf("%d",&n);getchar();
    int arr[n];
    

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);getchar();
    }
    qsort(arr,n,sizeof(int),sorts);
    int num;
    scanf("%d",&num);getchar();
    int res=search(arr,n,num);
    // printf("%d",res);
    if(!res){
        num=-1;
        res=-1;
    }
    if(res>num)swap(&res,&num);
    printf("CASE #%d: %d %d\n",l,res,num);

}

    
}