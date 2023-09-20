#include <stdio.h>

int main(int argc, char *argv[]) {
  int i, var1;
  int *p;

  // p points to i
  p = &i;

  // the content of memory cell pointed by p is assigned the value 10
  *p = 10;

  // variable var1 is assigned the contents of memory cell pointed by p
  var1 = *p;

  printf("Value of var1: %d\n", var1);

  return 0; 
}
