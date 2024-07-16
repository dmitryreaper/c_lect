#include <stdio.h>

int main(void)
{
    int number;
    char name[40];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is %s\n", name);

    printf("40 index = %d\n", name[40]);

    return 0;
}
