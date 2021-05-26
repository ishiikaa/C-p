#include <stdio.h>

int main(){
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	printf("\nEnter first matrix [3x3]: \n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("\nEnter element at [%i, %i] : ", i, j);
			scanf(" %i", &arr1[i][j]);
		}
	}
	printf("\n------------------------------\n");
	printf("\nEnter second matrix [3x3]: \n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("\nEnter element at [%i, %i] : ", i, j);
			scanf(" %i", &arr2[i][j]);
		}
	}
	printf("\nAdding matrices together...\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("\nAdding elements at [%i, %i]...", i, j);
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("\nDone!");
		}
	}
	printf("\nNow printing matrix 1...\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%i\t", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nNow printing matrix 2...\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%i\t", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\nNow printing matrix 3...\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%i\t", arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
