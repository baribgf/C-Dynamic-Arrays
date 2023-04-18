#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

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

void print_darr(darray array)
{
    printf("%s", "[");
    for (int i=0; i<array.size; i++)
    {
        printf("%f", array.values[i]);
        if (i != array.size - 1)
            printf("%s", ", ");
    }
    printf("%s\n", "]");
}

void print_carr(carray array)
{
    printf("%s", "[");
    for (int i=0; i<array.size; i++)
    {
        printf("%c", array.values[i]);
        if (i != array.size - 1)
            printf("%s", ", ");
    }
    printf("%s\n", "]");
}

void print_sarr(sarray array)
{
    printf("%s", "[");
    for (int i=0; i<array.size; i++)
    {
        printf("%s", array.values[i]);
        if (i != array.size - 1)
            printf("%s", ", ");
    }
    printf("%s\n", "]");
}

void print_parr(parray array)
{
    printf("%s", "[");
    for (int i=0; i<array.size; i++)
    {
        printf("%p", array.values[i]);
        if (i != array.size - 1)
            printf("%s", ", ");
    }
    printf("%s\n", "]");
}
