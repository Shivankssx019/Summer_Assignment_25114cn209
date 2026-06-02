#include <stdio.h>

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Binary equivalent: ");
    
    int flag = 0; 
    
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        
        if (bit == 1) {
            flag = 1; 
        }
        
        if (flag) {
            printf("%d", bit);
        }
    }
    
    if (flag == 0) {
        printf("0");
    }
    
    printf("\n");
    return 0;
}