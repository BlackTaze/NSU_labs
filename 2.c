#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int NOD(int a, int b){
    while ( b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *arr = (int) malloc( n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int nod = arr[0];
    for (int i = 1; i < n; i++){
        nod = NOD(nod, arr[i]);
    }

    printf("%d",nod);

    free(arr);

    return 0;



}
