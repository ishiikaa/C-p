// Write a menu driven C program to perform various arithmentic ops

#include <stdio.h>

int main(){
	short user_in;
	do{
		double a, b;
		double res;
		short in;
		printf("Enter a, b in format <a>, <b> : ");
		scanf("%lf, %lf", &a, &b);
		printf("\nSelect operation : ");
		printf("\n'--- 1 : Addition");
		printf("\n'--- 2 : Subtraction");
		printf("\n'--- 3 : Multiplication");
		printf("\n'--- 4 : Division");
		printf("\n'--- 0 : Exit");
		printf("\n\nSelect op : ");
		scanf("%hi", &in);
		user_in = in;
		switch(in){
			case 0:
				break;
			case 1:
				res = a + b;
				printf("Answer is %f\n", res);
				break;
			case 2:
				res = a - b;
				printf("Answer is %f\n", res);
				break;
			case 3:
				res = a * b;
				printf("Answer is %f\n", res);
				break;
			case 4:
				res = a + b;
				printf("Answer is %f\n", res); 
				break;
		}
	} while (user_in != 0);
	return 0;	
}