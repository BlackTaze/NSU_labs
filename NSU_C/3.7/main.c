#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) {
    return pow(x, 4) + 2 * pow(x, 3) - x - 1;
}

int main() {
    double a = 0;
    double b = 1.0;
    double c;

    while (fabs(b - a) > 0.00001) {
        c = (a + b) / 2;
        if (f(a) * f(c) > 0) a = c;
        else b = c;
    }

    printf("%f", c);

    return 0;
}


