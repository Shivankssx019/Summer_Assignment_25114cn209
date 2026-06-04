#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    
    while (num > 0) {
        num &= (num - 1);
        count++;          
    }
    
    return count;
}

int main() {
    unsigned int number;
    
    printf("Enter an integer: ");
    if (scanf("%u", &number) == 1) {
        int result = countSetBits(number);
        printf("Number of set bits (1s) in %u is: %d\n", number, result);
    }
    
    return 0;
}