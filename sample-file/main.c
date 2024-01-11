#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 50

double squareRoot(double in) {
  double output = sqrt(in);
  return output;
}

void processUserInput(char *input) {
  if (fgets(input, BUFFER_SIZE, stdin) == NULL) {
    printf("Failed to read input stirng.\n");
    exit(-1);
  }

  // remove trailing whitespace.
  input[strcspn(input, "\n")] = '\0';
}

void getName(char *input) {

  // read input user string.
  printf("Enter your name: ");

  processUserInput(input);
}

int main() {

  char name[BUFFER_SIZE];

  getName(name);

  printf("Hello %s!!!\n", name);

  return 0;
}
