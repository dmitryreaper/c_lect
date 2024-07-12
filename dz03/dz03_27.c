#include <stdio.h>
int main(void)
{
    int count = 0;
    int gen_count = 0;
    int two_gen_count = 0;
    double number = 0;
    double largest = 0;
    double two_largest = 0;

    while(count < 10)
    {
        printf("Продавец №%d введите сумму ваших продаж ($00.00): ", ++count);
        scanf("%lf", &number);


        if(number > largest)
        {
            largest = number;
            gen_count = count;
        }
        else
        {
            largest = 0;
        }

        if(two_largest < largest)
        {
            two_largest = largest;
            two_gen_count = count;
        }

    }

    printf("Вот два победителя: продавец №%d с суммой продаж $%.2f\nИ продавец №%d с суммой продаж $%.2f\n\n", gen_count, largest, two_gen_count, two_largest);

    return 0;
}
