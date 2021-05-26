#include <stdio.h>

int main(){
    int pairs[5][2];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 2; j++){
			printf("Enter element at [%i, %i] : ", i, j);
			scanf(" %i", &pairs[i][j]);
		}
	}
	for (int i = 0; i < 5; i++){
		printf("|");
		int column_sum = 0;
		for (int j = 0; j < 2; j++){
			printf(" %i |", pairs[i][j]);
			column_sum += pairs[i][j];
		}
		printf(" Sum is : %i", column_sum);
		printf("\n");
	}
	return 0;
}