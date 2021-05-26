
// Write a C prog to read char, disp whether char is vowel or consonant
// use if else, switch case, else if

#include <stdio.h>

int main(){
	char character;
	printf("Enter a character : ");
	scanf("%1c", &character);
	switch(character){
		case 'a':
			printf("Character %c is a vowel\n", character);
			break;
		case 'e':
			printf("Character %c is a vowel\n", character);
			break;
		case 'i':
			printf("Character %c is a vowel\n", character);
			break;
		case 'o':
			printf("Character %c is a vowel\n", character);
			break;
		case 'u':
			printf("Character %c is a vowel\n", character);
			break;
		default:
			printf("Character %c is a consonant\n", character);
			break;
	}
	return 0;
}	