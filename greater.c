#include <stdio.h>

int main(){
    int a, b ,c;
    printf("\nEnter first number : ");
    scanf(" %i", &a);
    printf("\nEnter second number : ");
    scanf(" %i", &b);
    printf("\nEnter third number : ");
    scanf(" %i", &c);
    if (a > b && b > c){
        printf("\nA  (%i) > B  (%i), B  (%i) > C  (%i)", a, b, b, c);
    } else if (a > c && c > b){
        printf("\nA  (%i) > C  (%i), C  (%i) > B  (%i)", a, c, c, b);
    } else if (b > c && c > a){
        printf("\nB  (%i) > C  (%i), C  (%i) > A  (%i)", b, c, c, a);
    } else if (b > a && a > c){
        printf("\nB  (%i) > A  (%i), A  (%i) > C  (%i)", b, a, a, c);
    } else if (c > a && a > b){
        printf("\nC  (%i) > A  (%i), A  (%i) > B  (%i)", c, a, a, b);
    } else {
        printf("\nC  (%i) > B  (%i), B  (%i) > A  (%i)", c, b, b, a);
    }
    return 0;
}
