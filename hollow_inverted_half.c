#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 6; i > 0; i--){
		printf("*");
		for (int j = 0; j < (6 - i); j++){
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}
