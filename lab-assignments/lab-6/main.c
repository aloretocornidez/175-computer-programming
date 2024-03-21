/*
 * Purpose: This files contains simple pointer examples.
 * Author: Alan Manuel Loreto Cornídez
 */
#include <stdio.h>

// We create a swap function that uses pointers
// so that we can modify values outside of the function.

void swap(int *var1, int *var2)
{

  int temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

int main()
{

  int a = 3;
  int b = 7;

  int *apple = &a;
  int *banana = &b;

  printf("      Value of A: %d Value of B: %d\n", *apple, *banana);
  printf("      Address of A: %p Address of B: %p\n", &a, &b);
  printf("      Address of A: %p Address of B: %p\n", apple, banana);




















  // printf("      %d %d\n", a, b);
  // swap(&a, &b);

  // printf("      %d %d\n", a, b);

  // Initializing variables.
  // int var1 = 4;
  // int var2 = 7;

  // Initializing Pointers.
  // int *ford = &var1;
  // int *cheverolet = &var2;

  // printing the values of the variables
  // printf("Value of var1: %d  Value of var2: %d\n", var1, var2);
  // printf("Value of var1: %d  Value of var2: %d\n", *ford, *cheverolet);

  // printing the addresses of the variables.
  // printf("Address of var1: %p  Address of var2: %p\n", &var1, &var2);
  // printf("Address of var1: %p  Address of var2: %p\n", ford, cheverolet);

  // Swapping the variables
  // printf("Before Swap: %d %d\n", var1, var2);
  // swap(&var1, &var2); // calling the function using the addresses.
  // printf("After Swap: %d %d\n", var1, var2);
  // swap(ford, cheverolet); // calling the function using the pointers.
  // printf("Swapping Again: %d %d\n", var1, var2);

  return 0;
}
