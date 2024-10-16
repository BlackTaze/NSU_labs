#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

int square_checker(int num){
    int n = sqrt(num);
    return (n * n == num);
}

int main() {
  int n;
  scanf("%d", &n);
  int *arr = (int)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;
    for (int i = 0; i < n; i++){
        if (square_checker(arr[i]))
            count++;
    }
    printf("%d",count);
    return 0;
}
