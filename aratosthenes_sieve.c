#include <stdio.h>
#define N 20

int main(int argc, char* argv[])
{
	int sieve[N] = {0};

	for(int i=0; i<N; i++)
		{
			printf("%3d", sieve[i]);
		}

	return 0;
}
