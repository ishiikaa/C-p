#include <stdio.h>
void main()
{
        int i;
        printf(" First 10 numbers which are divisible by 3 and 5 \n");
 
        for (i=1; i<=151; i++)
        {
               if (i%3==0 && i%5==0)
                  printf(" %d", i);
        }
  
    
} 