#include <stdio.h>
int main(void)
{
    int number_one = 0;
    int number_two = 0;
    int result = 0;
    char Character;
    printf("Hello this calculator develop to learn programming in C\n");
    printf("Version calculator - 0.1\n");
    while(1)
	{
	    printf("Enter number: ");
	    scanf("%d%c%d", &number_one, &Character, &number_two);
	    if(Character == '+')
		{
		    result = number_one + number_two;
		    printf("= %d\n", result);
		    continue;
		}
	    else if(Character == '-')
		{
		    result = number_one - number_two;
		    printf("= %d\n", result);
		    continue;
		}
	    else if(Character == '/')
		{
		    result = number_one / number_two;
		    printf("= %d\n", result);
		    continue;
		}
	    else if(Character == '*')
		{
		    result = number_one * number_two;
		    printf("= %d\n", result);
		    continue;
		}
	    else
		{
		    printf("Error: enter correct data\n");
		    continue;
		}
	}
    
    return 0;
}
