/* Определяет фукцию с аргументами */
#include <stdio.h>
void pound(int n );
int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;
	pound(times);
	pound(ch);
	pound((long)f);
	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		{
			printf("#");
		}
	printf("\n");
}
