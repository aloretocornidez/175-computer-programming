#include <stdio.h>

typedef struct House_s {

  int bedrooms;
  int bathrooms;
  double cost;
  char color;

} House;

void initilizeHouse(House *taco) {

  taco->cost = 10000000;
  taco->bedrooms = 2;
  taco->bathrooms = 2;
  taco->color = 'b';
}

void printHouse(House house) {

  printf("%.2f %d %d %c", house.cost, house.bedrooms, house.bathrooms, house.color);

  int tmpe;
  int ic;
  int tdnb;


}
int main(void) {

  House apple;
  House houseList[40];

  for (int i = 0; i < 40; i++) {
    initilizeHouse(&houseList[i]);
  }

  for (int i = 0; i < 40; i++) {
    printHouse(houseList[i]);
  }

  return 0;
}
