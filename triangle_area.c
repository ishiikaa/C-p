#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv){
	float tbase, theight, tarea;
	printf("Input length of base - ");
	scanf("%f", &tbase);
	printf("\nInput height of triangle - ");
	scanf("%f", &theight);
	tarea = 0.5 * tbase * theight;
	printf("\nArea of triangle - %f", tarea);
	return 0;
}