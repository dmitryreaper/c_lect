#include <stdio.h>
#define B "booboo"
#define X 10

int main(void)
{
    int age;
    char name[5];
    int xp;
    printf("Enter your name: ");
    scanf("%s,", &name[0]);

    printf("Ok, %s and how old are you ? ", name);
    scanf("%d", &age);
    xp = age + X;
    printf("Cool , %s you maybe %d ?\n", B, xp);
    
    return 0;
}
