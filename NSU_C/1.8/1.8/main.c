#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,l,f,p,e;
    scanf("%d%d%d",&k,&l,&f);
    p = (f - 1) / (k * l) + 1 ;
    e = ((((f -1)  / l) % k ) + 1);

    printf("%d%d",p,e);
    return 0;
}
