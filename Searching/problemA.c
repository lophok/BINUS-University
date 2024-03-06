
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct singkat{
    char singkatan[110];
    char value[110];

}singkatan;

singkatan arr[110];

void search(char*str,int n){
    for(int i=0;i<n;i++){
        if(!strcmp(str, arr[i].singkatan)){
            printf("%s",arr[i].value);return;
        }
    }
    printf("%s", str);
}

int main(){
    FILE *ptr;
    ptr=fopen("testdata.in","r");
    int n;
    fscanf(ptr,"%d\n",&n);
    for(int i=0;i<n;i++){
        fscanf(ptr,"%[^#]#%[^\n]\n", arr[i].singkatan,arr[i].value);
        // ht_insert(ht, (char *)temp1, (char *)temp2);
        
    }
    
    
    int tc;
    fscanf(ptr,"%d\n",&tc);

    
    for(int i=1;i<=tc;i++){
        char sentence[120];
        fscanf(ptr,"%[^\n]\n", sentence);
        printf("Case #%d:\n",i);
        char* token = strtok(sentence, " ");
 
        // Keep printing tokens while one of the
        // delimiters present in str[].
        while (token != NULL) {
            search(token,n);
            // printf("\n[%s]",token);
            token = strtok(NULL, " ");

            printf("%c", (token==NULL)?'\n':' ');
        }


    }

}