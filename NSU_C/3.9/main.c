#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double p0 = 1.29;
    int p = 1;
    double z = 1.25 * pow(10,-4);
    double h = -log(p/p0) / z;
    printf("%f",h);

}
