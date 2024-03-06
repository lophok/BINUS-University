#include <stdio.h>

int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%s",(b<=c)?"2 3":"3 2");
        printf(" 1\n");

    }
    else if(b>=a && b>=c){
        
        printf("%s",(a<=c)?"1 3":"3 1");
        printf(" 2\n");
    }
    else{
        
        printf("%s",(a<=b)?"1 2":"2 1");
        printf(" 3\n");
    }
    // puts(((a*b)>(c+d))?"True":"False");
    
    return 0;
}