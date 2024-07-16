#include <stdio.h>
#include <math.h>

int main(void)
{
    int years = 0;
    printf("Напишите сколько вам лет: ");
    scanf("%d", &years);

    printf("Ваш возраст в секундах равен: %d\n", years * (int)(3.156*pow(10,7)));
    
    return 0;

}
