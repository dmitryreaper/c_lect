#include <stdio.h>

int main(void)
{
    int star = 100;
    int count = 0;               /*  */

    while(count < star)
    {
        ++count;
        printf("*");
        if(count % 10 == 0)
        {
            printf("\n");
        }

    }

    puts("");

    return 0;
}
