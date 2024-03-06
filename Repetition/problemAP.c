#include <stdio.h>
#include <string.h>

void convertToSecretCode(char *message, long long int K) {
    int length = strlen(message);

    for (int i = 0; i < length; i++) {
        char c = message[i];
        
        if (c >= 'a' && c <= 'z') {
            int originalValue = c - 'a';  // Convert the letter to a number (a=0, b=1, ...)
            int secretValue = (originalValue + K) % 26;  // Add K and take modulo 26
            
            // Convert the secret value back to a letter (0=a, 1=b, ...)
            char secretChar = 'a' + secretValue;
            message[i] = secretChar;
        }
        // You can add similar logic for uppercase letters if needed.
    }
}

int main() {
    char message[100];
    long long int K,tc,useless;

    scanf("%lld", &tc);
    for(int i=1;i<=tc;i++){
        scanf("%lld %lld",&useless, &K);
        scanf("%s", message);
        convertToSecretCode(message, K);
        printf("Case #%d: %s\n",i, message);
    }
    return 0;
}