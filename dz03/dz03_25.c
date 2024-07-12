#include <stdio.h>
int main(void)
{
    int numbers = 1;
    int count = 0;

    printf("N\t 10*N\t 100*N\t 1000*N\n\n");
    while(count < 10)
    {
        printf("%d\t %d\t %d\t %d\n", numbers++, numbers*10, numbers*100, numbers*1000);
        count++;
    }

    return 0;
}
