/*
 * Purpose: This files contains simple pointer examples.
 * Author: Alan Manuel Loreto Cornídez
 */
#include <stdio.h>

// We create a swap function that uses pointers
// so that we can modify values outside of the function.
void swap(int *a, int *b)
{

  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{

  // Initializing variables.
  int var1 = 4;
  int var2 = 7;

  // Initializing Pointers.
  int *ford = &var1;
  int *cheverolet = &var2;

  // printing the values of the variables
  printf("Value of var1: %d  Value of var2: %d\n", var1, var2);
  printf("Value of var1: %d  Value of var2: %d\n", *ford, *cheverolet);

  // printing the addresses of the variables.
  printf("Address of var1: %p  Address of var2: %p\n", &var1, &var2);
  printf("Address of var1: %p  Address of var2: %p\n", ford, cheverolet);

  // Swapping the variables
  printf("Before Swap: %d %d\n", var1, var2);
  swap(&var1, &var2); // calling the function using the addresses.
  printf("After Swap: %d %d\n", var1, var2);
  swap(ford, cheverolet); // calling the function using the pointers.
  printf("Swapping Again: %d %d\n", var1, var2);

  return 0;
}
