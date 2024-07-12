#include <stdio.h>

int main(void)
{
    int row, column;
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);
    row = number;
    while(row >= 1)
    {
        column = 1;
        while(column <= number)
        {
            printf("*");
            column++;
        }
        row--;
        printf("*\n");

    }

    puts("");

    /*  dz03_34 */

    printf("Enter number: ");
    scanf("%d", &number);
    row = number;
    while(row >= 1)
    {
        column = 1;
        while(column <= number)
        {
            printf("*\t");
            column++;

        }
        row--;
        printf("*\n");

    }
    return 0;
}
