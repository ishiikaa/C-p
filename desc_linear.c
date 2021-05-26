#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 7; i > 0; i--){
		for (int j = 1; j < i; j++){
			printf("%i ", j);
		}
		printf("\n");
	}
	return 0;
}

