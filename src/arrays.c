#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////

int i_at(iarray array, int index)
{
    if (index == -1)
    {
        index = array.size + index;
    }
    return array.values[index];
}

double d_at(darray array, int index)
{
    if (index == -1)
    {
        index = array.size + index;
    }
    return array.values[index];
}

char c_at(carray array, int index)
{
    if (index == -1)
    {
        index = array.size + index;
    }
    return array.values[index];
}

char* s_at(sarray array, int index)
{
    if (index == -1)
    {
        index = array.size + index;
    }
    return array.values[index];
}

void* p_at(parray array, int index)
{
    if (index == -1)
    {
        index = array.size + index;
    }
    return array.values[index];
}

////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
void append_i(iarray* array, int value)
{
    int last = i_at(*array, -1);
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
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////

int pop_i(iarray* array)
{
    int last = i_at(*array, -1);
    rem_i(array, -1);
    return last;
}

double pop_d(darray* array)
{
    double last = d_at(*array, -1);
    rem_d(array, -1);
    return last;
}

char pop_c(carray* array)
{
    char last = c_at(*array, -1);
    rem_c(array, -1);
    return last;
}

char* pop_s(sarray* array)
{
    char* last = s_at(*array, -1);
    rem_s(array, -1);
    return last;
}

void* pop_p(parray* array)
{
    void* last = p_at(*array, -1);
    rem_p(array, -1);
    return last;
}

////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////
