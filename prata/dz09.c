#include <stdio.h>
int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    int y,x;
    while (count++ < 20)
	    sum = sum + count;
    printf("sum = %d\n", sum);
    x = y = 0;
    y = (4 + x++) + (6 + x++);
    printf("y = %d , x = %d\n", y, x);
    
    return 0;
}
