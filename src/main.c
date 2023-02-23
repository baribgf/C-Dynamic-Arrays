#include <stdio.h>

#include "../libs/array.h"

void print(char* str)
{
    printf("%s\n", str);
}

int main(int argc, char const *argv[])
{
    parray arr;

    padd(&arr, -1, "10");
    padd(&arr, -1, "20");
    padd(&arr, -1, "30");

    print("Before remove");
    for (int i = 0; i < arr.size; i++)
    {
        printf("%s\n", arr.values[i]);
    }

    prem(&arr, -1);

    print("\nAfter remove");
    for (int i = 0; i < arr.size; i++)
    {
        printf("%s\n", arr.values[i]);
    }
    
    return 0;
}
