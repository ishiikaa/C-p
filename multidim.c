#include <stdio.h>

int main(int argc, char const *argv[])
{
	int answer;
	const int r, c;
	printf("\nEnter number of rows : ");
	scanf(" %i", &r);
	printf("\nEnter number of columns : ");
	scanf(" %i", &c);
	int matrix[r][c];
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			printf("Enter number at [%i, %i] : ", i + 1, j + 1);
			scanf(" %i", &answer);
			matrix[i][j] = answer;
		}
	}
	printf("Array is : \n");
	for (int i = 0; i < r; i++){
		printf("[ ");
		for (int j = 0; j < c; j++){
			printf("%i ", matrix[i][j]);
		}
		printf("]\n");
	}
	return 0;
}
