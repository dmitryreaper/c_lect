#include <stdio.h>
int main(void)
{
    double expenditure = 0;
    double way = 0;
    double result;
    double general_way = 0;
    double general_expenditure = 0;
    double general_result = 0;

    while(expenditure != -1)
    {
        printf("Введите расход бензина (-1, если ввод закончен): ");
        scanf("%lf", &expenditure);
        if(expenditure == -1)
        {
            break;
        }

        printf("Введите пройденный путь: ");
        scanf("%lf", &way);

        general_expenditure += expenditure;
        general_way += way;
        result = way / expenditure;
        printf("Для этой заправки получено миль/галло %lf\n\n", result);

    }
    general_result = general_way / general_expenditure;
    puts("");
    printf("Среднее число миль/галлон %lf\n\n", general_result);
}
