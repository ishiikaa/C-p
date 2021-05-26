#include <stdio.h>

int main(){
	int m_count = 10 ,i = 0;
	while (m_count != 0){
		i += 1;
		if (i % 3 ==0 && i % 5 == 0){
			printf("Common multiple found : %i\n", i);
			m_count--;
		}
	}
	return 0;
}