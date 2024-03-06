#include <stdio.h>
#include <stdlib.h>

int sorts (const void * a, const void * b) {
    // count+=1;
    
    // if (context>0)count+=1;
   if( *(long long int*)a - *(long long int*)b < 0 )
        return -1;
    if( *(long long int*)a - *(long long int*)b > 0 )
        return 1;
    return 0;
}

int main(){
    int n,count=0;
    scanf("%d",&n);getchar();
    long long int arr[n];
    long long int power;
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);getchar();
        
    }
    qsort(arr,n,sizeof(long long int), sorts);
    // for(int i=0;i<n;i++){
    //     printf("%lld\n",arr[i]);
        
    // }
    scanf("%lld",&power);getchar();
    for(int i=0;i<n;i++){
        // printf("%lld\n",power);

        if(power<arr[i])break;
        power-=arr[i];
        count++;
    }
    printf("%d\n",count);   

    
}