#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a2,a4,a8,res;
    scanf("%d",&a);
    a2 = a * a;
    a4 = a2 * a2;
    a8 = a4 * a4;
    res = a8 * a8 * a8 * a4;
    printf("%d",res);
    return 0;

}
