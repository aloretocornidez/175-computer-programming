#include <stdio.h>

void fun1(int x, int *y)
{
  // Multiply x by the contents of y.
  x = x + (*y);

  // Multiply the contents of y by 5.
  *y = 5 * (*y);

  // Set x to the contents of y times x.
  x = (*y) * x;
}

int main(void)
{
  // Initialize our variables.
  int x = 2, y = 8;

  // Call the function by reference. 
  fun1(x, &y);

  // Print the values
  printf("%d\t%d\n", x, y);

  return 0;
}
