/*
 * Purpose: This files contains simple pointer examples.
 * Author: Alan Manuel Loreto Cornídez
 */
#include <stdbool.h>
#include <stdio.h>

#define SIZE 5

int main() {

  // const int size = 5;
  int nums[SIZE];

  for (int i = 0; i < SIZE; i++) {
    scanf(" %d", &nums[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    printf("            %d %d\n", nums[i], i);
  }

  // // populates the array.
  // for (int i = 0; i < SIZE; i++) {
  //
  //   // int temp;
  //   // scanf(" %d", &temp);
  //   nums[i] = i +3;
  //
  //   // scanf(" %d", &nums[i]);
  //
  // }
  //
  // // print the values
  // for (int i = 0; i < SIZE; i++) {
  //   printf("        %d   %d\n", nums[i], *(nums + i));
  // }
  //
  //
  // printf("\n\n");
  // // print the values
  // for (int i = SIZE - 1; i >= 0; i = i - 1) {
  //   printf("        %d   %d\n", nums[i], *(nums + i));
  // }
  //
  //
  //

  /* Wednesday */

  //
  // // For loop to populate an array.
  // for (int i = 0; i < SIZE; i++) {
  //
  //   // Populate an array using scanned values
  //   int temp;
  //   printf("     Enter a number: ");
  //   scanf(" %d", &temp);
  //   nums[i] = temp;
  //
  //   // Using this line also works.
  //   // scanf(" %d", &nums[i]);
  // }
  //
  // // prints all of the values in the array.
  // for (int i = 0; i < SIZE; i++) {
  //
  //   printf("     Address of the element: %p | Value of the Element: %d\n",
  //          nums + i, nums[i]);
  // }
  //
  return 0;
}
