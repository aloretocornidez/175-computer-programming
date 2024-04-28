

#include <stdio.h>

void populateArray(int babana[][5]) {
  // populate the array.
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      babana[i][j] = (i + 1) * (j + 1);
    }
  }
}

void print(int mustang[][5]) {
  // print out the array.
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", mustang[i][j]);
    }
    printf("\n");
  }
}


int main() {

  // declare the array.
  int horse[5][5];

  populateArray(horse);

  print(horse);

  return 0;
}
