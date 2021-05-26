#include <stdio.h>
#include <math.h>

int main(){
	char bin[8];
	printf("Enter 8 bit binary : ");
	scanf("%s", bin);
	int res = 0;
	for (int i = 0; i < (sizeof(char) * 8); i++){
		int value = bin[i];
		value -= 48;
		res += (int) pow(2, (8 - i)) * value;
	}
	printf("%i", res);
	return 0;
}