#include <stdio.h>

int main(){
	double a, b;
	printf("Enter one number : ");
	scanf("%lf", &a);
	printf("\nEnter another number : ");
	scanf("%lf", &b);
	double c = a < b ? a : b;
	printf("\nLesser number is %lf", c);
	return 0;
}