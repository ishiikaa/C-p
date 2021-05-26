#include <stdio.h>

int main(){
	int input_seq[10];
	for (int i = 0; i < 10; i++){
		printf("\nEnter element at index %i : ", i);
		scanf(" %i", &input_seq[i]);
	}	
	for (int i = 9; i >= 0; i--){
		printf(" %i", input_seq[i]);
	}
	return 0;
}