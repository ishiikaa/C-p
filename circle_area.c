#include <stdio.h>

int main(int argc, char** argv){
	float cradius, cperimeter, carea, pi ,cradius_square;
	printf("Input radius of circle - ");
	scanf("%f", &cradius);
	pi = 3.141;
	cperimeter = 2 * pi * cradius;
	cradius_square = cradius * cradius;
	carea = pi * cradius_square;
	printf("Perimeter of circle - %f\nArea of circle - %f", cperimeter, carea);
	return 0;
}