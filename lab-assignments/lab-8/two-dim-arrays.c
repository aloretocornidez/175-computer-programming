/*
 * Purpose: This files contains simple two-dimensional arrays examples
 * Author: Alan Manuel Loreto Cornídez
 */

#include <stdio.h>

// When a function uses a two dimensional array as an input, you want to
// specify the number of columns in each row.
void banana(int arr[][5]) {

  // Printing the array.
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

void populateArray(int jibberish[][5]) {
  // Populating the array.
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      jibberish[i][j] = (i + 1) * (j + 1);
    }
  }
}

int main(int argc, char *argv[]) {

  // Creating a 5x5 array.
  int asdf[5][5];

  populateArray(asdf);

  banana(asdf);

  return 0;
}
