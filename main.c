#include <conio.h>
#include <stdio.h>

void main(){
  int myInt;
  float myFloat;
  char myChar;
  printf("\nEnter an integer : ");
  scanf("%d", &myInt);
  printf("\nEnter an float: ");
  scanf("%f", &myFloat);
  printf("\nEnter an character : ");
  scanf(" %c", &myChar);
  printf("\nYou entered the following values\nInt : %d\nFloat : %f\nChar : %c", myInt, myFloat, myChar);
}