#include <stdio.h>

int main(int argc, char* argv[])
{
	int x = 256;

	x += 256;
	x -= 256;
	x *= 2;
	x /= 8;
	printf("x = %d\n", x);

	return 0;
}
