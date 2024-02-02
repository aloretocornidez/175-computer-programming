#include <stdio.h>

int main(void) {
  // Initialize our variables.
  int var1 = 123;
  int var2 = 456;

  // Initialize the pointer to NULL because it isn't pointing to anything yet.
  int *p = NULL;

  // Set the value of our pointer to the address of var1.
  p = &var1;

  // Set the contents of our address to 10.
  *p = 10;

  // Set var2 to the contents of p + 10
  var2 = *p + 10;

  // Prints the values contained by the variables.
  printf("%d %d %d\n", var1, var2, *p);

  // Prints the address locations of the variables.
  printf("%p %p %p\n", &var1, &var2, p);

  return (0);
}
