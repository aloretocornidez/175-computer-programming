#include <stdio.h>

/*
 *
 * Function Prototypes/Declarations
 *
 */
void read_fraction(int *p_num, int *p_den); // Complete
int gcd(int x, int y);                      // Completed
void add_fractions(int n1, int d1, int n2, int d2, int *p_n,
                   int *p_d); // Completed
void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n,
                        int *p_d); // Completed
void reduce_fraction(int *p_n, int *p_d);
void print_fractions(int n, int d); // Complete

int main(void) {
  int n1, d1, n2, d2, n, d;

  char op;

  int *ptrN = &n;
  int *ptrD = &d;

  // void read_fraction(int *p_num, int *p_den); // Complete
  read_fraction(&n1, &d1);

  printf("Enter the operator: ");

  scanf("%*c%c", &op);

  // read_fraction(/* complete me */);

  read_fraction(&n2, &d2);

  switch (op) {

  case '+': // call a function here
    add_fractions(n1, d1, n2, d2, &n, &d);
    break;

  case '-': // call a function here
    add_fractions(n1, d1, -n2, d2, &n, &d);
    break;

  case '*': // call a function here

    multiply_fractions(n1, d1, n2, d2, ptrN, &d);
    break;

  case '/': // call a function here

    // recall: (n1/d2) / (n2/d2) = (n1/d1) * (d2/n2)
    multiply_fractions(n1, d1, n2, d2, ptrN, ptrD);
    break;

  default:

    printf("This is not a valid operator");
  }

// void reduce_fraction(int *p_n, int *p_d)
  reduce_fraction(ptrN, &d);
  print_fractions(n, d);
  printf("\n");

  return 0;
}

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

void read_fraction(int *p_num, int *p_den) {

  // Prompt the user for entry
  printf("Enter the numerator and the denominator of the fraction: ");

  // Scan the user input
  scanf("%d %d", p_num, p_den);
}

void add_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d) {

  *p_n = n1 * d2 + n2 * d1;

  *p_d = d1 * d2;
}

void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d) {

  *p_n = n1 * n2;
  *p_d = d1 * d2;
}

void reduce_fraction(int *p_n, int *p_d) {

  int temp;

  temp = gcd(*p_n, *p_d);

  *p_n = *p_n / temp;
  *p_d = *p_d / temp;
}
