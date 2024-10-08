#include <stdio.h>
#define SQUARES 64
int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;
    printf("квадрат    добавленого итого     ");
    printf("процент от\n");
    printf("        зерен        зерен");
    printf("мирового уражая\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while(count < SQUARES)
	{
	    count = count + 1;
	    current = 2.0 * current;
	    total = total + current;
	    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
	}
    printf("Вот и всё.\n");
    return 0;
}
