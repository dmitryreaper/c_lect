#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *number = (int *) malloc(sizeof(int));
    if (number == NULL)
    {
        fprintf(stderr, "Ошибка выделения памяти\n");
        return 1;
    }
   
    char Character[2];

    while(1)
    {
        printf("Введите один любой символ: ");

        scanf(" %c", &Character[0]);
        puts("\n");

        if(Character[0] == ' ')
        {
            puts("Некорректный ввод\n");
            continue;
        }

        *number = Character[0];

        printf("Символ '%c' равен ASCII коду: %d\n\n", Character[0], *number);

    }

    free(number);
    return 0;
}
