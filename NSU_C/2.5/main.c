#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k,m,d1,d2;
    scanf("%d%d%d",&n,&k,&m);
    d1 = abs(k - m);
    d2 = n - abs(k - m);
    if ( d2 > d1 ) printf("%d",d1);
    else printf("%d",d2);
}
