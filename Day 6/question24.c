#include <stdio.h>


double bitwise_power(double x, long long n) {
    double result = 1.0;
    long long abs_n = n < 0 ? -n : n;

    while (abs_n > 0) {
        
        if (abs_n & 1) {
            result *= x;
        }
        x *= x;        
        abs_n >>= 1;   
    }

    return n < 0 ? 1.0 / result : result;
}

int main() {
    double x = 3.0;
    long long n = 4;
    printf("%f^%lld = %f\n", x, n, bitwise_power(x, n));
    return 0;
}