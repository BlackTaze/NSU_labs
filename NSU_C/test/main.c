#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int **a;
    a = (int**)malloc(n * sizeof(int*));
    int *b;
    b = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n;i++){
        scanf("%d",b+i);
        *(a+i) = b + i;
    }
    void swap(int **x,int **y){
        int **tmp;
        tmp = *x;
        *x = *y;
        *y = tmp;
    }
    for (int i = 0; i <n ;i++){
        for (int j = i; j < n-1;j++){
            if (*(a + j) > *(a + j + 1)) swap(a+j,a+j+1);
        }
    }
    for (int i = 0;i<n;i++) printf("%d",*(b+i));
}
