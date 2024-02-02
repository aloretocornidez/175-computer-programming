/* 
 *
 * File Name: activity-03-completed.c
 * Purpose: This is a simple program that allows the user to conduct operations on fractions.
 * The solution is then printed on the standard output.
 * Author: Dr. Thamvichai
 * Modified by Alan Manuel Loreto Cornídez.
 *
 */


#include <stdio.h>

/*
 *
 * Function Prototypes/Declarations
 *
 */

// Prompts user to enter the fraction and assigns teh user entry.
void read_fraction(int *p_num, int *p_den);

// Calculates the greatest common ddenominator of x and y.
int gcd(int x, int y);

// Adds two fractions and assigns the value to p_n and p_d.
void add_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d);

// Multiplies two fractions and assigns the value to p_n and p_d.
void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d);

// Reduces the fraction entered.
void reduce_fraction(int *p_n, int *p_d);

// A wrapper function to print the numerator and denominator as a fraction.
void print_fractions(int n, int d);

// A wrapper function to print the final solution. (Not necessary, but this
// makes the main function look nicer). Also, since we are not modifing the
// values, we do not need to use pointers if we don't want to.
void print_solution(int n1, int d1, int n2, int d2, int n, int d, char op);

/*
 * Main Function
 */
int main(void) {

  // User entry variables.
  int n1, d1, n2, d2;

  // Final output variables.
  int n, d;

  // The operation (+, -, *, /)
  char op;

  // Function Declaration
  // void read_fraction(int *p_num, int *p_den);
  // We can use a pointer variable, then assign our pointer to the address of
  // the variable. We can also just pass the address of the variable as well.
  read_fraction(&n1, &d1);

  printf("Enter the operator: ");

  scanf("%*c%c", &op);

  read_fraction(&n2, &d2);

  switch (op) {

  case '+': // call a function here
    add_fractions(n1, d1, n2, d2, &n, &d);
    break;

  case '-': // call a function here
    add_fractions(n1, d1, -n2, d2, &n, &d);
    break;

  case '*': // call a function here
    multiply_fractions(n1, d1, n2, d2, &n, &d);
    break;

  case '/': // call a function here
    // recall, (n1/d1) / (n2/d2) = (n1/d1) * (d2/n2)
    multiply_fractions(n1, d1, d2, n2, &n, &d);
    break;

  default:

    printf("This is not a valid operator");
    return -1;
  }

  // Reduce the fractions.
  reduce_fraction(&n, &d);

  // Print the solution on the output.
  print_solution(n1, d1, n2, d2, n, d, op);

  return 0;
}

/*
 *
 * Function Definitions
 *
 */
int gcd(int x, int y) {
  int rem = 1;
  int gcd;

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

  return;
}

void read_fraction(int *p_num, int *p_den) {
  printf("Enter the numerator and the denominator of the fraction: ");
  scanf("%d %d", p_num, p_den);

  return;
}

void add_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d) {

  *p_n = n1 * d2 + n2 * d1;
  *p_d = d1 * d2;

  return;
}

void multiply_fractions(int n1, int d1, int n2, int d2, int *p_n, int *p_d) {

  *p_n = n1 * n2;
  *p_d = d1 * d2;

  return;
}

void reduce_fraction(int *p_n, int *p_d) {
  int temp;
  temp = gcd(*p_n, *p_d);
  *p_n = *p_n / temp;
  *p_d = *p_d / temp;
}

void print_solution(int n1, int d1, int n2, int d2, int n, int d, char op) {
  print_fractions(n1, d1);
  printf(" %c ", op);
  print_fractions(n2, d2);
  printf(" = ");
  print_fractions(n, d);
  printf("\n");

  return;
}
