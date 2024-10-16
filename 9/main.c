#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int n) {

    if (n == 1) {
        return arr;
    }
    int maxInRest = findMax(arr, n - 1);
    if (arr[n - 1] > maxInRest) {
        return arr[n - 1];
    } else {
        return maxInRest;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxElement = findMax(arr, n);
    printf("%d",maxElement);
    free(arr);
    return 0;
}
