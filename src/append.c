#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

void append_i(iarray* array, int value)
{
    insert_i(array, -1, value);
}

void append_d(darray* array, double value)
{
    insert_d(array, -1, value);
}

void append_c(carray* array, char value)
{
    insert_c(array, -1, value);
}

void append_s(sarray* array, char* value)
{
    insert_s(array, -1, value);
}

void append_p(parray* array, void* value)
{
    insert_p(array, -1, value);
}
