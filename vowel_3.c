
// Write a C prog to read char, disp whether char is vowel or consonant
// use if else, switch case, else if

#include <stdio.h>

int main(int argc, char** argv){
	char character;
	printf("Enter a character : ");
	scanf("%1c", &character);
	if (character == 'a'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'e'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'i'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'o'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'u'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'A'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'E'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'I'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'O'){
		printf("Character %c is a vowel\n", character);
	} else if (character == 'U'){
		printf("Character %c is a vowel\n", character);
	} else {
		printf("Character %c is a consonant\n", character);
	}
	return 0;
}