

#include <stdio.h>

int main() {

  int myInt = 3;

  // If/else chain started.
  if (myInt == 0) {
    printf("Hello World!!!\n");
  }

  // else always runs if none of the other branches in the chain are executed.
  else {

    printf("I'm here World!!!\n"); // when my in == 1
  }

  // if/else chain started
  if (myInt == 0) {
    printf("Goodbye World!!!\n"); // when my int == 2
  }
  
  // Note: lack of `else` means nothing gets executed if nothing matches.
  else if (myInt == 0) {

    printf("I don't know what you're doing.\n");
  }


  // Swtich statements have good applications as well.
  switch (myInt) {

  case 0:
    printf("Hello World!!!\n");
    printf("Goodbye World!!!\n");
  // If multiple cases apply for a single branch.
  case 1:
  case 2:
    printf("I'm Here World!!!\n");
    break;
  case 3:
    printf("I don't know what you're doing.\n");
    break;
  }

  return 0;
}
