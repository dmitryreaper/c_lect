#include <stdio.h>
int main(void)
{
	int number;
	int number_two;
	number = (2 + 3) * 6;
	printf("number = %d\n", number);
	number = (12 + 6) / 2 * 3;
	printf("number = %d\n", number);
	number_two = number = (2 + 3) / 4;
	printf("number = %d number_two = %d\n", number, number_two);
	number_two = 3 + 2 * (number = 7/2);
	printf("number = %d number_two = %d\n", number, number_two);
	
}
