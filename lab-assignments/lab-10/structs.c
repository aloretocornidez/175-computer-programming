
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define BUFFER 1000

typedef struct cars {
  int cylynders;
  char color[100];
  float cost;
  bool isElectric;

} Car;

void initializeCar(Car *car) {

  car->cost = 1000000;
  strcpy(car->color, "Red");
}

int main(void) {

  // code to read files
  Car apple;
  apple.cost = 1000000;
  strcpy(apple.color, "Red");

  Car carList[40];

  for (int i = 0; i < 40; i++) {

    carList[i].cost = 1000000;
    strcpy(carList[i].color, "Red");

    printf("House %d\n", i);
    printf("Color:  %s\n", carList[i].color);
    printf("Cost: %.2lf\n", carList[i].cost);
    printf("Bedrooms: %d\n", carList[i].bedrooms);
    printf("Bathrooms: %d\n", carList[i].bathrooms);
    printf("\n");
  }
}
