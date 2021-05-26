#include <stdio.h>

// Question - To write a C program to declare the variables of datatypes (int, char, float, unsigned char, double, long, long double)

// Broken Program - Most probably MinGW to Windows Errors

int main(){
	int myInt;
	char myChar;
	float myFloat;
	unsigned char myUChar;
	double myDouble;
	long myLong;
	long double myLDouble;
	
	// User input
	
	printf("\nEnter an integer : ");
	scanf(" %i", &myInt);
	printf("\nEnter an char : ");
	scanf(" %c", &myChar);
	printf("\nEnter an float : ");
	scanf(" %f", &myFloat);
	printf("\nEnter an unsigned char : ");
	scanf(" %c", &myUChar);
	printf("\nEnter a double : ");
	scanf(" %d", &myDouble);
	printf("\nEnter a long : ");
	scanf("  %ld", &myLong);	
	printf("\nEnter a long double : ");
	scanf(" %LF", &myLDouble);

	// Output

	printf
	("\nYou entered - \
	\nInteger : %i"\
	"\nChar : %c"\
	"\nFloat : %f"\
	"\nUnsigned char : %c"\
	"\nLong : %ld"\
	"\nLong Double : %LF",
	myInt, myChar, myFloat, myUChar, myDouble, myLong, myLDouble
	);

	return 0;
}