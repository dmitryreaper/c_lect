#include <stdio.h>

int main(void)
{
    int count, mil;
    count = 0;
    mil = 3000000;
    int fin = 0;

    while(1)
    {
        if(count > mil)
        {
            if(fin == 1000000)
            {
                printf("fin !");
                fin = 0;
            }
            else
                fin++;
        }
        else
        {
            count++;
        }
    }

    return 0;
}
