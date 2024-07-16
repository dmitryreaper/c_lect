#include <stdio.h>

int main(void)
{
    double sm;
    printf("Введите рост в дюймах: ");
    scanf("%lf", &sm);

    printf("Рост в сантиметрах = %.2f\n", sm * 2.54);

    return 0;
}
