#include <stdio.h>
int main(void)
{
    int x,y,z;
    int product = 3;
    int total = 50;
    int count = 11;
   
    printf("Enter number (a, b): ");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Z = %d\n\n", ++z);    /* z = z + 1 */

    printf("Product = %d\n", product *= 2);
    printf("Product = %d\n\n", product = product * 2);

    if(count>10)
    {
        printf("Значение count больше 10\n\n");
    }

    printf("Total = %d, x = %d\n", total, x);
    --x;
    printf("Total = %d, x = %d\n", total -= x, x);
    x--;
    printf("Total = %d, x = %d\n\n", total += x, x);

    float number = 123.4567;
    float number_two = 3.14159;

    printf("Float number = %.2f\n", number);
    printf("Float number two = %.3f\n\n", number_two);

    return 0;
}
