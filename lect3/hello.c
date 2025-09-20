#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for (num = 2; num <= 100; num++) {
        isPrime = 1;  // Assume number is prime

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
