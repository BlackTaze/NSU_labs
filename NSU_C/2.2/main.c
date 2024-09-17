#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lx1,ly1,rx1,ry1,lx2,ly2,rx2,ry2,d1,d2;
    scanf("%d%d%d%d%d%d%d%d",&lx1,&ly1,&rx1,&ry1,&lx2,&ly2,&rx2,&ry2);
    d1 = ((rx1 - lx1) * (rx1 - lx1) + (ry1 - ly1) * (ry1 - ly1)) * 0.5;
    d2 = ((rx2 - lx2) * (rx2 - lx2) + (ry2 - ly2) * (ry2 - ly2)) * 0.5;
    if (d2 > d1) printf("%d%d%d%d",lx2,ly2,rx2,ry2);
    else printf("%d%d%d%d",lx1,ly1,rx1,ry1);
}

