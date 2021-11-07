#include "headers.h"


void to_binary(int n, int *k)
{
    int r;
    if (n == 0) return;
    if (n < 0)
    {
        *k += 1;
        to_binary(-1*n, k);
    }
    r = n % 2;
    if (n >= 2)
        to_binary(n / 2, k);
    if (r == 1) *k += 1;
    return;
}
