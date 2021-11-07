#include "headers.h"

int bit_analyse(int *a)
{
    int res;
    int result = 0;

    res = *a;
    to_binary(res, &result);
    *a = result;

    return result;
}
