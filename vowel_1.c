
// Write a C prog to read char, disp whether char is vowel or consonant
// use if else, switch case, else if

#include <stdio.h>

int main(){
	char character;
	printf("Enter a character : ");
	scanf("%1c", &character);
	if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
		printf("Character %1c is a vowel\n", character);
	} else {
		printf("Character %1c is a consonant\n", character);
	}
	return 0;
}