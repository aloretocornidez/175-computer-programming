

#include <math.h>
#include <stdio.h>

// function declaration (prototypes): these tell the compiler that the functions
// exist and that you can use them.
float squared(float input);
void doSomething();

int main() {

  // doSomething();             // call my function.
  // float myNum = squared(10); // call function and plug in my arguments (10)
  //
  // printf("%.2lf\n", myNum);
  //

  // open the file
  FILE *fp = fopen("nums.txt", "r");

  // check if the file was opened correctly
  if (fp == NULL) {
    printf("File not found.\n");
    return -1;
  }



  int num = 1000;
  int minimum = num;
  while(1)
  {
    scanf(" %d", &num);




  // read from the file as long as we have valid input h
  while ( !feof(fp)) {
    int myInt;

    // fscanf is like scanf, just put the FILE variable at the beginning.
    fscanf(fp, " %d", &myInt);

    printf("%d\n", myInt);
  }

  




  // close the file
  fclose(fp);

  return 0;
}

// voide functions do not return anything
void doSomething() {
  printf("Hello World\n");
  printf("Hello Manny\n");
  printf("Hello Rachel\n");
  printf("Hello Annie\n");
}

// this function HAS to return a float value.
// it also uses an input of type float.
float squared(float banana) {
  float squared = banana * banana;
  return squared;
}
