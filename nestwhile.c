#include <stdio.h>

int main(){
	int a = 0;
	while (a <= 26){
		int b = 65;
		while (b < (65 + a)){
			printf("%c", b);
			b++;
		}
		a++;
		printf("\n");
	}
}