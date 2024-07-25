#include <stdio.h>
#define S_TO_M 60
int main(void)
{
	int sec, min, left;
	printf("Эта программа переводит секунды в минуты и секунды \n");
	printf("Введите количество секунд: ");
	while(sec > 0)
		{
			scanf("%d", &sec);
			min = sec / S_TO_M;
			min = sec/S_TO_M;
			left = sec % S_TO_M;
			printf ("%d секунд - это %d минут %d секунд. \n", sec, min, left);
			printf("Cлeдyющee значение?\n");
		}
	printf("До свидания !\n");
	return 0;
}
