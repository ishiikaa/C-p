#include <stdio.h>

int main(int argc, char** argv){
	int asciival;
	char character;
	if (argc == 1){
		printf("Enter a single character : ");
		scanf("%1c", &character);
	} else {
		character = argv[1][0];
	}
	asciival = (int) character;
	printf("ASCII value is : %i\n", asciival);
	return 0;
}