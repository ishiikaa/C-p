#include <stdio.h>

// Output
// 1 1 1
// 2 2 2
// 3 3 3

#define endl "\n"

int main(){
	for (int i = 0; i < 3; i++){
		for (int j = 1; j < 4; j++){
			printf("%d ", (i * 3) + j);
		}
		printf(endl);
	}
	return 0;
}