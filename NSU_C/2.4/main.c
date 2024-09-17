#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double t;
    int k;
    scanf("%lf",&t);
    k = ceil(t);
    k = k % 10;


    if ((k > 0 && k <= 3) || (k >= 6 && k <= 8)) puts("green");
    else puts("red");

}
