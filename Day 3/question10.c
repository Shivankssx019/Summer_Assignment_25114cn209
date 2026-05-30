 #include <stdio.h>

int main() {
    int i, j, n, m, a;
    printf("Enter the Number: ");
    scanf("%d", &n);

    // Primes start from 2
    for (i = 2; i <= n; i++) {
        m = i;
        a = 0;
        
        for (j = 2; j <= m / 2; j++) {
            if (m % j == 0) {
                a = 1; 
                break;
            }
        }

        if (a == 0) {
            printf("%d\n", m);
        }
    }

    return 0;
}