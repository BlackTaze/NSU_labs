#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3,b1,b2,c1,c2,c3;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2);
    c1 = ((a3 + b2) / 10 + b1 + a2) / 10 + a1;
    c2 = ((a3 + b2) / 10 + b1 + a2) % 10;
    c3 = (a3 + b2) % 10;
    printf("%d%d%d",c1,c2,c3);
    return 0;


}
