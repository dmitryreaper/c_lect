#include <stdio.h>
int main(void)
{
	int i = 1; // точка с запятой
	float n;
	printf("Будьте внимательны ! далее идет последовательность дробей !\n");
	while (i < 30)
		{
			n = 1/i;
			printf("%f", n);
		}
	printf("На этом всё! \n");
	return 0;
}
