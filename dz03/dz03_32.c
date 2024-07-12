#include <stdio.h>

int main(void)
{
    int x, y;
    x = 5;
    y = 8;

    if( y == 7 )
    {
        if( x == 5 )
        printf("@@@@@@\n");

    }
    else
    {
        printf("#####\n");
        printf("$$$$$\n");
        printf("&&&&&\n");
    }


    return 0;
}
