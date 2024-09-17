#include <stdio.h>


int main()
{
    int y,min,x,hours;
    scanf("%d",&y);
    min = (y % 30) * 2;
    x = 6 * min;
    hours = y / 30;
    printf("%d %d \n",hours,min);
    printf("%d",x);
    return 0;
}
