

#include <math.h>
#include <stdio.h>

float apple(float banana);
void doSomething(int asdf);

int main() {

  // float myNum;
  //
  // doSomething(3);
  // myNum = apple(10);
  //
  // printf("My Number: %.2f\n", myNum);

  // open a file so we can work with it
  FILE *orthodox = fopen("./nums.txt", "r");

  // check if we opened the file correctly
  if (orthodox == NULL) {
    printf("Your file was not opened correctly\n");
    return -1;
  }

  int value;
  // iterate through the entire file while it's open
  while (fscanf(orthodox, " %d", &value) != EOF) {
    // while (!feof(orthodox)) {

    // fscanf(orthodox, " %d", &value);

    printf("%d\n", value);
  }

  // close the file
  fclose(orthodox);
























  return 0;
}

void doSomething(int times) {

  for (int i = 0; i < times; i++) {
    printf("%d\n", i);
    printf("Hello World\n");
    printf("Hello Manny\n");
    printf("Hello Jacob\n");
    printf("Hello Annie\n");
  }
}

float apple(float banana) {

  float mustang = banana * banana;

  return mustang;
}
