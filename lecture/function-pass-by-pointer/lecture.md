# Pointers and Functions with Passing by Pointers
Presenter: Alan Manuel Loreto Cornídez | MS in ECE Spring '23
Class: ECE 175 | Computer Programming For Engineering Applications

### Lecture Overview
- Limitations of reference by value
- The concept of Pointers
- Pointers in C 
- Functions and Pointers

## Limitations of Reference by Value
[Example](./sample-code/01-sample.c)

Suppose we have a function `circle` that we want to use to calculate the area and circumference of a circle of radius, `r`.

```c
void circle(float r, float a, float c)
{
  a = PI * r * r; // computation of area
  c = 2 * PI * r; // computation of circumference
}
```

What happens if we call our circle function in our main function?

```c
int main(int argc, char **argv)
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
```

Show `01-sample.c`


# The Concept of Pointers


## What is a Pointer?

**Pointer**: a variable containing the address of another variable. 

A pointer can also be defined as such: A label used to refer to (point to) a memory address.

**In other words, a pointer variable just holds a number value**. This value just so happens to correspond to the address of other variables.

### Examples of Pointers in Real Life:
1. **Page Numbers** in a book or power point slides.
	- Page numbers are pointers to the contents of a particular page.
2. **Mailing Addresses** and Mailbox Numbers
	- The contents (letters) of a particular mailbox can be retrieved by referring to the mail box number (P.O. Box) when you're at the post office


## Pointers in C

In programming contexts, a pointer holds a numerical value.

![[Pasted image 20230919185216.png]]


## Why do we need pointers?

- **Faster memory access and usage via memory referencing**
	- Memory access speed was critical when C was developed (This is still the case for high performance applications)

- **Saving memory space**
	- No need to hold local copies of variables inside functions
	- Still required for programming resource-constrained devices such as micro-controllers (`Arduinos` use micro-controllers)
	- Can pass values to a function by pointer

- **Downsides**
	- Pointers usually make program tracking/reading more complicated.






# Syntax Definitions

## Declaration of Pointers

```
{data type} *{name of pointer};
```

Examples:
```c
FILE *input;
int *myIntPointer;
float *myFloatPointer;
```

`*` is used to denote that a variable is a pointer.

**Why do we assign a data type to a pointer?**
Again, pointers are variables that hold integer values (memory addresses). So why do we need to assign them a memory address?

**Answer**: Pointers let you access the contents of the address that the pointer is holding. (Different data types are use different amounts of bits, so the compiler needs the data type to make sure it manipulates the correct number of bits).
	- `char`: 8 bits
	- `short`: 16 bits
	- `int`: 32 bits
	- `double`: 64 bits

More generally, the compiler uses the data type of the pointer to manipulate numbers correctly.


## Declaration of Addresses:

Use an `&` operator to get the address of a variable.

Example:
```c
// Declare my pointer variable.
int *myIntPointer;

// Declare my integer variable.
int myInt;

// Set my pointer variable to the address of my integer variable.
myIntPointer = &myInt;
```



## Access The Content of a Variable Pointed to by a Pointer

Use the indirection or deference operator `*`.

Example:
```c
// declare integer pointers
int *p, i, var1;

// p points to i
p = &i;

// the content of memory cell pointed by p is assigned the value 10
*p = 10;

// variable var1 is assigned the contents of memory cell pointed by p
var1 = *p;
```

What happens if we run this code?

[Example 2](./sample-code/02-sample.c)


Again, the pointer type and the value or variable must match



## You have already used pointers!

When you're reading files:
```c
// declaration of a pointer of type FILE
FILE *inp;

// inp keeps the address and other information where the text file is located
inp = fopen("filename", "r"); 

// A variable to store file input.
int x;

// Using the file pointer to store the value at the location (address) of x.
fscanf(inp, “%d”, &x);
```


To scan for keyboard input
```c
//integer variable i is declared. The memory space is allocated for i
int i;

// scanf receives as input the address of variable i. when it gets value entered by a user it stores the value in the variable i
scanf("%d", &i);

```

# Exercises

## Exercise 1 | An Example Using Pointers

```c
#include<stdio.h>

int main(void)
{
	int var1 = 123;
	int var2 = 456;	
	
	int *p = NULL;
	
	p= &var1;
	
	*p=10;
	var2 = *p+10;
	
	printf("%d %d %d\n", var1, var2, *p);
	printf("%p %p %p\n", &var1, &var2, p);
	
	return (0);
}
```






























Here is a quick demo to show how a pointer is used in a basic way.
```c
int main()
{
    // Create a pointer.
    int* myPointer;

	// Initialize my number.
    int myNumber = 39;
    
    // Set my pointer equal to the address of myNumber.
    myPointer = &myNumber;

    // Print Statements
    printf("My Number: %d\n", myNumber);
    printf("Address of myNumber: %d\n", myPointer);
    printf("Using a pointer to print the value of myNumber: %d", *myPointer);
    
    return 0;
}
```
