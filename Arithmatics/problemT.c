
#include <stdio.h>
#include <string.h>

int main() {
    int tc=5;
    while(tc--){
        

        char course[100], time[100];
        scanf("%s %s", course, time);

        int start_hour, start_minute, end_hour, end_minute;
        sscanf(time, "%02d:%02d-%02d:%02d", &start_hour, &start_minute, &end_hour, &end_minute);

        
        start_hour--; 
        end_hour--;
        
        if (start_hour < 0) {
            start_hour = 23; 
        }
        if (end_hour < 0) {
            end_hour = 23; 
        }

        
        printf("%s %02d:%02d-%02d:%02d\n", course, start_hour, start_minute, end_hour, end_minute);
    }
    

    return 0;
}
