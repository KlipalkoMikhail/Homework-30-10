#include "headers.h"

// 112 �������� ������ ����������

void to_binary(int n, FILE * fout)
{
    int count = 0;
    int mask = 1;
    mask <<= 30;

    fprintf(fout, "%d   ", n);

    if (n < 0)
    {
        fprintf(fout, "\t1");
        n = -n;
        count++;
    }
    else
    {
        fprintf(fout, "\t0");
    }

    for (int i = 1; i < 32; i++)
    {

        if ((n & mask) == 0)
        {
            fprintf(fout, "0");
        }
        else
        {
            fprintf(fout, "1");
            count ++;
        }

        mask >>= 1;
        if(i % 8 == 0) fprintf(fout, " ");
    }

    fprintf(fout, "%3d", count);
    fprintf(fout, "\n");
}
