#include <stdio.h>
int main(void)
{
    int year = 2024;
    char name[5];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s this year is %d\n", name, year);

    return 0;
}
