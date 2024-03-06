#include <stdio.h>

int main() {
    int X,tc;

    scanf("%d", &tc);

    while(tc--){
    scanf("%d", &X);

    if (X > 0) {
        int i, j;
        
        for (i = 1; i <= X; i++) {
            for (j = 1; j <= X - i; j++) {
                printf(" "); 
            }
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("*"); 
            }
            printf("\n"); 
        }
    } }

    return 0;
}