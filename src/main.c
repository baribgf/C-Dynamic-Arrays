#include <stdio.h>

#include "../include/arrays.h"

int main(int argc, char const *argv[])
{
    iarray arr = new_iarray();

    append_i(&arr, 10);
    append_i(&arr, 30);
    append_i(&arr, 20);
    append_i(&arr, 40);

    print_iarr(arr);
    printf("Size: %d\n", arr.size);

    printf("Returned from pop: %d\n", pop_i(&arr));

    print_iarr(arr);
    printf("Size: %d\n", arr.size);

    return 0;
}
