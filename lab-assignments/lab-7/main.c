/*
 * Purpose: This files contains simple pointer examples.
 * Author: Alan Manuel Loreto Cornídez
 */
#include <stdio.h>
#include <stdbool.h>

int main() {

  const int SIZE = 5;

  bool nums[SIZE];

  // For loop to populate an array.
  for (int i = 0; i < SIZE; i++) {

    // Populate an array using scanned values
    int temp;
    printf("     Enter a number: ");
    scanf(" %d", &temp);
    nums[i] = temp;

    // Using this line also works.
    // scanf(" %d", &nums[i]);
  }

  // prints all of the values in the array.
  for (int i = 0; i < SIZE; i++) {

    printf("     Address of the element: %p | Value of the Element: %d\n",
           nums + i, nums[i]);
  }

  return 0;
}
