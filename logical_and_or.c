#include <stdio.h>

int main(){
	int a, b, c, d;
	printf("Enter number 1 : ");
	scanf("%d", &a);
	printf("\nEnter number 2 : ");
	scanf("%d", &b);
	printf("\nEnter number 3 : ");
	scanf("%d", &c);
	printf("\nEnter number 4 : ");
	scanf("%d", &d);
	if (a < b && c >= d){
		printf("\nA is less than B AND C is greater than or equal to D");
	}
	if (c <= b || a >= d){
		printf("\nC is lesser than or equal to B or A is greater than equal to D");
	}
	return 0;
}