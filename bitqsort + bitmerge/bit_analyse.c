#include "headers.h"


int bit_analyse(int *a,int *b)
{
    int res;
    int result = 0;

    res = *a;
    printf("%d\n", res);
    to_binary(res, &result);
    *a = result;
    printf("%d\n", result);

    result = 0;

    res = *b;
    printf("%d\n", res);
    to_binary(res, &result);
    *b = result;
    printf("%d\n", result);

    return 0;
}

