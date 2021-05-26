#include <stdio.h>

int main(){
	int myArray[10];
	for (int i = 0; i < 10; i++){
		printf("Enter number %i : ", i);
		scanf(" %i", &myArray[i]);
	}
	printf("You entered : |    ");
	for (int i = 0; i < 10; i++){
		printf("%i    |    ", myArray[i]);
	}
	printf("\n");
	printf("Memory Locations : |");
	for (int i = 0; i < 10; i++){
		printf("%i|", &myArray[i]);
	}
	return 0;
}
