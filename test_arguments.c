#include <stdio.h>
#include "test_arguments.h"



int test_arguments(int argc, char **argv) {
    printf("Exercice Arguments\n");
    printf("------------------\n");
    char first = 1;
    for (int i=1; i < argc; i++) {
        if ( i%2 == 1 ) {
            if ( first ) {
              first = 0;
            }
            else printf(" ");
            printf(argv[i]);
        }
    }
    printf("\n");
    return 0;
}
