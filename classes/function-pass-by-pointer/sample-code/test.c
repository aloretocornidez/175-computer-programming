#include <stdio.h>

int main() {
  // Create a pointer.
  int *myPointer;

  // Initialize my number.
  int myNumber = 39;

  // Set my pointer equal to the address of myNumber.
  myPointer = &myNumber;

  // Print Statements
  printf("My Number: %d\n", myNumber);
  printf("Address of myNumber: %d\n", myPointer);
  printf("Address of myNumber: %d\n", &myNumber);
  printf("Using a pointer to print the value of myNumber: %d\n", *myPointer);

  return 0;
}
