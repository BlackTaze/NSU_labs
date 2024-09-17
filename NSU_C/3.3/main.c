#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,n;
    scanf("%d%d",&x,&n);
    float res = 1.0;
    for (int i = 1; i <= n; i++){
            int fac = 1;
            for (int j = 1; j <= i; j++) fac *= j;
        if ( i % 2 != 0 ) res -= pow(x,i) / fac;
        else res += pow(x,i) / fac;
    }
    printf("%f",res);
}
