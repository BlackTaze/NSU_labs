#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



int main() {
    int N;
    scanf("%d", &N);
    int *A = (int *)malloc(N * N * sizeof(int));
    for (int j = 0; j < N; j++) {

        for (int i = j; i < N - j; i++) {
            scanf("%d", &A[j * N + i]);
        }

        for (int i = j + 1; i < N - j; i++) {
            scanf("%d", &A[i * N + (N - j - 1)]);
        }

        for (int i = N - j - 2; i >= j; i--) {
            scanf("%d", &A[(N - j - 1) * N + i]);
        }

        for (int i = N - j - 2; i > j; i--) {
            scanf("%d", &A[i * N + j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i * N + j]);
        }
        printf("\n");
    }

    free(A);

    return 0;
}
