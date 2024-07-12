#include <stdio.h>
#include <string.h>

typedef char bin_t[33];
#define get_bin(s) ( scanf("%32s", (s)) == 1 && strlen(s) == strspn((s), "01") )

unsigned bin2num(const char * bin) {
    unsigned ret = 0;

    for ( ; *bin; ++bin )
        ret = (ret << 1) | (*bin - '0');

    return ret;
}



int main(void) {
    bin_t bin;

    while ( printf("Binary: ") && get_bin(bin) )
        printf("Decimal: %u\n", bin2num(bin));

    return 0;
}
