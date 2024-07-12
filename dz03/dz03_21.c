#include <stdio.h>
int main(void)
{
	int hour = 0;
	float for_hour = 0;
	float result = 0;

	while(hour != -1)
	{
		printf("Введите # отработанных часов (-1, если ввод закончен): ");
		scanf("%d", &hour);
		if(hour == -1)
			break;
		printf("Введите почасовой тариф работника ($00.00): ");
		scanf("%f", &for_hour);

		result = (float)hour * for_hour;

		printf("Зарплата состовляет $%.2f\n\n", result);
	}
	return 0;

}
