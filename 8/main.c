#include <stdio.h>
#include <stdbool.h>

bool isprime(int n, int i) {
  if (i == 1) {
    return true;
  } else if (n % i == 0) {
    return false;
  } else {
    return isprime(n, i - 1);
  }
}

int main() {
  int num;

  scanf("%d", &num);

  if (isprime(num, num / 2)) {
    printf("Prime");
  } else {
    printf("Not prime");
  }

  return 0;
}
