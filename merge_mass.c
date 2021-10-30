#include "headers.h"
#define N 4000

void merge_mass(double C[], int l, int m, int r, int k)
{
    int i;
    int j;
    int array1 = m - l + 1;
    int array2 = r - m;

    double A[array1];
    double B[array2];

    for (i = 0; i < array1; i++)
    {
        A[i] = C[l + i];
    }

    for (i = 0; i < array2; i++)
    {
        B[i] = C[m + 1 + i];
    }

    i = j = 0;

    for(int s = l; s <= r; s++)
    {
        if (i >= array1)
        {
            C[s] = B[j];
            j++;
        }
        else if (j >= array2)
        {
            C[s] = A[i];
            i++;
        }
        else if (A[i] <= B[j])
        {
            C[s] = A[i];
            i++;
        }
        else
        {
            C[s] = B[j];
            j++;
        }
    }
}
