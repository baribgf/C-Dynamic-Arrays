
/* 
    A Clang library to work with dynamic arrays with different actions: add, remove, find, includes.
    Created by: Bari BGF
    On: 10-02-2023
 */

#ifndef TYPES_H
    #include "types.h"
#endif

#ifndef B_DYN_ARRAY
    #define B_DYN_ARRAY 1
#endif

#ifndef _STDIO_H
    #include <stdio.h>
#endif

#ifndef _GLIBCXX_STDLIB_H
    #include <stdlib.h>
#endif

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

#define init(array) array.size = 0;

// add by index
#define _add(array, value, index, type) {                                  \
    int size = array->size;                                                \
    if (index == -1) index = size;                                         \
    if (index > size || index < 0) {                                       \
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
    free(array->values);                                                   \
    array->values = new_array;                                             \
    array->size++;                                                         \
}

// Add int to iarray
void iadd(iarray* array, int index, int value) {
    _add(array, value, index, int);
}

// Add char to carray
void cadd(carray* array, int index, char value) {
    _add(array, value, index, char);
}

// Add double to darray
void dadd(darray* array, int index, double value) {
    _add(array, value, index, double);
}

// Add string to sarray
void sadd(sarray* array, int index, char* value) {
    _add(array, value, index, char*);
}

// Add pointer to parray
void padd(parray* array, int index, void* value) {
    _add(array, value, index, void*);
}

// remove with index
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
    free(array->values);                                                   \
    array->values = new_array;                                             \
    array->size--;                                                         \
}

// Remove integer from iarray by index
void irem(iarray* array, int index) {
    _rem(array, index, int);
}

// Remove char from carray by index
void crem(carray* array, int index) {
    _rem(array, index, char);
}

// Remove double from darray by index
void dorem(darray* array, int index) {
    _rem(array, index, double);
}

// Remove string from sarray by index
void srem(sarray* array, int index) {
    _rem(array, index, char*);
}

// Remove pointer from parray by index
void prem(parray* array, int index) {
    _rem(array, index, void*);
}

// Output array into shell
#define print_arr(array)                          \
{                                                 \
    printf("%s", "[ ");                           \
    for (int i=0; i<array.size; i++)              \
    {                                             \
        if (is(array.values[0], int))             \
            printf("%d", array.values[i]);        \
        else if (is(array.values[0], double))     \
            printf("%.2f", array.values[i]);      \
        else if (is(array.values[0], char))       \
            printf("\'%c\'", array.values[i]);    \
        else if (is(array.values[0], char*))      \
            printf("\"%s\"", array.values[i]);    \
        else if (is(array.values[0], void*))      \
            printf("%p", array.values[i]);        \
        if (i != array.size - 1)                  \
            printf("%s", ", ");                   \
    }                                             \
    printf("%s\n", " ]");                         \
}
