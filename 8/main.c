#include <stdio.h>
#include <math.h>


int isprime(int n, int i) {
  if (i == 1) {
    return 1;
  } else if (n % i == 0) {
    return 0;
  } else {
    return isprime(n, i - 1);
  }
}

int main() {
  int num;

  scanf("%d", &num);

  if (isprime(num, (int) pow(num,0.5) + 1)) {
    printf("Prime");
  } else {
    printf("Not prime");
  }

  return 0;
}


