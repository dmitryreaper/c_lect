#include <stdio.h>
#define weekcnt 7
int main(void)
{
	int week, days;
	int days_remains;
	printf("Введите количество дней: ");
	scanf("%d", &days);
	week = days / weekcnt;
	days_remains = days % weekcnt;
	printf("%d дней стостовляют %d недель и %d дня. \n", days, week, days_remains );

	return 0;
	
}
