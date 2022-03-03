/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int rate1 = 50;
  int rate2 = 40;
  float distance, amount;

  printf("Enter the distance (km) :");
  scanf("%f", &distance);

  if(distance <=30){
    amount = distance * rate1;
  }
  else{
    amount = (30 * rate1) + (distance - 30) * rate2;
  }
  
  printf("%.2f", amount);
  
  return 0;
}
