#include <stdio.h>
#include <stdlib.h>
#include "include/arrays.h"

int main()
{
    sarray arr = new_sarray();

    append_s(&arr, "aa");
    append_s(&arr, "bb");
    append_s(&arr, "cc");

    print_sarr(arr);

    return 0;
}
