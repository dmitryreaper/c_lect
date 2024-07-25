#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;

	printf("Эта программа преобразует время пробега дистанции в метрической системе\n");
	printf("во время пробега одной мили и вычисляет вашу среднюю\n");
	printf("скорость в милях в час.\n");
	printf("Введите дистанцию пробега в километрах: ");
	scanf("%lf", &distk);
	printf("Введите минуты и секунды\n");
	printf("Минут: ");
	scanf("%d", &min);
	printf("Секунд: ");
	scanf("%d", &sec);

	// переводит минуты в секунды
	time = S_PER_M * min + sec;
	// переводит километры в мили
	distm = M_PER_K * distk;
	// умножение миль в секунды на количество в часе дает количество миль в час
	rate = distm / time * S_PER_H;
	// деление времени на расстояние дает время пробега одной мили
	mtime = (double) time / distm;
	mmin = (int) mtime / S_PER_M; // вычисление полного количества минут
	msec = (int) mtime % S_PER_M;
	printf("Вы пробежали %1.2f км (%1.2f мили) за %d мин, %d сек. \n", distk, distm, min, sec);
	printf("Такая скорость соответствует пробегу одной мили за %d мин, ", mmin);
	printf("%d сек. \nВаша средняя скорость составила %1.2f миль в секунду. \n", msec, rate);

	return 0;
}
