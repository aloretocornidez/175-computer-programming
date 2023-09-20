#include <stdio.h>

#define PI 3.14

// Step 5: Change the function definition.
// void circle(float *r, float *a, float *c) {
void circle(float *rPtr, float *aPtr, float *cPtr) {

  float r = *rPtr;

  *aPtr = PI * r * r; // computation of area
  *cPtr = 2 * PI * r; // computation of circumference
}

int main(int argc, char **argv) {

  // Create our variables.
  float r;
  float a = 0;
  float c = 0;

  // Step 1: Create Pointers
  float *rPtr, *aPtr, *cPtr;

  // Step 2: Initialize the pointers.
  rPtr = &r;
  aPtr = &a;
  cPtr = &c;

  // User enters the radius of the circle.
  printf("Enter the radius of the circle: ");
  scanf("%f", &r);

  // Call the circle function to calcualte the area and circumfrence.
  // Step 3: Change the Function Call.
  circle(rPtr, aPtr, cPtr);

  // Print the area and circumfrence of the circle.
  printf("Area: %.1f, Circumference: %.1f\n", a, c);

  return 0;
}
