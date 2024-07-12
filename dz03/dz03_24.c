#include <stdio.h>
int main(void)
{
    int count = 0;
    int gen_count = 0;
    double number = 0;
    double largest = 0;

    while(count < 10)
    {
        printf("Продавец №%d введите сумму ваших продаж ($00.00): ", ++count);
        scanf("%lf", &number);

        if(number > largest)
        {
            largest = number;
            gen_count = count;
        }

    }

    printf("Победитель продавец №%d с суммой продаж $%.2f \n\n", gen_count, largest);

    return 0;
}
