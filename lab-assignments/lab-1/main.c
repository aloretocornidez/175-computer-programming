// Author: Alan Manuel Loreto

#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  float number = 16.1;

  float roundUp = ceil(number);

  printf("Number: %.2lf Rounded: %.2lf\n", number, roundUp);

  // float cubed = pow(2, 3);

  // printf("squared: %.2lf\n", cubed);


  return 0;
}
