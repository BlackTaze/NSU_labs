#include <stdio.h>


int main()
{
    int y,mins,x,hours;
    scanf("%d",&y);
    min = (y % 30) * 2;
    x = 6 * mins;
    hours = y / 30;
    printf("%d %d \n",hours,mins);
    printf("%d",x);
    return 0;
}
