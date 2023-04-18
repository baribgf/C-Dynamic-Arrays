#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

const char* _OP = "[";
const char* _CL = "]";
const char* _SEP = ", ";

void print_iarr(iarray array)
{
    printf("%s", _OP);
    for (int i=0; i<array.size; i++)
    {
        printf("%d", array.values[i]);
        if (i != array.size - 1)
            printf("%s", _SEP);
    }
    printf("%s\n", _CL);
}

void print_darr(darray array)
{
    printf("%s", _OP);
    for (int i=0; i<array.size; i++)
    {
        printf("%.2f", array.values[i]);
        if (i != array.size - 1)
            printf("%s", _SEP);
    }
    printf("%s\n", _CL);
}

void print_carr(carray array)
{
    printf("%s", _OP);
    for (int i=0; i<array.size; i++)
    {
        printf("'%c'", array.values[i]);
        if (i != array.size - 1)
            printf("%s", _SEP);
    }
    printf("%s\n", _CL);
}

void print_sarr(sarray array)
{
    printf("%s", _OP);
    for (int i=0; i<array.size; i++)
    {
        printf("\"%s\"", array.values[i]);
        if (i != array.size - 1)
            printf("%s", _SEP);
    }
    printf("%s\n", _CL);
}

void print_parr(parray array)
{
    printf("%s", _OP);
    for (int i=0; i<array.size; i++)
    {
        printf("%p", array.values[i]);
        if (i != array.size - 1)
            printf("%s", _SEP);
    }
    printf("%s\n", _CL);
}
