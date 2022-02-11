/* Print a float in binary: ftob.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    unsigned int value, j, mask;
    float n = 0.75;
    unsigned int fl = *(unsigned int*)&(n);

    for (int j=0; j<32; j++) {
        mask = 1<<((31-j));
        printf("%u", (fl & mask)>>(31-j));
    }
    printf("\n");
}



/* End of ftob.c */
