#include <stdio.h>

int main(){
	char str[8], strrev[9];
	printf("\nEnter a string (8 characters) : ");
	scanf("%s", str);
	for (int i = 0; i < 8; i++){
		strrev[i] = str[7 - i];
		// printf("strrev[i] = %c | str[7 - i] = %c\n", strrev[i], str[7 - i]);
	}
	strrev[8] = '\0';
	printf("\nReversed String : %s", strrev);
	return 0;
}