#include <stdio.h>
int main(void)
{
    float interest, principal, rate, days;
    interest = principal = rate = days = 0;
    while(interest != -1)
    {
        printf("Введите основную сумму ссуды (-1, если ввод закончен): ");
        scanf("%f", &principal);
        if(principal == -1)
        {
            break;              /* "exit" */
        }
        printf("Введите процентную ставку: ");
        scanf("%f", &rate);
        printf("Введите срок в днях: ");
        scanf("%f", &days);

        interest = principal * rate * days / 365;
        printf("Выплаты по простам процентам состовляют $%.2f\n", interest);

    }

    return 0;                  
}
