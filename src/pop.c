#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

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
