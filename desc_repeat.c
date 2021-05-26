#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 7; i > 0; i--){
		for (int j = 0; j < i; j++){
			printf("%i ", i);
		}
		printf("\n");
	}
	return 0;
}

