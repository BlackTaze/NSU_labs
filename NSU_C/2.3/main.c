#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,dlin,korot;

    scanf("%d%d%d%d",&a,&b,&c,&d);
    dlin = (a / c) * (b / d);
    korot = (b / c) * (a / d);
    if (dlin > korot) puts("dlin");
    else puts("korot");


}
