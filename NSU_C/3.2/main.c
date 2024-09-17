#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,res,k;
    res = 0;
    k = 5;
    scanf("%d",&n);
    while ( n > 0 ){
        res += (n % 10) * pow(10,k);
        k--;
        n /= 10;
    }
    printf("%d",res / 10);


}
