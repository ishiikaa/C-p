#include <stdio.h>

int main(){
	int input_seq[10], result;
	for (int i = 0; i < 10; i++){
		printf("\nEnter element at index %i : ", i);
		scanf(" %i", &input_seq[i]);
	}	
	for (int i = 0; i < 10; i++){
        result += input_seq[i];
    }
    printf("\nResult is : %i", result);
	return 0;
}