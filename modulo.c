#include <stdio.h>

int main(){
	int a, b;
	printf("\nEnter an int : ");
	scanf("%i", &a);
	printf("\nEnter another int : ");
	scanf("%i", &b);
	printf("Modulo of a and b = %d", (a % b));
	return 0;	
}