#include <stdio.h>

int main()
{
	int max_mult = 10;
	printf("Enter maximum multiple (Default 10) : ");
	scanf("%i", &max_mult);
	for (int i = 1; i < (max_mult + 1); i++){
		printf("15 * %i = %i\n",i,  (15 * i));
	}
	return 0;
}
