#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Floors,CountOfApartments,ApartmentNum,entrance,floor;
    scanf("%d%d%d",&Floors,&CountOfApartments,&ApartmentNum);
    entrance = (ApartmentNum - 1) / (Floors * CountOfApartments) + 1 ;
    floor = ((((ApartmentNum -1)  / CountOfApartments) % Floors ) + 1);

    printf("%d %d",entrance,floor);
    return 0;
}
