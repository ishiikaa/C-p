#include <stdio.h>

int main(){
	int a; 
	double b;
	printf("\nEnter an int : ");
	scanf("%d", &a);
	printf("\nEnter a double : ");
	scanf("%le", &b);
	printf("a * b = %f", (a * b));
	return 0;	
}