#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("                     чита    тарзан    джейн\n");
    printf("Счет первого раунда %4d %8d %8d\n", cheeta, tarzan, jane);
    int rocky = -12;
    int smokey = -rocky;
    printf("%d %d \n", rocky, smokey);

    return 0;
}
