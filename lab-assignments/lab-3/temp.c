// Author: Alan Manuel 
// Purpose: Introduction to loops.
// Date: 02/09/2024

#include <stdio.h>

int main() {

  // for( initialization; condition to check; operation after loop)
  for (int i = 0; i < 10; i++) {

    // Be careful to use the iterating variable if you need dynamic conditions.
    int number = i % 10;

    if (number % 3 == 0) {

      printf("i: %d!!!\n", i);
    }
  }

  // While loops can be written to behave exactly like for loops.
  int k = 0; // initialization
  while (k < 10) { // condition
    printf("k: %d!!!\n", k);
    k++; // operation after code execution.
  }

  /*
   * If both are the same under the hood, then which one should I use?
   *
   * Answer: You want to use for loops when you know how many times that loop
   * will execute. You want to use while loops if you do not know how many times
   * you will repeat a section of code.
   *
   */

  return 0;
}
