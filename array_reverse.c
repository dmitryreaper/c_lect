#include <stdio.h>
#define N 10

void print_array(int A[])
{
	for(int i = 0; i < N; ++i)
		{
			printf("%3d", A[i]);
		}
	puts("");
}

int main(int argc, char* argv[])
{
	int A[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int B[N] = {0};
	print_array(A);

	for(int i = 0; i < N-1; ++i)
		{
			int tmp = A[i];
			A[i] = A[N - 1 - i];
			A[N - 1 - i] = tmp;
		}
	print_array(A);
}
