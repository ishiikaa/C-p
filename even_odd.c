#include <stdio.h>

int main(){
	int num;
	printf("\nEnter a number : ");
	scanf("%i", &num);
	if (num % 2 == 0){
		printf("\nNumber %i is even!", num);
	} else {
		printf("\nNumber %i is odd!", num);
	}
	return 0;
}