#include "headers.h"
#include <stdio.h>
// 112 Клипалко Михаил Михайлович

int bit_compare(const void *a, const void *b)    // функция сравнения двух чисел из массива
{
    const int *c, *d;
    int p1, p2;
    c = (const int*)a;
    d = (const int*)b;
    p1 = *c;
    p2 = *d;

    bit_analyse(&p1, &p2);

    if (p1 < p2)
    {
        return -1;                               // возращаем знак разности этих чисел
    }
    else if (p1 > p2)
    {
        return 1;                                // возращаем знак разности этих чисел
    }
    else
    {
        return 0;                                // возращаем знак разности этих чисел
    }
}

