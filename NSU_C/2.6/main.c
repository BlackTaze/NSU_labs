#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if (abs(a - e) * abs(b - f) == 2){
        if ((e != c) && (f != d) && abs(c-e) != abs(d- f)) puts("Success");
        else puts("Fail");
    }
    else puts("Wrong");
}
