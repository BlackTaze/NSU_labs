#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
    double sum = 0;
    for (int i = 0 ; i < 10;i++ ){
        sum += (3.14/10) * (sin(3.14/10 * (i + 0.5)));
    }
    printf("%f",sum);
}
