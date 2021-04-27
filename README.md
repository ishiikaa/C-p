# c-j
#include <stdio.h>

int main(){
    int max;
    unsigned long long a = 0, b = 1, c;
    printf("Enter maximum numbers : ");
    scanf("%i", &max);
    printf("%I64i %I64i ", a, b);
    for (int i = 0; i < max; i++){
        c = a + b;
        printf("%I64i ", c);
        a = b;
        b = c;
    }
    return 0;

}
