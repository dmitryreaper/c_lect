#include <stdio.h>
int main(void)
{
    /* post inc */
    int number;
    number = 5;
    printf("%d\n", number);          /* print 5 */
    printf("%d\n", number++);          /* print 5 and run increment */
    printf("%d\n\n", number);          /* print 6*/

    /* pre inc */
    number = 5;
    printf("%d\n", number);          /* print 5 */
    printf("%d\n", ++number);        /* run inc and print 6 */
    printf("%d\n", number);        /* print 6 */

    return 0;
}
