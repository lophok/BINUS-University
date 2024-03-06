#include <stdio.h>
#include <string.h>
int main(){
    char a[100]; //define var
    int tc,len;
    scanf("%d",&tc); // scanf tc
    for(int i=1;i<=tc;i++){ // loop
        scanf("%d",&len);getchar(); //get length
        scanf("%[^\n]",&a);getchar(); // get string
        printf("Case #%d: ",i);
        for(int i=0;i<len;i++){
            if(((65<=a[i])&&(a[i]<=90)) || ((97<=a[i])&&(a[i]<=122))){
                printf("%c",a[i]);}
                }
        puts("");
    }
    return 0;
}