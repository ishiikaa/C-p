#include <stdio.h>

int main(){
	int limit;
	char left, center, right;
	printf("Enter number of lines : ");
	scanf(" %i", &limit);
	printf("\nEnter left character : ");
	scanf(" %1c", &left);
	printf("\nEnter center character : ");
	scanf(" %1c", &center);
	printf("\nEnter right character : ");
	scanf(" %1c", &right);
	// printf("\n");
	for (int i = 1; i < limit; i += 2){
		for (int j = 0; j < (limit - i) / 2; j++){
			printf("%c", left);
		}
		for (int k = 0; k < i; k++){
			printf("%c", center);
		}
		for (int l = 0; l < (limit - i) / 2; l++){
			printf("%c", right);
		}
		printf("\n");
	}
	return 0;
}
