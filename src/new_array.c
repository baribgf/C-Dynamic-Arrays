#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

iarray new_iarray()
{
    iarray arr;
    arr.values = (int*) malloc(sizeof(int));
    arr.size = 0;
    return arr;
}

darray new_darray()
{
    darray arr;
    arr.values = (double*) malloc(sizeof(double));
    arr.size = 0;
    return arr;
}

carray new_carray()
{
    carray arr;
    arr.values = (char*) malloc(sizeof(char));
    arr.size = 0;
    return arr;
}

sarray new_sarray()
{
    sarray arr;
    arr.values = (char**) malloc(sizeof(char*));
    arr.size = 0;
    return arr;
}

parray new_parray()
{
    parray arr;
    arr.values = (void**) malloc(sizeof(void*));
    arr.size = 0;
    return arr;
}
