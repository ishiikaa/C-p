#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

int main(){
	int matrix1[ROWS][COLS];
	int matrix2[ROWS][COLS];
	int matrix3[ROWS][COLS];
	printf("Enter first matrix : \n");
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			printf("Enter element at [%i, %i] : ", i, j);
			scanf(" %i", &matrix1[i][j]);
		}
	}
	system("cls");
	printf("Enter second matrix : \n");
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			printf("Enter element at [%i, %i] : ", i, j);
			scanf(" %i", &matrix2[i][j]);
		}
	}
	system("cls");
	printf("Printing matrix 1...\n");
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			printf("%i\t", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("Printing matrix 2...\n");
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			printf("%i\t", matrix2[i][j]);
		}
		printf("\n");
	}
	printf("Multiplying matrices...\n");
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			int tempres = 0;
			for (int k = 0; k < 3; k++){
				int n = matrix1[i][k];
				int m = matrix2[k][j];
				tempres += n * m;
			}
			matrix3[i][j] = tempres;
		}
	}
	printf("\n---------------\nDONE!\n---------------\n");
	printf("Printing matrix 3...\n");
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			printf("%i\t", matrix3[i][j]);
		}
		printf("\n");
	}
	return 0;
}