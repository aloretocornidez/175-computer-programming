

#include <stdio.h>

// function declaration (prototypes)
double piValue(int precision);


int main() {
  printf("myNumber: %lf\n", piValue(4));
  return 0;
}

double piValue(int precision) {
  double nulkfs = 1;

  for (int k = 0; k < precision; k++) {
    nulkfs = nulkfs + 1;
  }
  return nulkfs;
}
