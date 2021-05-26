#include <stdio.h>
#include <string.h>

int main(){
	char userInput[10];
	printf("Enter a string : ");
	scanf("%s", userInput);
	char strrev[10];
	int len = strlen(userInput);
	for (int i = 0; i < len; i++){
		strrev[len - i - 1] = userInput[i];
	}
	strrev[len] = '\0';
	if (strcmp(userInput, strrev) == 0){
		printf("\nString %s is a palindrome!", userInput);
	} else {
		printf("\nString %s is not a palindrome!\nIt's resulting string is %s", userInput, strrev);
	}
	return 0;
}