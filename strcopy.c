#include <stdio.h>

int main(){
	char str1[8], str2[8];
	printf("\nEnter first string : ");
	scanf("%s", str1);
	printf("\nEnter seconds string : ");
	scanf("%s", str2);
	for (int i = 0; i < 8; i++){
		str1[i] = str2[i];
	}
	printf("\nFirst string after copy is : %s", str1);
	return 0;
}