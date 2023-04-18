#include <stdio.h>
#include <stdlib.h>

#include "../include/arrays.h"

void print(char* str)
{
    printf("%s\n", str);
}

int main(int argc, char const *argv[])
{
    iarray arr = new_iarray();

    iadd(&arr, -1, 10);
    iadd(&arr, -1, 20);
    iadd(&arr, -1, 30);

    irem(&arr, 0);

    print_iarr(arr);
    return 0;
}
