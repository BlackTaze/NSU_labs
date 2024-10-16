#include <stdio.h>

int sumdigits(int n) {
  if (n == 0) {
    return 0;
  } else {
    return (n % 10) + sumdigits(n / 10);
  }
}

int main() {
  int num;
  scanf("%d", &num);
  int result = sumdigits(num);
  printf("%d", result);
  return 0;
}
