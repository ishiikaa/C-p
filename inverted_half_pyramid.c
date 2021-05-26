#include <stdio.h>

int main(int argc, char const *argv[])
{
	const char star = '*';
	for (int i = 6; i > 0; i--){
		for (int j = 0; j < i; j++){
			printf("%c ", star);
		}
		printf("\n");
	}
	return 0;
}
