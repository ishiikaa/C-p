#include <stdio.h>

#define MAX_ARRAY_COUNT 15

int isEven(int input){
	if (input % 2) return 0;
	return 1;
}
 
int main(){
	int input_seq[MAX_ARRAY_COUNT], odds[MAX_ARRAY_COUNT], evens[MAX_ARRAY_COUNT];
	int oddCount = 0, evenCount = 0;
	for (int i = 0; i < MAX_ARRAY_COUNT; i++){
		printf("\nEnter number %i : ", i);
		scanf(" %i", &input_seq[i]);
	}

	for (int i = 0; i < MAX_ARRAY_COUNT; i++){
		int _ = input_seq[i];
		if (isEven(_)){
			evens[evenCount++] = _;
		} else {
			odds[oddCount++] = _;
		}
	}
	printf("\nEven Numbers : ");
	for (int e = 0; e < evenCount; e++){
		printf(" %i ", evens[e]);
	}

	printf("\nOdd Numbers : ");
	for (int o = 0; o < oddCount; o++){
		printf(" %i ", odds[o]);
	}

	return 0;
}