#include <stdio.h>
#include <stdlib.h>
#include "test_strcasecmp.h"
#include "test_palindrome.h"

int main(int argc, char **argv)
{
    test_strcasecmp();

    printf("\n");

    test_pal();

    printf("\n");

    test_arguments(argc, argv);

    return 0;
}

