
#ifndef TYPES_H
    #define TYPES_H 1
#endif

#ifndef __STDBOOL_H
    #include <stdbool.h>
#endif

#define INT "<type int>"
#define DOUBLE "<type double>"
#define FLOAT "<type float>"
#define CHAR "<type char>"

#define is(x, type) _Generic(x, type: true, default: false)

#define _type(var, buff) {      \
    if (is(var, int))           \
        buff = INT;             \
    else if (is(var, double))   \
        buff = DOUBLE;          \
    else if (is(var, float))    \
        buff = FLOAT;           \
    else if (is(var, char))     \
        buff = CHAR;            \
}
