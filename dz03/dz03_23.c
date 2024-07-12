#include <stdio.h>
int main(void)
{
    int numbers = 0;

    while(numbers <= 10)
    {
        printf("%d   ", numbers++);
    }

    puts("");

    return 0;
}
