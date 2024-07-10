#include <stdio.h>
int main(void)
{
    int number;
    printf("Введите число: ");
    scanf("%d", &number);
    number %= 2;
    if(number == 0)
        printf("Число четное\n");
    else
        printf("Число нечетное\n");

    return 0;
}
