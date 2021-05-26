#include <stdio.h>

int main(){
	int a, b;
	printf("\nEnter a number : ");
	scanf("%i", &a);
	printf("\nEnter another number : ");
	scanf("%i", &b);	
	int c = a & b;
	int d =  a | b;
	int e = a ^ b;
	printf("\na & b = %f\na | b = %f\na ^ b = %f\n", c, d, e);
	a = a<<3;
	b = b>>2;
	printf("a<<3 = %i\n", a);
	printf("b>>2 = %i", b);
	return 0;
}