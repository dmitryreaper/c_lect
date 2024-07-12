/* Различие между предекрементом и постдекрементом */
#include <stdio.h>
int main(void)
{
    int number = 5;
    printf("Значение x = %d\n", number);
    printf("Значение x после предекремента: %d \n", --number);
    printf("Значение x после постдекремента: %d \n", number--);
    printf("Значение x в следующей операции: %d \n", number);

    return 0;
}
