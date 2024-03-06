#include <stdio.h>
int main() 
{ 
    int rows,tc; 
    scanf("%d",&tc);
    scanf("%d",&rows);
    while(tc--){
    // first loop is for printing the rows 
    for (int i = 1; i <= rows; i++) { 
  
        
  
        // loop for printing * character 
        for (int k = 1; k <=rows; k++) { 
            printf("%c",(rows-k>=i)?' ':'*'); 
        } 
        printf("\n"); 
    } }
    return 0; 
}