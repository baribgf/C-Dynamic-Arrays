#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

void insert_i(iarray* array, int index, int value)
{
    _insert(array, value, index, int);
}

void insert_c(carray* array, int index, char value)
{
    _insert(array, value, index, char);
}

void insert_d(darray* array, int index, double value)
{
    _insert(array, value, index, double);
}

void insert_s(sarray* array, int index, char* value)
{
    _insert(array, value, index, char*);
}

void insert_p(parray* array, int index, void* value)
{
    _insert(array, value, index, void*);
}
