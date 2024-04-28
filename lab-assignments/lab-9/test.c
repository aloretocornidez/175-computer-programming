

#include <stdio.h>
#include <string.h>

int main() {

  // declare the array.
  char banana[50];
  char apple[50];

  // prormpting the user for an entry
  printf("Enter string 1: ");
  scanf("%s", banana);

  // copy the strings
  strcpy(apple, banana);

  printf("Banana: %s\n", banana);
  printf("Apple copied from banana: %s\n", apple);

  // printf("Enter string 2: ");
  // scanf("%s", apple);

  // // Compare the two strings
  // if(strcmp(apple, banana) == 0)
  // {
  //   printf("Strings Match\n");
  // }

  // // printing the output
  // int stringSize = strlen(banana); // strlen: returns the size of the string
  //
  // printf("%s\n", banana);
  //
  // for (int i = 0; i < stringSize; i++) {
  //   printf("%c", banana[i]);
  // }
  // printf("\n");

  char destination[50];
  char source[50];
  char string1[50];
  char string2[50];

  return 0;
}

int pswdChecker(char password[]) {

  // check the length of the password
  if (strlen(password) < 8) {
    return 1;
  }

  // start checking that other critera have been met.
  int capitalCheck = 0;
  int specialCharCheck = 0;
  int numberCheck = 0;

  // iterate through the string and see if the test cases are passed.
  for (int i = 0; i < strlen(password); i++) {


    // check if there is a capital letter 
    if(password[i] >= 'A' && password[i] <= 'Z')
    {
      capitalCheck = 1;
    }
    // check if there is a number 
    // check if there is a special character

  }


  // did the string have a capital letter 
  if(capitalCheck == 0)
  {
    return 2;
  }
  // did the string have a number 
  // did the string have a special character


  // all tests passed.
  return 0;
}
