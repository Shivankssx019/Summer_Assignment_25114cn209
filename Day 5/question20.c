#include <stdio.h>

int main() {
    int num, originalNum;
    int largestFactor = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;

   
    while (num % 2 == 0) {
        largestFactor = 2;
        num = num / 2;
    }

   
    for (int i = 3; i * i <= num; i = i + 2) {
        while (num % i == 0) {
            largestFactor = i;
            num = num / i;
        }
    }

    
    if (num > 2) {
        largestFactor = num;
    }

   
    printf("The largest prime factor of %d is: %d\n", originalNum, largestFactor);

    return 0;
}