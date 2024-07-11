#include <stdio.h>
int main(void)
{
    long number_score = 0;
    float balance = 0;
    float general_expenditure = 0;
    float general_sum_credit = 0;
    float limit_credit = 0;
    float new_balance = 0;

    while(number_score != -1)
    {
        printf("Введите номер счета (-1 если ввод закончен): ");
        scanf("%ld", &number_score);
        if(number_score == -1)
        {
            break;
        }
        printf("Введите начальный баланс: ");
        scanf("%f", &balance);
        printf("Введите общую сумму расходов: ");
        scanf("%f", &general_expenditure);
        printf("Введите общую сумму кредита: ");
        scanf("%f", &general_sum_credit);
        printf("Введите предельный размер кредита: ");
        scanf("%f", &limit_credit);

        new_balance = balance + (general_expenditure - general_sum_credit);

        printf("Счет: %ld\n", number_score);
        printf("Предельный размер кредита: %.2f\n", limit_credit);
        printf("Балан: %.2f\n", new_balance);

        if(new_balance > limit_credit)
        {
            puts("Предельный размер кредита превышен.");
        }
        else
        {
            puts("Предельный кредит не превышен");
        }

    }

    return 0;
}
