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

void iadd(iarray* array, int index, int value)
{
    _add(array, value, index, int);
}

void cadd(carray* array, int index, char value)
{
    _add(array, value, index, char);
}

void dadd(darray* array, int index, double value)
{
    _add(array, value, index, double);
}

void sadd(sarray* array, int index, char* value)
{
    _add(array, value, index, char*);
}

void padd(parray* array, int index, void* value)
{
    _add(array, value, index, void*);
}

void irem(iarray* array, int index)
{
    _rem(array, index, int);
}

void crem(carray* array, int index)
{
    _rem(array, index, char);
}

void dorem(darray* array, int index)
{
    _rem(array, index, double);
}

void srem(sarray* array, int index)
{
    _rem(array, index, char*);
}

void prem(parray* array, int index)
{
    _rem(array, index, void*);
}

void print_iarr(iarray array)
{
    printf("%s", "[");
    for (int i=0; i<array.size; i++)
    {
        printf("%d", array.values[i]);
        if (i != array.size - 1)
            printf("%s", ", ");
    }
    printf("%s\n", "]");
}
