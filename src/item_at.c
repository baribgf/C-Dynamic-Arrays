#ifndef B_DYN_ARRAY
    #include "../include/arrays.h"
#endif

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
