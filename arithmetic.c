#include <stdio.h>

int ground(int dividend, int divisor){
	return (dividend - (dividend % divisor)) / divisor;
}

int main(){
	int a = 16;
	int b = 3;
	printf("A + B : %d\n", (a + b));
	printf("A - B : %d\n", (a - b));
	printf("A x B : %d\n", (a * b));
	printf("A / B : %d\n", (a / b));
	printf("A mod B : %d\n", (a % b));
	printf("A ground B : %i\n", (ground(a, b)));
}