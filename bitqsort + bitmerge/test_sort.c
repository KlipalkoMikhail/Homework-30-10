#include "headers.h"
#include <stdio.h>
#define N 8000

// 112  липалко ћихаил ћихайлович
// функци€ проверки сортировки на упор€доченность
// получаем в качестве параметров массив чисел и параметр текущей длины массива

int test_sort(int number[], int k)                   // функци€ проверки отсортированного массива на упор€доченность
{
    FILE * fout;                                        // файл с отсортированным массивом
    fout = fopen("out.txt", "a");                       // открытие файла с отсортированными массивами на добавление чисел

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // цикл проверки массива на упор€доченность
    {
        int u1 = 0;
        int u2 = 0;
        if (to_binary(number[i], &u1) > to_binary(number[i+1], &u2))  // условие пор€дка возрастани€ чисел
        {
            printf("INCORRECT SORTING.\n");             // неверное упор€дочивание
            return -1;
        }
    }

    for (int s = 0; s < k*N; ++s)                       // цикл записи чисел в fout
    {
        fprintf(fout, "%d ", number[s]);
    }

    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");

    fclose(fout);                                       // закрытие файла

    return 0;
}
