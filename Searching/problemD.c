#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct apalah{
    long long int num;
    char name[50];

}lead;

lead arr[1001];

int wfcmp (const void * a, const void * b) {
    struct apalah *ia = (struct apalah *)a;
    struct apalah *ib = (struct apalah *)b;
    long long int context=ib->num - ia->num ;
    if(!context)context=strcmp(ia->name , ib->name);
    return context;
}

int main(){
    int tc;
    scanf("%d",&tc);getchar();
    for(int l=1;l<=tc;l++){
    int n;
    char name[15];
    scanf("%d",&n);getchar();
    for(int i=0;i<n;i++){
        scanf("%[^#]#%lld", arr[i].name, &arr[i].num);getchar();
    }
    qsort(arr, n, sizeof(struct apalah), wfcmp);
    scanf("%s", name);getchar();
    for(int i=n;i>0;i--){
        if(!strcmp(arr[i-1].name,name)){printf("Case #%d: %d\n",l,i);break;}
    }}
}