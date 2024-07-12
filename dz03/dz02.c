#include <stdio.h>
int main(void)
{
    int sum, x = 1;

    sum = 0;
    while(x <= 10)
    {
        sum += x;
        ++x;
    }

    printf("Sum = %d\n\n", sum );

    int product = 5;
    int result = 5;
    x = 5;

    printf("product = %d, x = %d\n", product *= x++, x);
    product = 5;
    result = 5;
    x = 5;
    printf("product = %d, x = %d\n\n", result = ++x + x, x );

    return 0;
}
