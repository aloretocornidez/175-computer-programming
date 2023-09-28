#include <stdio.h>

int main(void) {

  int *ptr, i = 10, j = 20, k = 30;

  ptr = &i;

  *ptr = 40;

  ptr = &j;

  // *ptr = *ptr + I;
  *ptr += i;

  ptr = &k;

  *ptr = *ptr + k + j;

  printf("i = %d, j = %d, k = %d\n", i, j, *ptr);

  return (0);
}
