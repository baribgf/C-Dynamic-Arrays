#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

void rem_i(iarray* array, int index)
{
    _rem(array, index, int);
}

void rem_c(carray* array, int index)
{
    _rem(array, index, char);
}

void rem_d(darray* array, int index)
{
    _rem(array, index, double);
}

void rem_s(sarray* array, int index)
{
    _rem(array, index, char*);
}

void rem_p(parray* array, int index)
{
    _rem(array, index, void*);
}
