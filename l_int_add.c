#include <stdio.h>

int main(){
	long int a, b;
	printf("\nEnter a long int : ");
	scanf("%li", &a);
	printf("\nEnter another long int : ");
	scanf("%li", &b);
	printf("Sum of a and b = %li", (a + b));
	return 0;	
}