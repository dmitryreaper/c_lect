/* использование операции sizeof
 в примере применяется определенный в стандарте с99 модификатор %z; если в вашей
 системе модификатор %zd не поддерживается, попробуйте %u or %lu */
#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d\n", n);
    printf("%lu\n", sizeof(n));
    return 0;

}
