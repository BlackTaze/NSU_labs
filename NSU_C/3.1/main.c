#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 20 * 20;
    for ( int i = 20; i > 0; --i){
        sum -= i;
        sum = pow(sum,2);
    }
    printf("%d",sum);
}
