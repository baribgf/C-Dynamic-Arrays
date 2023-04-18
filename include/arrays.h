
/* 
 * A Clang library to work with dynamic arrays with different actions: add, remove, find, includes.
 * Created by: Bari BGF
 * On: 10-02-2023
 */

#ifndef B_DYN_ARRAY
    #define B_DYN_ARRAY 1
#endif

#ifndef _STDIO_H
    #include <stdio.h>
#endif

#ifndef _GLIBCXX_STDLIB_H
    #include <stdlib.h>
#endif

////////////////////////////////////////////////////////////////////

// Array of integers
typedef struct
{
    int* values;
    int size;
} iarray;

// Array of doubles
typedef struct
{
    double* values;
    int size;
} darray;

// Array of chars
typedef struct
{
    char* values;
    int size;
} carray;

// Array of strings
typedef struct
{
    char** values;
    int size;
} sarray;

// Array of pointers
typedef struct
{
    void** values;
    int size;
} parray;

////////////////////////////////////////////////////////////////////

// Create new iarray
iarray new_iarray();

// Create new darray
darray new_darray();

// Create new carray
carray new_carray();

// Create new sarray
sarray new_sarray();

// Create new parray
parray new_parray();

////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////

// Get item at index from iarray
int i_at(iarray array, int index);

// Get item at index from darray
double d_at(darray array, int index);

// Get item at index from carray
char c_at(carray array, int index);

// Get item at index from sarray
char* s_at(sarray array, int index);

// Get item at index from parray
void* p_at(parray array, int index);

////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////

// insert by index
#define _insert(array, value, index, type) {                               \
    int size = array->size;                                                \
    if (index == -1) index = size;                                         \
    if (index > size || index < 0)                                         \
    {                                                                      \
        printf("Error: index out of bounds, got: %d\n", index);            \
        exit(1);                                                           \
    }                                                                      \
    type* new_array = (type*) malloc((size + 1) * sizeof(type));           \
    if (new_array == NULL) {                                               \
        printf("%s\n", "Error: Can't allocate space!");                    \
        exit(1);                                                           \
    }                                                                      \
    for (int i = 0; i < size + 1; i++) {                                   \
        if (i < index)                                                     \
            new_array[i] = array->values[i];                               \
        else if (i > index)                                                \
            new_array[i] = array->values[i - 1];                           \
        else                                                               \
            new_array[i] = value;                                          \
    }                                                                      \
    array->values = new_array;                                             \
    array->size++;                                                         \
}

// Insert int to iarray
void insert_i(iarray* array, int index, int value);

// Insert char to carray
void insert_c(carray* array, int index, char value);

// Insert double to darray
void insert_d(darray* array, int index, double value);

// Insert string to sarray
void insert_s(sarray* array, int index, char* value);

// Insert pointer to parray
void insert_p(parray* array, int index, void* value);

////////////////////////////////////////////////////////////////////

// Remove with index
#define _rem(array, index, type)                                           \
{                                                                          \
    int size = array->size;                                                \
    if (index == -1) index = size - 1;                                     \
    if (index >= size || index < 0) {                                      \
        printf("Error: index out of bounds, got: %d\n", index);            \
        exit(1);                                                           \
    }                                                                      \
    type* new_array = (type*) malloc((size - 1) * sizeof(type));           \
    if (new_array == NULL) {                                               \
        printf("%s\n", "Error: Can't allocate space");                     \
        exit(1);                                                           \
    }                                                                      \
    for (int i = 0; i < size; i++) {                                       \
        if (i < index)                                                     \
            new_array[i] = array->values[i];                               \
        else                                                               \
            new_array[i] = array->values[i + 1];                           \
    }                                                                      \
    array->values = new_array;                                             \
    array->size--;                                                         \
}

// Remove integer from iarray by index
void rem_i(iarray* array, int index);

// Remove char from carray by index
void rem_c(carray* array, int index);

// Remove double from darray by index
void rem_d(darray* array, int index);

// Remove string from sarray by index
void rem_s(sarray* array, int index);

// Remove pointer from parray by index
void rem_p(parray* array, int index);

////////////////////////////////////////////////////////////////////

// Append item into iarray
void append_i(iarray* array, int value);

// Append item into darray
void append_d(darray* array, double value);

// Append item into carray
void append_c(carray* array, char value);

// Append item into sarray
void append_s(sarray* array, char* value);

// Append item into parray
void append_p(parray* array, void* value);

////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////

// Pop item from iarray
int pop_i(iarray* array);

// Pop item from darray
double pop_d(darray* array);

// Pop item from carray
char pop_c(carray* array);

// Pop item from sarray
char* pop_s(sarray* array);

// Pop item from parray
void* pop_p(parray* array);

////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////

// Output iarray into shell
void print_iarr(iarray array);

// Output darray into shell
void print_darr(darray array);

// Output carray into shell
void print_carr(carray array);

// Output sarray into shell
void print_sarr(sarray array);

// Output parray into shell
void print_parr(parray array);

////////////////////////////////////////////////////////////////////
