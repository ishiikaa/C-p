#include <stdio.h>

int main(){
	int maxRow;
	printf("Enter max rows : ");
	scanf("%d", &maxRow);
	for (int i = 0; i < (maxRow + 1); i++){
		for (int j = 0; j < i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}