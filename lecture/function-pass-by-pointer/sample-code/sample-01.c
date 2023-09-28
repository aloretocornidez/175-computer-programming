#include <stdio.h>

#define PI 3.14

void circle(float r, float a, float c)
{
  a = PI * r * r; // computation of area
  c = 2 * PI * r; // computation of circumference
}

int main(void)
{

  // Create our variables.
  float r;
  float a = 0;
  float c = 0;


  // User enters the radius of the circle.
  printf("Enter the radius of the circle: ");
  scanf("%f", &r);

  // Call the circle function to calcualte the area and circumfrence.
  circle(r, a, c);

  // Print the area and circumfrence of the circle.
  printf("Area: %.1f, Circumference: %.1f\n", a, c);

  return 0;
}
