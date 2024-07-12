#include <stdio.h>
int main(void)
{
    float sum_sales = 0;
    float salary = 0;

    while(sum_sales != -1)
    {
        printf("Enter summ sales in dollars (-1 for exit): ");
        scanf("%f", &sum_sales);
        if(sum_sales == -1)
        {
            break;
        }
        sum_sales /= 100;
        sum_sales *= 9;
        salary = sum_sales + 200;
        printf("Salary: %.2f\n", salary);
    }

    return 0;
}
