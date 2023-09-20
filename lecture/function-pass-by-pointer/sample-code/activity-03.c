#include <stdio.h>

/*
 *
 * Function Prototypes/Declarations
 *
 */
void read_fraction(int *p_num, int *p_den);
int gcd(int x, int y);
void add_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d);
void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d);
void reduce_fraction(int *p_n, int *p_d);
void print_fractions(int n, int d);

/*
 *
 * Function Definitions
 *
 */
int gcd(int x, int y) {
  int rem = 1, gcd;
  while (rem != 0) {
    if (y == 0) {
      gcd = x;
      rem = 0;
    }

    else {
      gcd = y;
      rem = x % y;
      x = y;
      y = rem;
    }
  }
  return gcd;
}

void print_fractions(int n, int d) {
  if (n == 0)
    printf("0");
  else if (d == 0)
    printf("NaN");
  else if (d == 1)
    printf("%d", n);
  else
    printf("%d/%d", n, d);
}

int main(void) {
  int n1, d1, n2, d2, n, d;

  char op;

  read_fraction(/* complete me */);

  printf("Enter the operator: ");

  scanf("%*c%c", &op);

  read_fraction(/* complete me */);

  switch (op) {

  case '+': // call a function here

    break;

  case '-': // call a function here

    break;

  case '*': // call a function here

    break;

  case '/': // call a function here

    break;

  default:

    printf("This is not a valid operator");
  }

  // call a function here to make the answer into a reduced form

  // write your code here to complete the main function (call print_fractions as
  // needed)

  return 0;
}
