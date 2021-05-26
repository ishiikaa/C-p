#include <stdio.h>

int main(){
	int responses[5];
	int sum = 0;
	for (int i = 0 ; i < 5; i++){
		printf("\nEnter number %i : ", i);
		scanf(" %i", &responses[i]);
	}
	for (int i = 0 ; i < 5; i++){
		sum += responses[i];
	}
	printf("Final sum : %i", sum);
	return 0;
}