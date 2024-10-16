#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int N;
    scanf("%d", &N);

    int **A = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(N * sizeof(int));
    }


    for (int j = 0; j < N; j++) {

        for (int i = j; i < N - j; i++) {
            scanf("%d", &A[j][i]);
        }

        for (int i = j + 1; i < N - j; i++) {
            scanf("%d", &A[i][N - j - 1]);
        }

        for (int i = N - j - 2; i >= j; i--) {
            scanf("%d", &A[N - j - 1][i]);
        }

        for (int i = N - j - 2; i > j; i--) {
            scanf("%d", &A[i][j]);
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);

    return 0;
}
