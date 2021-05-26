#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 1; i < 10; i++){
		for (int j = i; j > 0; j--){
			printf("%i ", j);
		}
	printf("\n");
	}
return 0;
}

