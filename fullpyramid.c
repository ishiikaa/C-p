#include <stdio.h>

int main(int argc, char const *argv[])
{	
	const int a = 10;
	for (int i = 0; i < a; i ++){
		for (int j = 0; j < (a - i); j++){
			printf(" ");
		}
		for (int k = 0; k < i * 2; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
