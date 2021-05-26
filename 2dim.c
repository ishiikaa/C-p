#include <stdio.h>

int main(){
	int array[16][16];
	int row, col;
	printf("\nEnter number of rows : ");
	scanf(" %i", &row);
	printf("\nEnter number of columns : ");
	scanf(" %i", &col);
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			printf("\nEnter element at [%i, %i] : ", i, j);
			scanf(" %i", &array[i][j]);
		}
	}
	printf("\nYou entered : \n------------------------------------\n");
	for (int i = 0; i < row; i++){
		printf("|\t");
		for (int j = 0; j < col; j++){
			printf("%i\t|\t", array[i][j]);
		}
		printf("\n------------------------------------\n");
	}
	return 0;
}