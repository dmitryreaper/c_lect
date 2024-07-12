/* polindrom */
#include <stdio.h>
#include <stdbool.h>

unsigned int getReverse(int number);
bool isPalindrom(const unsigned int number);

int main(void)
{
    int number;
    printf("Введите число: ");
    scanf("%d", &number);
    if (isPalindrom(number))
    {
        printf("%d Это палиндром\n", number);
    }
    else
    {
        printf("%d Это не палиндром\n", number);
    }
}

unsigned int getReverse(int number)
{
    unsigned r = number % 10;
    while(number/=10)
    {
        r = r * 10 + number % 10;
    }
    return r;
}

bool isPalindrom(const unsigned int number)
{
   return number == getReverse(number);
}
