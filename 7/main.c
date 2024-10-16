#include <stdio.h>
#include <stdlib.h>

int sumdigits(int n){
    if (n == 0){
        return 0;
    } else {
        return (n % 10) + sumdigits(n / 10);
    }
}

int res(int n){
    if (n / 10 == 0){
        return n;
    } else {
        return res(sumdigits(n));
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",res(n));

}
