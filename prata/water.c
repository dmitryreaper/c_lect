#include <stdio.h>
#include <math.h>

int main(void)
{
    int water_v = 0; 
    printf("Введите объем воды в квартах: ");
    scanf("%d", &water_v);

    printf("Объем воды равен %.10f молекулам воды в этом объеме\n", (float)water_v * (3.0 * pow(10,-23)));

    return 0;
}
