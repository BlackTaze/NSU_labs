#include <stdio.h>
#include <stdlib.h>

int main()
{

    int h,m,res;
    scanf("%d%d",&h,&m);
    res = (((h % 6) * 5) + 15 - m) % 30;
    printf("%d",res);




}
