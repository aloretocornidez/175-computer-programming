#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define True 1
#define False 0

int is_perfect_square(int n);

int main() {
  int num;
  printf("Enter a number: ");
  for (int i = 0; i < 10000; i++) {

    if (is_perfect_square(i)) {
      printf("%d is perfect?\n", i);
    }
  }
  return 0;
}

int is_perfect_square(int n) {
  for (int i = 0; i >= 0; i++) {
    if (n == i * i) {
      return True;
    }
    if (n < i * i) {
      return False;
    }
  }
  return 0;
}
