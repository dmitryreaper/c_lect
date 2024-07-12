#include <stdio.h>
int main(void)
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while(student <= 10)
    {
        printf("Enter result (1=pass, 2=fail): ");
        scanf("%d", &result);

        if(result == 1)
        {
            passes++;
        }
        else if(result != 1 && result != 2)
        {
            printf("Please enter correct number\n");
            continue;
        }
        else {
            failures++;
        }

        student++;
    }

    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

    if(passes > 8)
    {
        puts("Bonus to instructor");
    }

    return 0;
}
