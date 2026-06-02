#include <stdio.h>
#include <string.h>

int main() {
    char binary[33]; 
    int decimal = 0;
    int base = 1;

    printf("Enter a binary number: ");
    scanf("%32s", binary);

    int length = strlen(binary);

    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Error: Invalid binary digit '%c'\n", binary[i]);
            return 1; // Exit program with error code
        }

        if (binary[i] == '1') {
            decimal += base;
        }
        
        base = base * 2; 
    }

    printf("%s in binary = %d in decimal\n", binary, decimal);

    return 0;
}