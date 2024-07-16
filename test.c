#include <stdio.h>

int main(void)
{
    int number_one, number_two;

    printf("Enter your number: ");
    scanf("%d", &number_one);
    printf("Enter your number: ");
    scanf("%d", &number_two);

    number_one += number_two;
    printf("= %d", number_one);

    return 0;
}
