

#include <stdbool.h>
#include <stdio.h>

int main() {

  int myInt = 9;

  bool myBool = true;

  for (int row = 0; row < 10; row++) {

    for (int column = 0; column < row + 1; column++) {

      printf("* ");
    }
    printf("\n");
  }







  const int number = 5;

  return 0;
}
