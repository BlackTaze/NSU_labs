#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int *b = (int *)malloc(n * sizeof(int));
    int bSize = 0;
    for (int i = 0; i < n; i++) {
            int flag = 1;
        for (int j = 0; j < bSize; j++) {
            if (a[i] == b[j]) {
                flag = 0;
                break;
            }
        }
            if (flag){
            b[bSize] = a[i];
            bSize++;
            }
        }



    for (int i = 0; i < bSize; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");


    free(a);
    free(b);

    return 0;
}

