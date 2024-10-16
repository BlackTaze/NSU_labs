#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(n * 2 * sizeof(int));
    for (int i = 0; i < n * 2; i++) {
        scanf("%d", &a[i]);
    }

    double total = 0.0;
    int x0 = a[0], y0 = a[1];

    for (int i = 1; i < n - 1; i++) {
        int x1 = a[2 * i];
        int y1 = a[2 * i + 1];
        int x2 = a[2 * (i + 1)];
        int y2 = a[2 * (i + 1) + 1];

        double side_a = distance(x0, y0, x1, y1);
        double side_b = distance(x1, y1, x2, y2);
        double side_c = distance(x2, y2, x0, y0);

        total += area(side_a, side_b, side_c);
    }

    printf("%f",total);

    free(a);
    return 0;
}

