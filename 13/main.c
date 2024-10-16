#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}


void DigInArray(unsigned long long fact, int **digits, int *size) {
    *size = 0;
    *digits = (int *)malloc(20 * sizeof(int));
    while (fact > 0) {
        (*digits)[(*size)++] = fact % 10;
        fact /= 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long fact = factorial(n);
    int *digits;
    int size;
    DigInArray(fact, &digits, &size);

    for (int i = size - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");


    free(digits);
    return 0;
}
