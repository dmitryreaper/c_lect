#include <stdio.h>
int main(void)
{
	int number = 1;
	int number_b;
	printf("Введите целое число: ");
	scanf("%d", &number);
	number_b = number + 10;
	while(number <= number_b)
		{
			printf("%3d", number);
			number++;
		}
	printf("\n");

	return 0;
}
