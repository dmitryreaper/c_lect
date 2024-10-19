#include <stdio.h>

int main(int argc, char** argv)
{
    int ch;
    int stat_space = 0;
    int stat_chars = 0;
    int stat_digits = 0;
    int stat_other = 0;
    int stat_total = 0;
    
    while ((ch = getchar()) != EOF) {
	if (ch == ' ') {
	    stat_space++;
	} else if ((ch >= 'A') && (ch <= 'Z')
		    || (ch >= 'a') && (ch <= 'z')) {
	    stat_chars++;
	} else if ((ch >= '0') && (ch <= '9')) {
	    stat_digits++;
        } else {
	    stat_other++;
	} 

	stat_total++;
    }
    
    printf("space = %d\n", stat_space);
    printf("chars = %d\n", stat_chars);
    printf("digits = %d\n", stat_digits);
    printf("other = %d\n", stat_other);
    printf("total = %d\n", stat_total);
    
    return 0;
}
