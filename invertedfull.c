#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 10; i > 0; i--)
	{
		for (int j = 0; j < (10 - i); j++){
			printf(" ");
		}
		for (int k = 0; k < i; k++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
