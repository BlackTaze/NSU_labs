#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long fact = factorial(n);
    
    int num_digits = 0;
    unsigned long long temp = fact;
    while (temp > 0) {
        num_digits++;
        temp /= 10;
    }

    int *digits = (int *)malloc(num_digits * sizeof(int));
    int i = 0;
    while (fact > 0) {
        digits[i++] = fact % 10;
        fact /= 10;
    }
    for (int i = num_digits - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");

    free(digits);
    return 0;
}

