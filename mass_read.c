#include "headers.h"
#include <stdio.h>
#define N 4000

// 112 ???????? ?????? ??????????
// ??????? ??? ?????????? ????? ?? ???????
// ???????? ? ???????? ?????????? ?????? ? ???????? ????? ???????

void mass_read(double number[], int k)                      // ??????? ??? ?????????? ???????, ????? ????? ???????????? ?????? ? quick ??????????
{
    FILE * fsource;                                         // ???? ??? ?????????? ????????? ???????
    FILE * fin;                                             // ???? ??? ?????????????????? ???????
    fin = fopen("in.txt", "a");                             // ???????? ????? ? ????????????????? ???????? ?? ?????????? ?????
    fsource = fopen("source.txt", "r");                     // ???????? ????? ? ???????? ???????? ?? ??????

    for(int i = 0; i < k*N; ++i)                            // ???? ?????????? ????? ?? ????????? ?????
    {
        fscanf(fsource, "%lf", &number[i]);                 // ?????????? ????? ?? ?????
    }

    fclose(fin);                                            // ???????? ????? ? ????????????????? ????????
    fclose(fsource);                                        // ???????? ????? ? ???????? ????????
}
