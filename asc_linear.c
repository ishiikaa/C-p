#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count = 1;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < i; j++){
			printf("%i ", count);
			count++;
		}
		printf("\n");
	}
	return 0;
}

