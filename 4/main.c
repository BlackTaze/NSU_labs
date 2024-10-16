#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int )malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxlen = 0;
    int currentlen = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            currentlen++;
            if (currentlen > maxlen) {
                maxlen = currentlen;
            }
        } else {
            currentlen = 0;
        }
    }

    printf("%d", maxlen);


    free(arr);

    return 0;
}
