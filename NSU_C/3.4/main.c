#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float res = 0.0;
    for (int i = 50; i > 0; i--) res = pow((res + i) , 0.5);
    printf("%f",res);
}
