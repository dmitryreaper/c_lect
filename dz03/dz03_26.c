#include <stdio.h>
int main(void)
{
   int numbers = 2;
   int count = 0;
   printf("A\t A+2\t A+4\t A+6\n\n");

   while(count < 5)

   {
       printf("%d\t %d\t %d\t %d\n", numbers, ++numbers + 2, numbers + 5, numbers + 7);
       numbers += 2;
       count++;
   }

   return 0;
}
