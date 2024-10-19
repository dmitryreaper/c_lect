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
	} else if (((ch >= 65) && (ch <= 90))
		    || (ch >= 97 && (ch <= 122))) {
	    stat_chars++;
	}
	stat_total++;
    }
    printf("space chars  = %d\ntotal chars = %d\n", stat_space, stat_total);
    
    return 0;
}
