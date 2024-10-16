#include <stdio.h>
#include <stdbool.h>


int isSymmetric(int *arr, int i, int j) {

    if (i >= j) {
        return 1;
    }
    if (arr[i] != arr[j]) {
        return 0;
    }

    return isSymmetric(arr, i + 1, j - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int i, j;
    scanf("%d %d", &i, &j);
    printf("%d",isSymmetric(arr,i,j));

    free(arr);

    return 0;
}
