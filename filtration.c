#include <stdio.h>

int main(int argc, char* argv[])
{
	int x;
	printf("Number to split on digits:");
	scanf("%d", &x);
	while(x)
		{
			int digits = x%10;
			if(digits%2 == 1)
					printf("%d\n", digits);
			x /= 10;
		}
	
	return 0;
}
