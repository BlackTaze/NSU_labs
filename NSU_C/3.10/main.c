#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

int fac(int x) {
    if (x == 0) return 1;
    else return x * fac(x - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double k = 1;
        for (int j = i; j <= 2 * n; j++) {
            k *= (j + 1) / fac(j - i + 1);
            k *= (i % 2) == 0 ? 1 : -1;
        }
        sum += k;
    }
    printf("%f", sum);
    return 0;
}

