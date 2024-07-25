#include <stdio.h>
int main(void)
{
	const int sec = 60;
	int min = 1, hour;

	while(min > 0)
		{
			printf("Введите время в минутах: ");
			scanf("%d", &min);
			if(min <= 0)
				break;
			hour = min / sec;
			min = min % sec;
			printf("Время равняется %d часам %d минутам \n", hour, min);
			min++;
		}

	return 0;
}
