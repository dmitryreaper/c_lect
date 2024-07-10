#include <stdio.h>
int main(void)
{
    int number_one, number_two = 0;

    printf("Введите 2 числа: ");
    scanf("%d %d", &number_one, &number_two);
    printf("a + b = %d\n", number_one + number_two);
    printf("a - b = %d\n", number_one - number_two);
    printf("a * b = %d\n", number_one * number_two);
    printf("a / b = %d\n", number_one / number_two);
    printf("a %% b = %d\n", number_one % number_two);

    if(number_one > number_two)
        printf("Number one is larger\n");
    else if(number_one == number_two)
        printf("These numbers are equal\n");
    else
        printf("Number two is larger");

    return 0;
}
